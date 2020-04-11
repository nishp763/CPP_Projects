#include <iostream> // For User IO
#include <math.h> // For math
#include <vector>

class Website
{
   std::vector<std::string> URL;
   public:
      Website(); // Constructor
      void getMostVisitedPages(); // Returns an array of URLs in terms of popularity and sorted order
      int count_unique_url(); // Calculates the number of unique URL in the URL_array
      void addPage(std::string); // Adds items to the array
};

Website::Website() // Initialize the Dynamic Array with a fixed size
{
}

void Website::getMostVisitedPages() 
{
   
}

int Website::count_unique_url()
{
   std::vector<std::string> unique_URL;

   for (int i = 0; i < URL.size(); i++)
   {
      bool is_unique = true;
      for (int x = 0; x < unique_URL.size(); x++)
      {
         if (URL[i] == unique_URL[x])
         {
            is_unique = false;
            break;
         }
      }
      if(is_unique == true) // Add it to the vector
      {
         unique_URL.push_back(URL[i]);
      }
   }
   return unique_URL.size();
}

void Website::addPage(std::string value)
{
   URL.push_back(value); // Add value
}

int main()
{
   // Get # of URL's from the User. N value
   int num_URLS;
   std::cin >> num_URLS;
   if ((num_URLS < 1) or (num_URLS > pow(10,5)))
   {
      return 1; // Terminate execution with an error
   }

   Website my_website_instance; // Instantiate the class

   // Get URL's and add it to the array
   std::string temp; // Temp variable
   for (int i = 0; i < num_URLS; i++)
   {
      std::cin >> temp;
      my_website_instance.addPage(temp);
   }


   // std::string* output = my_website_instance.getMostVisitedPages();
   // for (int i = 0; i < num_URLS; i++)
   // {
   //    std::cout << output[i] << "\n";
   // }
   std::cout << my_website_instance.count_unique_url();

   return 0;
}