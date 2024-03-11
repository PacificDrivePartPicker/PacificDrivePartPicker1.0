//Auteurs: Michiel van der Bijl en Thom Smids
//Last edited: 11-03-2024

#ifndef parts
#define parts

struct Part {
    //Constructor
    Part();
    //String containing the parts name
    string partName;
    //This parts type, e.g. crude, steel e.t.c.
    string type;
    //Array containing resistance values
    int totalResistances[5];
    //Array containing neighboring parts
    Part* neighbor[3];
    //The cost of this part
    int cost;
}; //Part

void setNeighborResistances(Part part);

#endif