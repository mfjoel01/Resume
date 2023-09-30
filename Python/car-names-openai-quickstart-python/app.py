import os

import openai
from flask import Flask, redirect, render_template, request, url_for

app = Flask(__name__)
openai.api_key = os.getenv("OPENAI_API_KEY")

#openai api fine_tunes.create -t <TRAIN_FILE_ID_OR_PATH> -m <BASE_MODEL>




@app.route("/", methods=("GET", "POST"))
def index():
    if request.method == "POST":
        car = request.form["animal"]
        response = openai.Completion.create(
            model="text-davinci-003",
            prompt=generate_prompt(car),
            temperature=0.5,
        )
        return redirect(url_for("index", result=response.choices[0].text))

    result = request.args.get("result")
    return render_template("index.html", result=result)


def generate_prompt(car):
    return """Suggest three human names for a car.

Car: Toyota Supra
Names: Stacy Supra, Tony Toyota, GR Remi
Car: Mitsubishi Evo
Names: Evo Edward, Mitsubishi Mikey, Lancer Larry
Car: Mercedes G-Wagon
Names: Merc Manny, Benny Benz, Gigi Wagon
Car: Honda Prelude
Names: Henry Honda, CRV CiCi, Peter Prelude

Car: {}
Names:""".format(
        car.capitalize()
    )
