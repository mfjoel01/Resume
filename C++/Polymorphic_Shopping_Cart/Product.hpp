#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string>


struct NameType{ //outside of product class because it will be used elsewhere, including where product is not inherited
  std::string First;
  std::string Last;
};

typedef int prod_id_t;

class Product
{
  public:
  Product();
  ~Product();//destructor
  Product(std::string aProdName, double aPrice);
  
  prod_id_t getProdID();
  std::string getProdName();
  double getPrice ();
  float getReviewRate();

  void setProdID(prod_id_t theID);
  void setProdName(std::string theName);
  void setPrice (double thePrice);
  void setReviewRate(float theRate);

  virtual std::string getProdTypeStr() = 0;
  virtual void displayContentsInfo() = 0;
  virtual void displayProdInfo(); 
  

  private:
  prod_id_t productID;
  std::string productName;
  double price;
  float reviewRate;
  static prod_id_t createNewID();
  static prod_id_t NewID; 
};


#endif