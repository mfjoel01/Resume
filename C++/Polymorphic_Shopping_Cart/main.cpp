#include "AudioProduct.hpp"
#include "BookProduct.hpp"
#include "Cart.hpp"
#include "EBookProduct.hpp"
#include "PaperBookProduct.hpp"
#include "Product.hpp"
#include "VideoProduct.hpp"

int main() {

  NameType aName{"Beetles", ""};
  AudioProduct music1("Yesterday", 16.5, aName);
  music1.setGenre(GenreType::Rock);
  music1.setReviewRate(9.8);

  NameType bName{"Johnny", "Cash"};
  AudioProduct music2("I walk the line", 14.99, bName);
  music2.setGenre(GenreType::Rock);
  music2.setReviewRate(8.8);

  NameType cName{"Kanye", "West"};
  AudioProduct music3("I Wonder", 11.99, cName);
  music3.setGenre(GenreType::Rap);
  music3.setReviewRate(7.0);

  NameType dName{"Chris", "Nolan"};
  VideoProduct video1("Batman", 21.99, dName, 2008, 120);
  video1.setReviewRate(9.1);
  video1.setRate(FilmRateType::PG_13);

  NameType eName{"Quinten", "Tarantino"};
  VideoProduct video2("Some Violent Movie", 5.99, eName, 2004, 105);
  video2.setReviewRate(8.1);
  video2.setRate(FilmRateType::R);

  NameType fName{"God", ""};
  PaperBookProduct book1("Bible", 99.99, fName, 2000);
  book1.setReviewRate(10.0);

  NameType gName{"John", "Steinbeck"};
  EBookProduct book2("East of Eden", 4.99, gName, 198);
  book2.setReviewRate(7.8);

  NameType xName = {"Sung", "Nam"};
  Cart myCart(xName);
  myCart.addItem(&music1);
  myCart.addItem(&music2);
  myCart.addItem(&music3);
  myCart.addItem(&video1);
  myCart.addItem(&video2);
  myCart.addItem(&book1);
  myCart.addItem(&book2);

  myCart.removeItem(music2.getProdID());
  myCart.displayCart();
}