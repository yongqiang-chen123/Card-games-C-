//
//  CardHand.hpp
//  CS331_HW05
//
//  Created by Yongqiang Chen on 11/24/19.
//  Copyright © 2019 Yongqiang Chen. All rights reserved.
//

#ifndef CardHand_h_
#define CardHand_h_

 #include <QString>

class CardHand
{
    int card[52];
    int size;
    
public:
    CardHand();
    void cardInHand(int card[], int size);
    QString toString();
    int getValue();
    ~CardHand();
};
#endif /* CardHand_hpp */
