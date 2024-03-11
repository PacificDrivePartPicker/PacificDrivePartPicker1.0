//Auteurs: Michiel van der Bijl en Thom Smids
//Last edited: 11-03-2024

    /*
    map<string, int> resistances;
    resistances["Impact"] = 0;
    resistances["Explosion"] = 1;
    resistances["Electrical"] = 2;
    resistances["Radiation"] = 3;
    resistances["Acid"] = 4;
    */

void setResistances(Part originPart, Part targetPart){
    //Check what type this part is of and set the target
    //parts resistances to be of the correct part type
    if(originPart.partName = "Panel")
        setPanelResistance(targetPart, originPart.partType)
    else if(originPart.partName = "Door")
        //That function
    else if(originPart.partName = "Light")
            //Thot function
    else if(originPart.partName = "Bumper")
        //Thut function
    }
    return;
}

void setPanelResistance(Part part, string partType){
    map<string, int> resistances;
    resistances["Impact"] = 0;
    resistances["Explosion"] = 1;
    resistances["Electrical"] = 2;
    resistances["Radiation"] = 3;
    resistances["Acid"] = 4;
    map<string, int> types;
    types["Crude"] = 0;
    types["Steel"] = 1;
    types["Insulated"] = 2;
    types["Armored"] = 3;
    types["Lead-plated"] = 4;
    types["Anticorrosive"] = 5;
    types["Olympium"] = 5;

    int resistance[6][5] = {{5, 0, 0, 0, 0},  }
}

//Subfuctions