# Name Your Car - OpenAI API Quickstart - Python example app

This is an example app using the OpenAI API [quickstart tutorial](https://beta.openai.com/docs/quickstart). It uses the [Flask](https://flask.palletsprojects.com/en/2.0.x/) web framework.
## Setup

1. Add your [API key](https://beta.openai.com/account/api-keys) to the `.env` file. It will throw errors if no key is provided.

2. Run the app

   ```bash
   $ flask run
   ```

You should now be able to access the app at [http://localhost:5000](http://localhost:5000)!

## What It Does

Given a type or model of car, this program will create a human-like name for it. It uses Python flask to create the web front end, and uses the OpenAI api to query and prompt. Future update will include a feedback option for returned names, allowing approved names to be added to improve the prompt. 

## Credit 
Thanks to Rajeev Nayak, Atty Eleti, and the OpenAI team for the easy to setup project. This car naming implementation is done by me, Matthew Joel.