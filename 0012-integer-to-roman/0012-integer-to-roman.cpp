class Solution {
public:
    string intToRoman(int num) {
        string x = "";

        while(num >= 1000){
            x += "M";
            num -= 1000;
        }
        if (num >= 900){
            x += "CM";
            num -= 900;
        }   
        if (num >= 500){
            x += "D";
            num -= 500;
        } 
        if (num >= 400){
            x += "CD";
            num -= 400;
        } 
        while (num >= 100){
            x += "C";
            num -= 100;
        } 
        if (num >= 90){
            x += "XC";
            num -= 90;
        }
        if (num >= 50){
            x += "L";
            num -= 50;
        }
        if (num >= 40){
            x += "XL";
            num -= 40;
        }
        while (num >= 10){
            x += "X";
            num -= 10;
        }
        if (num >= 9){
            x += "IX";
            num -= 9;
        }
        if (num >= 9){
            x += "IX";
            num -= 9;
        }
        if (num >= 5){
            x += "V";
            num -= 5;
        }
        if (num >= 4){
            x += "IV";
            num -= 4;
        }
        while (num--){
            x += "I";
        }
        
        return x;
    }
};
