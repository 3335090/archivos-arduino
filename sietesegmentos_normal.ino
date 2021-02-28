
 const int a = 2 ;
const int b = 3 ;
const int c = 4 ;
const int d = 5 ;
const int  e = 6 ;
const int f = 7 ;
const int g = 8 ;

void setup() {
 
  pinMode (a,OUTPUT);
  pinMode (b,OUTPUT);
  pinMode (c,OUTPUT);
  pinMode (d,OUTPUT);
  pinMode (e,OUTPUT);
  pinMode (f,OUTPUT);
  pinMode (g,OUTPUT);
}

void loop() {
   // 0
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW);
delay (1000); 

// 1
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW);
delay (1000); 
//2
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, LOW);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, LOW);
digitalWrite (g, HIGH);
delay (1000);  
// 3
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, HIGH);
delay (1000); 
//4;
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
delay (1000);  
// 5;
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
delay (1000); 

// 6
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
delay (1000); 

//7
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW);
delay (1000); 

//8
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
delay (1000); 
//9
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
delay (1000); 
}
