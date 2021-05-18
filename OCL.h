#include<iostream>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<Sddl.h>
#include<cstdlib>
#include<process.h>
#include<wingdi.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<fstream>
#include<GL/gl.h>
#include<bits/move.h>
#include<GL/glaux.h>
#include<GL/glcorearb.h>
#include<GL/glu.h>

#include<GL/wglext.h>
#include <tchar.h>
#include <windows.h>
#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif
#include <tchar.h>

using namespace std;
string Objects1;
string Objects2;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");
void Z_NewShape(){
 cout<<"   Ô  "<<endl;
}
void PixelColor(int x,int y){
 HDC dng=GetDC(NULL);
 GetPixel(dng,x,y);
 ReleaseDC(NULL,dng);
 getch();
}
void CursorPos(int x,int y){
SetCursorPos(x,y);
}
void Coustom_Animated_Text2(string Text1,string Text2,int AnimateTime=100){
    Sleep(AnimateTime);
 cout<<Text1;
 Sleep(AnimateTime);
 cout<<Text2;
 Sleep(AnimateTime);
}
void Coustom_Animated_Text2_Endl(string Text1,string Text2,int AnimateTime=100){
    Sleep(AnimateTime);
 cout<<Text1<<endl;
 Sleep(AnimateTime);
 cout<<Text2<<endl;
 Sleep(AnimateTime);
}
void Animated_Welcome(int AnimateTime=100){
 Sleep(AnimateTime);
 cout<<"W";
 Sleep(AnimateTime);
 cout<<"e";
 Sleep(AnimateTime);
 cout<<"l";
 Sleep(AnimateTime);
 cout<<"c";
 Sleep(AnimateTime);
 cout<<"o";
 Sleep(AnimateTime);
 cout<<"m";
 Sleep(AnimateTime);
 cout<<"e";
 Sleep(AnimateTime);
}
void Include_GameEngine(){
  cout<<"Active:"<<endl;
}
void Shape_LineSyntaxes_Length2(){
  cout<<"__";
}
void Shape_LineSyntaxes_Length3(){
  cout<<"___";
}
void Shape_LineSyntaxes_Length4(){
  cout<<"____";
}
void Shape_LineSyntaxes_Length5(){
  cout<<"_____";
}
void Shape_LineSyntaxes_Length6(){
  cout<<"______";
}
void Shape_LineSyntaxes_Length7(){
  cout<<"_______";
}
void Shape_LineSyntaxes_Length8(){
  cout<<"________";
}
void Shape_LineSyntaxes_Length9(){
  cout<<"__________";
}
void Shape_LineSysntaxes_Length10(){
  cout<<"__________";
}
void Shape_LineSyntaxes_Length11(){
  cout<<"___________";
}
void Shape_LineSyntaxes_Length12(){
  cout<<"____________";
}
void Shape_LineSyntaxes_Length13(){
  cout<<"_____________";
}
void Shape_LineSyntaxes_Length2_Endl(){
  cout<<"__"<<endl;
}
void Shape_LineSyntaxes_Length3_Endl(){
  cout<<"___"<<endl;
}
void Shape_LineSyntaxes_Length4_Endl(){
  cout<<"____"<<endl;
}
void Shape_LineSyntaxes_Length5_Endl(){
  cout<<"_____"<<endl;
}
void Shape_LineSyntaxes_Length6_Endl(){
  cout<<"______"<<endl;
}
void Shape_LineSyntaxes_Length7_Endl(){
  cout<<"_______"<<endl;
}
void Shape_LineSyntaxes_Length8_Endl(){
  cout<<"________"<<endl;
}
void Shape_LineSyntaxes_Length9_Endl(){
  cout<<"__________"<<endl;
}
void Shape_LineSysntaxes_Length10_Endl(){
  cout<<"__________"<<endl;
}
void Random(int i){
char A=356;
for(i;i<i;i++){
cout<<A;
}
}
void Shape_LineSyntaxes_Length11_Endl(){
  cout<<"___________"<<endl;
}
void Shape_LineSyntaxes_Length12_Endl(){
  cout<<"____________"<<endl;
}
void Shape_LineSyntaxes_Length13_Endl(){
  cout<<"_____________"<<endl;
}
void Shape_LineSyntaxes_Length14(){
  cout<<"______________";
}
void Shape_LineSyntaxes_Length14_Endl(){
  cout<<"______________"<<endl;
}
void HWND_Line_Graphics(){
string Line=0;
Line +=1;
cout<<"Line +"<<Line<<"Graphics"<<endl;
}
void While(){
 while(1){

 }
}

//Title Box Small,Medium,High,Massive
void TitleBox_Small(string Text){
cout<<"____________________"<<endl;
cout<<"|"<<    Text     <<"|"<<endl;
cout<<"|___________________|"<<endl;
}

void GravityAuto(int Gravity=0){
  if(Gravity==0){

  }else if(Gravity==1){

  }else if(Gravity==2){
   //a little hard gravity
  }else if(Gravity==-1){
   //moon gravity
  }else if(Gravity==-2){
   //really 00 gravity
  }else{

  }
}

void TitleBox_Medium(string Text){
  cout<<" _____________________"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|"<<     Text      <<"|"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|_____________________|"<<endl;
}
void TitleBox_High(string Text){
 cout<<"_________________________________"<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|"<<          Text            <<"| "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|________________________________| "<<endl;
}
void TitleBox_Massive(string Text){
 cout<<"_________________________________"<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|"<<          Text            <<"| "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|                                | "<<endl;
 cout<<"|________________________________| "<<endl;
}
void TitleBox_BUTTONS1(string Text,string Button1,string Event){
  cout<<" _____________________"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|"<<     Text      <<"|"<<endl;
  cout<<"|"<<    Button1    <<"|"<<endl;
  cout<<"|_____________________|"<<endl;
}
void TitleBox_BUTTONS2(string Text,string B1,string B2,string Event1,string Event2){
  cout<<" _____________________"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|"<<     Text      <<"|"<<endl;
  cout<<"|"<<B1<<"     "<<B2<<"|"<<endl;
  cout<<"|_____________________|"<<endl;
  //add mouse events
}
void TitleBox_Buttons3(string Text,string One,string Two,string Three,string Event1,string Event2,string Event3){
  cout<<" _____________________"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|"<<     Text      <<"|"<<endl;
  cout<<"|"<<One<<Three<<Two<<"|"<<endl;
  cout<<"|_____________________|"<<endl;
}
void Square_ADD_Small(){
 cout<<" _________"<<endl;
 cout<<"|         |"<<endl;
 cout<<"|         |"<<endl;
 cout<<"|         |"<<endl;
 cout<<"|_________|"<<endl;
}
void Hexagon_ADD_Small(){
cout<<"     ____ "<<endl;
cout<<"   /     *"<<endl;
cout<<"  /       *"<<endl;
cout<<" |         |"<<endl;
cout<<" |         | "<<endl;
cout<<" *         *"<<endl;
cout<<"  * ______*"<<endl;
}
//color Compleat
void Square_Add_Mini(){
cout<<""<<endl;
}
void Pointed_Circle(){
 cout<<"ø"<<endl;
}
void Show_NaturlNumbers_10(){
  for(int Naturl=1;Naturl<11; Naturl++){
    cout<<Naturl;
  }
}
void Creat_File(string FileText){
 ofstream(File);
 File.open("file");
 File<<FileText;
}
void RestartComputer(){
 system("restart -r");
}
void Sleep_Computer(){
 system("sleep -h");
}
void Input_Line(string InputName){
  getline(cin,InputName);
}
void Input_int(string InputName){
 cin>>InputName;
}
void Change_ColorTo_Blue_Background(){
 system("color 90");
}
void Change_ColorTo_Aqua_Background(){
  system("color 30");
}
void Change_ColorTo_Yellow_Background(){
 system("color 60");
}
void Change_ColorTo_Red_Background(){
 system("color 40");
}
void Change_ColorTo_Green_Background(){
  system("color 20");
}
void Change_ColorTo_LBlue_Background(){
 system("color 90");
}
void Change_ColorTo_LRed_Background(){
  system("color C0");
}
void Change_ColorTo_LGreen_Background(){
   system("color A0");
}
void Change_ColorTo_White_Background(){
 system("color 70");
}
void Change_ColorTo_BWhite_Background(){
 system("color F0");
}
void Change_ColorTo_Default_Background(){
 system("color 70");
}
void Change_ColorTo_Purple_Background(){
  system("color 50");
}
void Change_ColorTo_LPurple_Background(){
   system("color D0");
}
void Change_ColorTo_LYellow_Background(){
  system("color E0");
}
void Change_ColorTo_Gray_Text(){
   system("color 08");
}
void Change_ColorTo_LAqua_Text(){
  system("color 0B");
}
void Change_ColorTo_Blue_Text(){
 system("color 09");
}
void Change_ColorTo_Aqua_Text(){
  system("color 03");
}
void Change_ColorTo_Yellow_Text(){
 system("color 06");
}
void Change_ColorTo_Red_Text(){
 system("color 04");
}
void Change_ColorTo_Green_Text(){
  system("color 02");
}
void Change_ColorTo_LBlue_Text(){
 system("color 09");
}
void Change_ColorTo_LRed_Text(){
  system("color 0C");
}
void Change_ColorTo_LGreen_Text(){
   system("color 0A");
}
void Change_ColorTo_White_Text(){
 system("color 07");
}
void Change_ColorTo_BWhite_Text(){
 system("color 0F");
}
void Change_ColorTo_Default_Text(){
 system("color 07");
}
void Change_ColorTo_Purple_Text(){
  system("color 05");
}
void Change_ColorTo_LPurple_Text(){
   system("color 0D");
}
void Change_ColorTo_LYellow_Text(){
  system("color 0E");
}
void Change_ColorTo_Gray_Text_Pattle(){
   system("color 08");
}
void NewUpdate(){
cout<<"V1.2 Ocl Introduces to pos vectors and 1bit color from 0 to 0.5 to 1 like blocky pixel arted minecraft also ocl introduces to 2bit And RGB And O-3 Optimized Files"<<endl;
}
void Change_ColorTo_LAqua_Text_Pattle(){
  system("color 0B");
}
void Render_Fps(){
 system("cls"); //30fps
 Sleep(100);
}
void Render_FpsDouble(){
  system("cls");  //60fps
}
void ShutDown_Os(){
 system("shutdown -s");
}
void Assets_Creat(string AssetName){
  cout<<AssetName<<" Was Created As An Asset"<<endl;
}
void Circle(){

}
void Money(){
 int Money;
}
void CreatMainCppFile(){
   ofstream(MainCpp);
   MainCpp.open("main.cpp");
   MainCpp<<"";
   MainCpp.close();
}
void CreatCBPProject(){
ofstream(CBP);
CBP.open("Project.cbp");
CBP<<"";
CBP.close();
}
void Creat_File_hTYPE(){
ofstream(HeaderFile);
HeaderFile.open("File.h");
HeaderFile<<"";
HeaderFile.close();
}
void Draw_3D_Object_Computer_Asset(){
 cout<<"   ________"<<endl;
  cout<<" /_______/|"<<endl;
  cout<<"|        ||"<<endl;
  cout<<"|        ||"<<endl;
  cout<<"|________||"<<endl;
  cout<<"/________/|"<<endl;
  cout<<"|________|/"<<endl;
}
void Draw(string DrawPixelSyntax){
 cout<<DrawPixelSyntax<<endl;
}
void Draw_3D_Cube(){
cout<<"   ______________  "<<endl;
cout<<"  /             /| "<<endl;
cout<<" /_____________/ | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |_____________|/  "<<endl;
}
void ToolKit(){
 cout<<"Lines To Shapes 2D TO 3D"<<endl;
 cout<<"Texures To Anything To Render Fps Control"<<endl;
 cout<<"Created By Daksharya"<<endl;
}
  void Draw_Terrain3D_Syntaxes(){
   cout<<"     1                   2"<<endl;
   cout<<"      ___________________ "<<endl;
   cout<<"     /                  /"<<endl;
   cout<<"    /                  /"<<endl;
   cout<<"   /                  /"<<endl;
   cout<<"  /                  /"<<endl;
   cout<<" /__________________/"<<endl;
   cout<<"4                   3"<<endl;
  }
  void Draw_Terrain2D(){
   cout<<" 1                2"<<endl;
   cout<<" __________________"<<endl;
   cout<<"|                  |"<<endl;
   cout<<"|                  |"<<endl;
   cout<<"|                  |"<<endl;
   cout<<"|                  |"<<endl;
   cout<<"|__________________|"<<endl;
   cout<<"4                  3"<<endl;
  }
  void NAIN(){
    cout<<"MY Nani Is The Best I Want Her To Live With Me For Ever"<<endl;
  }
  void PowerPlayer(float Power){

  }
  void HealthPlayer(float Health){

  }
  void HealthBar(int Health,string HealthBarStyle){
    cout<<HealthBarStyle<<Health<<endl;
  }
  void PowerBar(int Power,string PowerBarStyle){
    cout<<PowerBarStyle<<Power<<endl;
  }
  void CurrencySystemManul(){
    cout<<"Frist Creat A Varuble Called Money Second Creat A Item That We Can Purchase So When Write 1 For EXample WE Should Have Less Money and we can do that by +=to plus a value -=to minus a value"<<endl;
  }
  void ADD_Currency_SystemTOPlus(string VarName,string Value){
   VarName+=Value;
  }
  void ADD_Currency_SystemToMinus(string VarName,string Cost,string ItemName){

   }
  void Draw_Moving_3D_CUBE(){
cout<<"  ______________  "<<endl;
cout<<" /             /| "<<endl;
cout<<"/_____________/ | "<<endl;
cout<<"|             | | "<<endl;
cout<<"|             | | "<<endl;
cout<<"|             | | "<<endl;
cout<<"|_____________|/  "<<endl;

system("cls");
cout<<"   ______________  "<<endl;
cout<<"  /             /| "<<endl;
cout<<" /_____________/ | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |             | | "<<endl;
cout<<" |_____________|/  "<<endl;

system("cls");
cout<<"    ______________  "<<endl;
cout<<"   /             /| "<<endl;
cout<<"  /_____________/ | "<<endl;
cout<<"  |             | | "<<endl;
cout<<"  |             | | "<<endl;
cout<<"  |             | | "<<endl;
cout<<"  |_____________|/  "<<endl;

system("cls");
cout<<"     ______________  "<<endl;
cout<<"    /             /| "<<endl;
cout<<"   /_____________/ | "<<endl;
cout<<"   |             | | "<<endl;
cout<<"   |             | | "<<endl;
cout<<"   |             | | "<<endl;
cout<<"   |_____________|/  "<<endl;

system("cls");
cout<<"      ______________  "<<endl;
cout<<"     /             /| "<<endl;
cout<<"    /_____________/ | "<<endl;
cout<<"    |             | | "<<endl;
cout<<"    |             | | "<<endl;
cout<<"    |             | | "<<endl;
cout<<"    |_____________|/  "<<endl;

system("cls");
cout<<"       ______________  "<<endl;
cout<<"      /             /| "<<endl;
cout<<"     /_____________/ | "<<endl;
cout<<"     |             | | "<<endl;
cout<<"     |             | | "<<endl;
cout<<"     |             | | "<<endl;
cout<<"     |_____________|/  "<<endl;

system("cls");
cout<<"        ______________  "<<endl;
cout<<"       /             /| "<<endl;
cout<<"      /_____________/ | "<<endl;
cout<<"      |             | | "<<endl;
cout<<"      |             | | "<<endl;
cout<<"      |             | | "<<endl;
cout<<"      |_____________|/  "<<endl;

system("cls");
cout<<"         ______________  "<<endl;
cout<<"        /             /| "<<endl;
cout<<"       /_____________/ | "<<endl;
cout<<"       |             | | "<<endl;
cout<<"       |             | | "<<endl;
cout<<"       |             | | "<<endl;
cout<<"       |_____________|/  "<<endl;

system("cls");
cout<<"          ______________  "<<endl;
cout<<"         /             /| "<<endl;
cout<<"        /_____________/ | "<<endl;
cout<<"        |             | | "<<endl;
cout<<"        |             | | "<<endl;
cout<<"        |             | | "<<endl;
cout<<"        |_____________|/  "<<endl;

system("cls");
cout<<"           ______________  "<<endl;
cout<<"          /             /| "<<endl;
cout<<"         /_____________/ | "<<endl;
cout<<"         |             | | "<<endl;
cout<<"         |             | | "<<endl;
cout<<"         |             | | "<<endl;
cout<<"         |_____________|/  "<<endl;

system("cls");
cout<<"            ______________  "<<endl;
cout<<"           /             /| "<<endl;
cout<<"          /_____________/ | "<<endl;
cout<<"          |             | | "<<endl;
cout<<"          |             | | "<<endl;
cout<<"          |             | | "<<endl;
cout<<"          |_____________|/  "<<endl;

system("cls");
cout<<"             ______________  "<<endl;
cout<<"            /             /| "<<endl;
cout<<"           /_____________/ | "<<endl;
cout<<"           |             | | "<<endl;
cout<<"           |             | | "<<endl;
cout<<"           |             | | "<<endl;
cout<<"           |_____________|/  "<<endl;

system("cls");
cout<<"              ______________  "<<endl;
cout<<"             /             /| "<<endl;
cout<<"            /_____________/ | "<<endl;
cout<<"            |             | | "<<endl;
cout<<"            |             | | "<<endl;
cout<<"            |             | | "<<endl;
cout<<"            |_____________|/  "<<endl;

system("cls");
cout<<"               ______________  "<<endl;
cout<<"              /             /| "<<endl;
cout<<"             /_____________/ | "<<endl;
cout<<"             |             | | "<<endl;
cout<<"             |             | | "<<endl;
cout<<"             |             | | "<<endl;
cout<<"             |_____________|/  "<<endl;

system("cls");
//jaddjaiojdsio
 cout<<"               ______________  "<<endl;
cout<<"               /             /| "<<endl;
cout<<"              /_____________/ | "<<endl;
cout<<"              |             | | "<<endl;
cout<<"              |             | | "<<endl;
cout<<"              |             | | "<<endl;
cout<<"              |_____________|/  "<<endl;

system("cls");
cout<<"                 ______________  "<<endl;
cout<<"                /             /| "<<endl;
cout<<"               /_____________/ | "<<endl;
cout<<"               |             | | "<<endl;
cout<<"               |             | | "<<endl;
cout<<"               |             | | "<<endl;
cout<<"               |_____________|/  "<<endl;

system("cls");
cout<<"                  ______________  "<<endl;
cout<<"                 /             /| "<<endl;
cout<<"                /_____________/ | "<<endl;
cout<<"                |             | | "<<endl;
cout<<"                |             | | "<<endl;
cout<<"                |             | | "<<endl;
cout<<"                |_____________|/  "<<endl;

system("cls");
cout<<"                   ______________  "<<endl;
cout<<"                  /             /| "<<endl;
cout<<"                 /_____________/ | "<<endl;
cout<<"                 |             | | "<<endl;
cout<<"                 |             | | "<<endl;
cout<<"                 |             | | "<<endl;
cout<<"                 |_____________|/  "<<endl;

system("cls");
cout<<"                    ______________  "<<endl;
cout<<"                   /             /| "<<endl;
cout<<"                  /_____________/ | "<<endl;
cout<<"                  |             | | "<<endl;
cout<<"                  |             | | "<<endl;
cout<<"                  |             | | "<<endl;
cout<<"                  |_____________|/  "<<endl;

system("cls");
cout<<"                     ______________  "<<endl;
cout<<"                    /             /| "<<endl;
cout<<"                   /_____________/ | "<<endl;
cout<<"                   |             | | "<<endl;
cout<<"                   |             | | "<<endl;
cout<<"                   |             | | "<<endl;
cout<<"                   |_____________|/  "<<endl;

system("cls");
cout<<"                      ______________  "<<endl;
cout<<"                     /             /| "<<endl;
cout<<"                    /_____________/ | "<<endl;
cout<<"                    |             | | "<<endl;
cout<<"                    |             | | "<<endl;
cout<<"                    |             | | "<<endl;
cout<<"                    |_____________|/  "<<endl;
system("cls");
cout<<"                       ______________  "<<endl;
cout<<"                      /             /| "<<endl;
cout<<"                     /_____________/ | "<<endl;
cout<<"                     |             | | "<<endl;
cout<<"                     |             | | "<<endl;
cout<<"                     |             | | "<<endl;
cout<<"                     |_____________|/  "<<endl;
system("cls");
cout<<"                        ______________  "<<endl;
cout<<"                       /             /| "<<endl;
cout<<"                      /_____________/ | "<<endl;
cout<<"                      |             | | "<<endl;
cout<<"                      |             | | "<<endl;
cout<<"                      |             | | "<<endl;
cout<<"                      |_____________|/  "<<endl;

system("cls");
cout<<"                         ______________  "<<endl;
cout<<"                        /             /| "<<endl;
cout<<"                       /_____________/ | "<<endl;
cout<<"                       |             | | "<<endl;
cout<<"                       |             | | "<<endl;
cout<<"                       |             | | "<<endl;
cout<<"                       |_____________|/  "<<endl;

system("cls");
cout<<"                          ______________  "<<endl;
cout<<"                         /             /| "<<endl;
cout<<"                        /_____________/ | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |_____________|/  "<<endl;

system("cls");
cout<<"                          ______________  "<<endl;
cout<<"                         /             /| "<<endl;
cout<<"                        /_____________/ | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |             | | "<<endl;
cout<<"                        |_____________|/  "<<endl;

system("cls");
cout<<"                           ______________  "<<endl;
cout<<"                          /             /| "<<endl;
cout<<"                         /_____________/ | "<<endl;
cout<<"                         |             | | "<<endl;
cout<<"                         |             | | "<<endl;
cout<<"                         |             | | "<<endl;
cout<<"                         |_____________|/  "<<endl;

system("cls");
cout<<"                            ______________  "<<endl;
cout<<"                           /             /| "<<endl;
cout<<"                          /_____________/ | "<<endl;
cout<<"                          |             | | "<<endl;
cout<<"                          |             | | "<<endl;
cout<<"                          |             | | "<<endl;
cout<<"                          |_____________|/  "<<endl;
cout<<"                                            "<<endl;

system("cls");
//adakdkjakdla
cout<<"                             ______________  "<<endl;
cout<<"                            /             /| "<<endl;
cout<<"                           /_____________/ | "<<endl;
cout<<"                           |             | | "<<endl;
cout<<"                           |             | | "<<endl;
cout<<"                           |             | | "<<endl;
cout<<"                           |_____________|/  "<<endl;

system("cls");
cout<<"                              ______________  "<<endl;
cout<<"                             /             /| "<<endl;
cout<<"                            /_____________/ | "<<endl;
cout<<"                            |             | | "<<endl;
cout<<"                            |             | | "<<endl;
cout<<"                            |             | | "<<endl;
cout<<"                            |_____________|/  "<<endl;

system("cls");
cout<<"                               ______________  "<<endl;
cout<<"                              /             /| "<<endl;
cout<<"                             /_____________/ | "<<endl;
cout<<"                             |             | | "<<endl;
cout<<"                             |             | | "<<endl;
cout<<"                             |             | | "<<endl;
cout<<"                             |_____________|/  "<<endl;

system("cls");
cout<<"                                ______________  "<<endl;
cout<<"                               /             /| "<<endl;
cout<<"                              /_____________/ | "<<endl;
cout<<"                              |             | | "<<endl;
cout<<"                              |             | | "<<endl;
cout<<"                              |             | | "<<endl;
cout<<"                              |_____________|/  "<<endl;

system("cls");
cout<<"                                 ______________  "<<endl;
cout<<"                                /             /| "<<endl;
cout<<"                               /_____________/ | "<<endl;
cout<<"                               |             | | "<<endl;
cout<<"                               |             | | "<<endl;
cout<<"                               |             | | "<<endl;
cout<<"                               |_____________|/  "<<endl;

system("cls");
cout<<"                                  ______________  "<<endl;
cout<<"                                 /             /| "<<endl;
cout<<"                                /_____________/ | "<<endl;
cout<<"                                |             | | "<<endl;
cout<<"                                |             | | "<<endl;
cout<<"                                |             | | "<<endl;
cout<<"                                |_____________|/  "<<endl;

system("cls");
cout<<"                                   ______________  "<<endl;
cout<<"                                  /             /| "<<endl;
cout<<"                                 /_____________/ | "<<endl;
cout<<"                                 |             | | "<<endl;
cout<<"                                 |             | | "<<endl;
cout<<"                                 |             | | "<<endl;
cout<<"                                 |_____________|/  "<<endl;

system("cls");
cout<<"                                    ______________  "<<endl;
cout<<"                                   /             /| "<<endl;
cout<<"                                  /_____________/ | "<<endl;
cout<<"                                  |             | | "<<endl;
cout<<"                                  |             | | "<<endl;
cout<<"                                  |             | | "<<endl;
cout<<"                                  |_____________|/  "<<endl;

system("cls");
cout<<"                                     ______________  "<<endl;
cout<<"                                    /             /| "<<endl;
cout<<"                                   /_____________/ | "<<endl;
cout<<"                                   |             | | "<<endl;
cout<<"                                   |             | | "<<endl;
cout<<"                                   |             | | "<<endl;
cout<<"                                   |_____________|/  "<<endl;

system("cls");
cout<<"                                       ______________  "<<endl;
cout<<"                                      /             /| "<<endl;
cout<<"                                     /_____________/ | "<<endl;
cout<<"                                     |             | | "<<endl;
cout<<"                                     |             | | "<<endl;
cout<<"                                     |             | | "<<endl;
cout<<"                                     |_____________|/  "<<endl;

system("cls");
cout<<"                                        ______________  "<<endl;
cout<<"                                       /             /| "<<endl;
cout<<"                                      /_____________/ | "<<endl;
cout<<"                                      |             | | "<<endl;
cout<<"                                      |             | | "<<endl;
cout<<"                                      |             | | "<<endl;
cout<<"                                      |_____________|/  "<<endl;

system("cls");
cout<<"                                         ______________  "<<endl;
cout<<"                                        /             /| "<<endl;
cout<<"                                       /_____________/ | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |_____________|/  "<<endl;

system("cls");
cout<<"                                         ______________  "<<endl;
cout<<"                                        /             /| "<<endl;
cout<<"                                       /_____________/ | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |             | | "<<endl;
cout<<"                                       |_____________|/  "<<endl;

system("cls");
cout<<"                                          ______________  "<<endl;
cout<<"                                         /             /| "<<endl;
cout<<"                                        /_____________/ | "<<endl;
cout<<"                                        |             | | "<<endl;
cout<<"                                        |             | | "<<endl;
cout<<"                                        |             | | "<<endl;
cout<<"                                        |_____________|/  "<<endl;

system("cls");
//jaddjaiojdsio
 cout<<"                                          ______________  "<<endl;
cout<<"                                          /             /| "<<endl;
cout<<"                                         /_____________/ | "<<endl;
cout<<"                                         |             | | "<<endl;
cout<<"                                         |             | | "<<endl;
cout<<"                                         |             | | "<<endl;
cout<<"                                         |_____________|/  "<<endl;

system("cls");
cout<<"                                            ______________  "<<endl;
cout<<"                                           /             /| "<<endl;
cout<<"                                          /_____________/ | "<<endl;
cout<<"                                          |             | | "<<endl;
cout<<"                                          |             | | "<<endl;
cout<<"                                          |             | | "<<endl;
cout<<"                                          |_____________|/  "<<endl;

system("cls");
cout<<"                                             ______________  "<<endl;
cout<<"                                            /             /| "<<endl;
cout<<"                                           /_____________/ | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |_____________|/  "<<endl;

system("cls");
cout<<"                                             ______________  "<<endl;
cout<<"                                            /             /| "<<endl;
cout<<"                                           /_____________/ | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |             | | "<<endl;
cout<<"                                           |_____________|/  "<<endl;

system("cls");
cout<<"                                              ______________  "<<endl;
cout<<"                                             /             /| "<<endl;
cout<<"                                            /_____________/ | "<<endl;
cout<<"                                            |             | | "<<endl;
cout<<"                                            |             | | "<<endl;
cout<<"                                            |             | | "<<endl;
cout<<"                                            |_____________|/  "<<endl;
system("cls");
cout<<"                                               ______________  "<<endl;
cout<<"                                              /             /| "<<endl;
cout<<"                                             /_____________/ | "<<endl;
cout<<"                                             |             | | "<<endl;
cout<<"                                             |             | | "<<endl;
cout<<"                                             |             | | "<<endl;
cout<<"                                             |_____________|/  "<<endl;
system("cls");
cout<<"                                                ______________  "<<endl;
cout<<"                                               /             /| "<<endl;
cout<<"                                              /_____________/ | "<<endl;
cout<<"                                              |             | | "<<endl;
cout<<"                                              |             | | "<<endl;
cout<<"                                              |             | | "<<endl;
cout<<"                                              |_____________|/  "<<endl;
system("cls");
cout<<"                                                 ______________  "<<endl;
cout<<"                                                /             /| "<<endl;
cout<<"                                               /_____________/ | "<<endl;
cout<<"                                               |             | | "<<endl;
cout<<"                                               |             | | "<<endl;
cout<<"                                               |             | | "<<endl;
cout<<"                                               |_____________|/  "<<endl;
system("cls");
cout<<"                                                  ______________  "<<endl;
cout<<"                                                 /             /| "<<endl;
cout<<"                                                /_____________/ | "<<endl;
cout<<"                                                |             | | "<<endl;
cout<<"                                                |             | | "<<endl;
cout<<"                                                |             | | "<<endl;
cout<<"                                                |_____________|/  "<<endl;
system("cls");
cout<<"                                                   ______________  "<<endl;
cout<<"                                                  /             /| "<<endl;
cout<<"                                                 /_____________/ | "<<endl;
cout<<"                                                 |             | | "<<endl;
cout<<"                                                 |             | | "<<endl;
cout<<"                                                 |             | | "<<endl;
cout<<"                                                 |_____________|/  "<<endl;
system("cls");
cout<<"                                                    ______________  "<<endl;
cout<<"                                                   /             /| "<<endl;
cout<<"                                                  /_____________/ | "<<endl;
cout<<"                                                  |             | | "<<endl;
cout<<"                                                  |             | | "<<endl;
cout<<"                                                  |             | | "<<endl;
cout<<"                                                  |_____________|/  "<<endl;
system("cls");
cout<<"                                                     ______________  "<<endl;
cout<<"                                                    /             /| "<<endl;
cout<<"                                                   /_____________/ | "<<endl;
cout<<"                                                   |             | | "<<endl;
cout<<"                                                   |             | | "<<endl;
cout<<"                                                   |             | | "<<endl;
cout<<"                                                   |_____________|/  "<<endl;
system("cls");
cout<<"                                                      ______________  "<<endl;
cout<<"                                                     /             /| "<<endl;
cout<<"                                                    /_____________/ | "<<endl;
cout<<"                                                    |             | | "<<endl;
cout<<"                                                    |             | | "<<endl;
cout<<"                                                    |             | | "<<endl;
cout<<"                                                    |_____________|/  "<<endl;
system("cls");
cout<<"                                                       ______________  "<<endl;
cout<<"                                                      /             /| "<<endl;
cout<<"                                                     /_____________/ | "<<endl;
cout<<"                                                     |             | | "<<endl;
cout<<"                                                     |             | | "<<endl;
cout<<"                                                     |             | | "<<endl;
cout<<"                                                     |_____________|/  "<<endl;
system("cls");
cout<<"                                                        ______________  "<<endl;
cout<<"                                                       /             /| "<<endl;
cout<<"                                                      /_____________/ | "<<endl;
cout<<"                                                      |             | | "<<endl;
cout<<"                                                      |             | | "<<endl;
cout<<"                                                      |             | | "<<endl;
cout<<"                                                      |_____________|/  "<<endl;
system("cls");
cout<<"                                                         ______________  "<<endl;
cout<<"                                                        /             /| "<<endl;
cout<<"                                                       /_____________/ | "<<endl;
cout<<"                                                       |             | | "<<endl;
cout<<"                                                       |             | | "<<endl;
cout<<"                                                       |             | | "<<endl;
cout<<"                                                       |_____________|/  "<<endl;
system("cls");
cout<<"                                                          ______________  "<<endl;
cout<<"                                                         /             /| "<<endl;
cout<<"                                                        /_____________/ | "<<endl;
cout<<"                                                        |             | | "<<endl;
cout<<"                                                        |             | | "<<endl;
cout<<"                                                        |             | | "<<endl;
cout<<"                                                        |_____________|/  "<<endl;
system("cls");
cout<<"                                                           ______________  "<<endl;
cout<<"                                                          /             /| "<<endl;
cout<<"                                                         /_____________/ | "<<endl;
cout<<"                                                         |             | | "<<endl;
cout<<"                                                         |             | | "<<endl;
cout<<"                                                         |             | | "<<endl;
cout<<"                                                         |_____________|/  "<<endl;
system("cls");
cout<<"                                                            ______________  "<<endl;
cout<<"                                                           /             /| "<<endl;
cout<<"                                                          /_____________/ | "<<endl;
cout<<"                                                          |             | | "<<endl;
cout<<"                                                          |             | | "<<endl;
cout<<"                                                          |             | | "<<endl;
cout<<"                                                          |_____________|/  "<<endl;
system("cls");
cout<<"                                                             ______________  "<<endl;
cout<<"                                                            /             /| "<<endl;
cout<<"                                                           /_____________/ | "<<endl;
cout<<"                                                           |             | | "<<endl;
cout<<"                                                           |             | | "<<endl;
cout<<"                                                           |             | | "<<endl;
cout<<"                                                           |_____________|/  "<<endl;
system("cls");
cout<<"                                                              ______________  "<<endl;
cout<<"                                                             /             /| "<<endl;
cout<<"                                                            /_____________/ | "<<endl;
cout<<"                                                            |             | | "<<endl;
cout<<"                                                            |             | | "<<endl;
cout<<"                                                            |             | | "<<endl;
cout<<"                                                            |_____________|/  "<<endl;
system("cls");
cout<<"                                                               ______________  "<<endl;
cout<<"                                                              /             /| "<<endl;
cout<<"                                                             /_____________/ | "<<endl;
cout<<"                                                             |             | | "<<endl;
cout<<"                                                             |             | | "<<endl;
cout<<"                                                             |             | | "<<endl;
cout<<"                                                             |_____________|/  "<<endl;
system("cls");
cout<<"                                                                ______________  "<<endl;
cout<<"                                                               /             /| "<<endl;
cout<<"                                                              /_____________/ | "<<endl;
cout<<"                                                              |             | | "<<endl;
cout<<"                                                              |             | | "<<endl;
cout<<"                                                              |             | | "<<endl;
cout<<"                                                              |_____________|/  "<<endl;
system("cls");
cout<<"                                                                 ______________  "<<endl;
cout<<"                                                                /             /| "<<endl;
cout<<"                                                               /_____________/ | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |_____________|/  "<<endl;
system("cls");
cout<<"                                                                  ______________  "<<endl;
cout<<"                                                                 /             /| "<<endl;
cout<<"                                                                /_____________/ | "<<endl;
cout<<"                                                                |             | | "<<endl;
cout<<"                                                                |             | | "<<endl;
cout<<"                                                                |             | | "<<endl;
cout<<"                                                                |_____________|/  "<<endl;
system("cls");
cout<<"                                                                   ______________  "<<endl;
cout<<"                                                                  /             /| "<<endl;
cout<<"                                                                 /_____________/ | "<<endl;
cout<<"                                                                 |             | | "<<endl;
cout<<"                                                                 |             | | "<<endl;
cout<<"                                                                 |             | | "<<endl;
cout<<"                                                                 |_____________|/  "<<endl;
system("cls");
cout<<"                                                                    ______________  "<<endl;
cout<<"                                                                   /             /| "<<endl;
cout<<"                                                                  /_____________/ | "<<endl;
cout<<"                                                                  |             | | "<<endl;
cout<<"                                                                  |             | | "<<endl;
cout<<"                                                                  |             | | "<<endl;
cout<<"                                                                  |_____________|/  "<<endl;
system("cls");
cout<<"                                                                     ______________  "<<endl;
cout<<"                                                                    /             /| "<<endl;
cout<<"                                                                   /_____________/ | "<<endl;
cout<<"                                                                   |             | | "<<endl;
cout<<"                                                                   |             | | "<<endl;
cout<<"                                                                   |             | | "<<endl;
cout<<"                                                                   |_____________|/  "<<endl;
system("cls");
cout<<"                                                                      ______________  "<<endl;
cout<<"                                                                     /             /| "<<endl;
cout<<"                                                                    /_____________/ | "<<endl;
cout<<"                                                                    |             | | "<<endl;
cout<<"                                                                    |             | | "<<endl;
cout<<"                                                                    |             | | "<<endl;
cout<<"                                                                    |_____________|/  "<<endl;
system("cls");
cout<<"                                                                       ______________  "<<endl;
cout<<"                                                                      /             /| "<<endl;
cout<<"                                                                     /_____________/ | "<<endl;
cout<<"                                                                     |             | | "<<endl;
cout<<"                                                                     |             | | "<<endl;
cout<<"                                                                     |             | | "<<endl;
cout<<"                                                                     |_____________|/  "<<endl;
system("cls");
cout<<"                                                                        ______________  "<<endl;
cout<<"                                                                       /             /| "<<endl;
cout<<"                                                                      /_____________/ | "<<endl;
cout<<"                                                                      |             | | "<<endl;
cout<<"                                                                      |             | | "<<endl;
cout<<"                                                                      |             | | "<<endl;
cout<<"                                                                      |_____________|/  "<<endl;
system("cls");
cout<<"                                                                         ______________  "<<endl;
cout<<"                                                                        /             /| "<<endl;
cout<<"                                                                       /_____________/ | "<<endl;
cout<<"                                                                       |             | | "<<endl;
cout<<"                                                                       |             | | "<<endl;
cout<<"                                                                       |             | | "<<endl;
cout<<"                                                                       |_____________|/  "<<endl;
system("cls");
cout<<"                                                                          ______________  "<<endl;
cout<<"                                                                         /             /| "<<endl;
cout<<"                                                                        /_____________/ | "<<endl;
cout<<"                                                                        |             | | "<<endl;
cout<<"                                                                        |             | | "<<endl;
cout<<"                                                                        |             | | "<<endl;
cout<<"                                                                        |_____________|/  "<<endl;
system("cls");
cout<<"                                                                           ______________  "<<endl;
cout<<"                                                                          /             /| "<<endl;
cout<<"                                                                         /_____________/ | "<<endl;
cout<<"                                                                         |             | | "<<endl;
cout<<"                                                                         |             | | "<<endl;
cout<<"                                                                         |             | | "<<endl;
cout<<"                                                                         |_____________|/  "<<endl;
system("cls");
cout<<"                                                                            ______________  "<<endl;
cout<<"                                                                           /             /| "<<endl;
cout<<"                                                                          /_____________/ | "<<endl;
cout<<"                                                                          |             | | "<<endl;
cout<<"                                                                          |             | | "<<endl;
cout<<"                                                                          |             | | "<<endl;
cout<<"                                                                          |_____________|/  "<<endl;
system("cls");
cout<<"                                                                             ______________  "<<endl;
cout<<"                                                                            /             /| "<<endl;
cout<<"                                                                           /_____________/ | "<<endl;
cout<<"                                                                           |             | | "<<endl;
cout<<"                                                                           |             | | "<<endl;
cout<<"                                                                           |             | | "<<endl;
cout<<"                                                                           |_____________|/  "<<endl;
system("cls");
cout<<"                                                                              ______________  "<<endl;
cout<<"                                                                             /             /| "<<endl;
cout<<"                                                                            /_____________/ | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |_____________|/  "<<endl;
system("cls");
cout<<"                                                                              ______________  "<<endl;
cout<<"                                                                             /             /| "<<endl;
cout<<"                                                                            /_____________/ | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |             | | "<<endl;
cout<<"                                                                            |_____________|/  "<<endl;
system("cls");
    }
  void Draw_3D_CubeCenter_Syntaxes(){
cout<<"                                                                 ______________  "<<endl;
cout<<"                                                                /             /| "<<endl;
cout<<"                                                               /_____________/ | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |             | | "<<endl;
cout<<"                                                               |_____________|/  "<<endl;
  }
  void Square_ADD_Small_Center(){
 cout<<"                                                                   _________"<<endl;
 cout<<"                                                                  |         |"<<endl;
 cout<<"                                                                  |         |"<<endl;
 cout<<"                                                                  |         |"<<endl;
 cout<<"                                                                  |_________|"<<endl;
  }
  void Hexagon_ADD_Small_Center(){
cout<<"                                                                       ____ "<<endl;
cout<<"                                                                     /     *"<<endl;
cout<<"                                                                    /       *"<<endl;
cout<<"                                                                    |         |"<<endl;
cout<<"                                                                    |         | "<<endl;
cout<<"                                                                    *         /"<<endl;
cout<<"                                                                     * ______/"<<endl;
  }
void ADD_ShapeBySyntax(string Shape){
 cout<<Shape;
}
void ADD_Panel(string Shape){
 cout<<Shape;
}
void Shaders_Shadding(){

}
void Shape_(string Log){

}
void RGB_(int colors){
 SetConsoleTextAttribute(h,colors);
}
void Posx(double xpos){
 cout.width(xpos);
}
void Posy(int ypos){
 cout<<"Comming Soon"<<endl;
}
void PosX_Y(short x,short y){
   HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
   COORD postion={x,y};
   SetConsoleCursorPosition(handle,postion);

}
void TriangleSynatxes_SizeMedium(){
 cout<<"     /|"<<endl;
 cout<<"    / |"<<endl;
 cout<<"   /  |"<<endl;
 cout<<"  /   |"<<endl;
 cout<<" /    |"<<endl;
 cout<<"/_____|"<<endl;
}
void Fps_Control(int FPS=60){
 Sleep(FPS);
 system("cls");
}
void Water(){
    SetConsoleTextAttribute(h,FOREGROUND_BLUE);
    while(1){
 cout<<""<<endl;
 cout<<"_______"<<endl;
 system("cls");
 cout<<"___ ___"<<endl;
 system("cls");
 cout<<"____ __"<<endl;
 system("cls");
 cout<<"_______"<<endl;
 system("cls");
 cout<<"____ __"<<endl;
 system("cls");
 cout<<"__ ____"<<endl;
 system("cls");
    }
}
void WHILE_(int True_False){
 while(True_False);
}
void PowerOff(){
 system("shutdown -s");
}
void Triangle_Add_With_Numbers(){
cout<<"     0 "<<endl;
cout<<"    000"<<endl;
cout<<"   00000"<<endl;
cout<<"  0000000"<<endl;
cout<<" 000000000"<<endl;
cout<<"00000000000"<<endl;
}
void Print_(string Print){
 cout<<Print;
}
void Cube_Background_Black(){
 SetConsoleTextAttribute(h,FOREGROUND_BLUE);
 cout<<" _________ "<<endl;
 cout<<"|         |"<<endl;
 cout<<"|         |"<<endl;
 cout<<"|         |"<<endl;
 cout<<"|_________|"<<endl;
 cout<<"           "<<endl;
}
void Diamond(){
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
}
void Diamond_Spark(){
    while(1){
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"         "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"    **   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   * *   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   **   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"   ****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  * ***  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  ** **  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *** *  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ****** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ***** * "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" **** ** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" *** *** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ** **** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" * ***** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"  ****** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;     //humans are bad true
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  ****** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" * ***** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ** **** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" *** *** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
    }
}
void Diamond_Spark_Voilate(){
while(1){
system("color 05");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"         "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"    **   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   * *   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   **   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;       //humans are bad
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"   ****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  * ***  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  ** **  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *** *  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ****** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ***** * "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" **** ** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" *** *** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ** **** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" * ***** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"  ****** "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  ****** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" * ***** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ** **** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" *** *** "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
  cout<<"    *    "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"  *****  "<<endl;
  cout<<" ******* "<<endl;
  cout<<" ******* "<<endl;
  cout<<"  *****  "<<endl;
  cout<<"   ***   "<<endl;
  cout<<"    *    "<<endl;
  Sleep(1);
  system("cls");
}
}

void If_(string Statement1,string Statement2,string CodeInIf){
  if(Statement1==Statement2){

  }
}
void Square(string Syntax,int rows,int coloum){
 for(int i=0;i<rows;i++){ //row
 for(int j=0;j<coloum;j++){
    cout<<Syntax;
 }
 cout<<endl;
 }
}
void Draw_Diamond_ByComputer(){
for(int Input=0;Input<0;Input++){
cout<<"Comming Soon With RayCasting"<<endl;
}
}
void RayCasting(){
 cout<<"Comming Soon With RayCasting World"<<endl;
}

void Render(int RenderFps=0){
for(int Render=0;Render==RenderFps;Render++){
cout<<"Rendering Failed"<<endl;
if(RenderFps==1){
system("cls");
Sleep(RenderFps);   //60 fps
}else if(RenderFps==1000){
 cout<<"Fps To Lag"<<endl;
}
}
}
void GUI_16Name(string WindowName){

}
void Racasting_World(){
cout<<"Comming Soon With RayTracing"<<endl;
}
void TreeCollisiob(){

}
void RayTracing(){
 cout<<"Comming Soon With Racasting World"<<endl;
}
void Assets_Add(char AssetName[100]){
if(strcmp(AssetName,"Car_Pack_Van")==0){
cout<<"  ____________ "<<endl;
cout<<" /__|___|_____|"<<endl;
cout<<"/      |      |"<<endl;
cout<<"|__  __|____ _|"<<endl;
cout<<"   O        O  "<<endl;
}else if(strcmp(AssetName,"QustionMarkSquare")==0){
 cout<<"Comming Soon"<<endl;
}else {
  cout<<"Vaild Assets Try To Add Asset_Set If You Want Coustom That Feture Is Comming On"<<endl;
}
}
void OnUserUpdate_ValueOfVar(string Update="None",int Value=0){
 Update+=Value;
}
void OnUserClick(int x,int y,string Event){
 //mouse_event()
}
void Art_Syntax(string Syntax,int TextColor){
    RGB_(TextColor);
  cout<<Syntax<<endl;
}
void OPADTE(){

}
void KEYBD_Input2D(){
enum eDirecton { STOP = NULL, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
if (_kbhit()){
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
            break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
}
  }
   }
void PadLockAsset(){

}
void SquareA(string Fillsyntax="± ",string syntax="±",int theSize=20){
 for(int rows=0;rows!=theSize;rows++){
  for(int cols=0;cols!=theSize;cols++){
    if(rows==0||rows==theSize-1||cols==0||cols==theSize-1) cout<<syntax<<" ";
                                //The_Map IF O=1 S = 0
    else cout<<Fillsyntax;
  }
  cout<<endl;
 }
}
void Project(int Name){
ofstream(File);
File.open("Project.cbp");
File<<"//Project Created"<<Name<<endl;
File<<"#include<OCL.h>"<<endl;
File<<"int main(){    "<<endl;
File<<"SolidShape(4); "<<endl;
File<<"cout<<""<<endl;"<<endl;
File<<"SolidShape(4); "<<endl;
File<<"}              "<<endl;
File.close();
}
void Rand(int Value,int Numbers){
srand(Value);
for(int x=1;x<Value;x++){
cout<<1+(rand()%Numbers)<<endl;
}
}
void Parttern2D(){

}
void Circle(string syntax,int radius){

}
void Draw_Moving_Bus(){
system("cls");
cout<<"  _______________   "<<endl;
cout<<" |_|__|__|____|__|  "<<endl;
cout<<" |           |   |  "<<endl;
cout<<" |__ ________|___|  "<<endl;      //1
cout<<"-   O -   -  O      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|"<<endl;
system("cls");
cout<<"   _______________      "<<endl;
cout<<"  |_|__|__|____|__|     "<<endl;
cout<<"  |           |   |     "<<endl;
cout<<"  |__ ________|___|     "<<endl;   //2
cout<<"-    O -   -  O     -   "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-| "<<endl;
system("cls");
cout<<"    _______________       "<<endl;
cout<<"   |_|__|__|____|__|      "<<endl;
cout<<"   |           |   |      "<<endl;   //3
cout<<"   |__ ________|___|      "<<endl;
cout<<"-     O -   -  O     -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-| "<<endl;
system("cls");
cout<<"     _______________       "<<endl;
cout<<"    |_|__|__|____|__|      "<<endl;   //4
cout<<"    |           |   |      "<<endl;
cout<<"    |__ ________|___|      "<<endl;
cout<<"-      O -   -  O     -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-| "<<endl;
system("cls");                       //cant use for loop
cout<<"      _______________        "<<endl;
cout<<"     |_|__|__|____|__|       "<<endl;
cout<<"     |           |   |       "<<endl; //5
cout<<"     |__ ________|___|        "<<endl;
cout<<"-  -    O -   -  O     -   -   "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|"<<endl;
system("cls");
cout<<"       _______________           "<<endl;
cout<<"      |_|__|__|____|__|          "<<endl;  //6
cout<<"      |           |   |          "<<endl;
cout<<"      |__ ________|___|          "<<endl;
cout<<"-  -     O -   -  O     -   -   "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|"<<endl;
system("cls");
cout<<"        _______________                 "<<endl;
cout<<"       |_|__|__|____|__|                "<<endl;
cout<<"       |           |   |                "<<endl;
cout<<"       |__ ________|___|                "<<endl; //7
cout<<"-  -  -    O -   -  O     -   -         "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|   "<<endl;
system("cls");
cout<<"         _______________                     "<<endl;
cout<<"        |_|__|__|____|__|                    "<<endl;
cout<<"        |           |   |                    "<<endl;
cout<<"        |__ ________|___|                    "<<endl; //8
cout<<"-  -  -    O -   -  O     -   -   -  -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|    "<<endl;
system("cls");
cout<<"          _______________                     "<<endl;
cout<<"         |_|__|__|____|__|                    "<<endl;
cout<<"         |           |   |                    "<<endl;
cout<<"         |__ ________|___|                    "<<endl;  //9
cout<<"-  -  -     O -   -  O     -   -   -  - -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|    "<<endl;
system("cls");
cout<<"          _______________                      "<<endl;
cout<<"         |_|__|__|____|__|                     "<<endl;
cout<<"         |           |   |                     "<<endl; //10
cout<<"         |__ ________|___|                     "<<endl;
cout<<"-  -  -     O -   -  O     -   -   -  - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-| "<<endl;
system("cls");
cout<<"           _______________                      "<<endl;
cout<<"          |_|__|__|_|__|__|                     "<<endl;  //11
cout<<"          |           |   |                     "<<endl;
cout<<"          |__ ________|___|                     "<<endl;
cout<<"-  -  -      O -   -  O     -   -   -  - - -    "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-| "<<endl;
system("cls");
cout<<"            _______________                     "<<endl;
cout<<"           |_|__|__|_|__|__|                    "<<endl;
cout<<"           |           |   |                    "<<endl;
cout<<"           |__ ________|___|                    "<<endl;
cout<<"-  -  -  -    O -   -  O     -   -   -   - -   "<<endl; //12
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-| "<<endl;
system("cls");
cout<<"             _______________                     "<<endl;
cout<<"            |_|__|__|_|__|__|                    "<<endl;
cout<<"            |           |   |                    "<<endl;
cout<<"            |__ ________|___|                    "<<endl;     //13
cout<<"-  -    - -    O -   -  O     -   -   -   - -     "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-| "<<endl;
system("cls");
cout<<"              _______________                      "<<endl;
cout<<"             |_|__|__|_|__|__|                     "<<endl;   //14
cout<<"             |           |   |                     "<<endl;
cout<<"             |__ ________|___|                     "<<endl;
cout<<" - -    - -     O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");
cout<<"               _______________                      "<<endl;
cout<<"              |_|__|__|_|__|__|                     "<<endl;
cout<<"              |           |   |                     "<<endl;  //15
cout<<"              |__ ________|___|                     "<<endl;
cout<<" - -    - -      O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");
cout<<"               _______________                      "<<endl;
cout<<"              |_|__|__|_|__|__|                     "<<endl;
cout<<"              |           |   |                     "<<endl;
cout<<"              |__ ________|___|                     "<<endl;   //16
cout<<" - -    - -      O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                _______________                      "<<endl;
cout<<"               |_|__|__|_|__|__|                     "<<endl;
cout<<"               |           |   |                     "<<endl;    //17
cout<<"               |__ ________|___|                     "<<endl;
cout<<" - -    - -       O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                 _______________                      "<<endl;
cout<<"                |_|__|__|_|__|__|                     "<<endl;     //18
cout<<"                |           |   |                     "<<endl;
cout<<"                |__ ________|___|                     "<<endl;
cout<<" - -    - -        O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                  _______________                      "<<endl;
cout<<"                 |_|__|__|_|__|__|                     "<<endl;
cout<<"                 |           |   |                     "<<endl;       //19
cout<<"                 |__ ________|___|                     "<<endl;
cout<<" - -    - -  -      O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                   _______________                      "<<endl;
cout<<"                  |_|__|__|_|__|__|                     "<<endl;
cout<<"                  |           |   |                     "<<endl;
cout<<"                  |__ ________|___|                     "<<endl;
cout<<" - -    - -  -      O -   -  O     -   -   -   - -       "<<endl;      //20
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                   _______________                      "<<endl;
cout<<"                  |_|__|__|_|__|__|                     "<<endl;
cout<<"                  |           |   |                     "<<endl;
cout<<"                  |__ ________|___|                     "<<endl;
cout<<" - -    - -  -       O    -  O     -   -   -   - -       "<<endl;  //21
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                    _______________                      "<<endl;
cout<<"                   |_|__|__|_|__|__|                     "<<endl;
cout<<"                   |           |   |                     "<<endl;   //22
cout<<"                   |__ ________|___|                     "<<endl;
cout<<" - -    - -  - -      O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                     _______________                      "<<endl;
cout<<"                    |_|__|__|_|__|__|                     "<<endl;
cout<<"                    |           |   |                     "<<endl; //23
cout<<"                    |__ ________|___|                     "<<endl;
cout<<" - -    - - - - -      O -   -  O     -   -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                      _______________                      "<<endl;
cout<<"                     |_|__|__|_|__|__|                     "<<endl;    //24
cout<<"                     |           |   |                     "<<endl;
cout<<"                     |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -    O -   -  O -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                       _______________                      "<<endl;
cout<<"                      |_|__|__|_|__|__|                     "<<endl;
cout<<"                      |           |   |                     "<<endl;   //25
cout<<"                      |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -     O -   -  O -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                        _______________                      "<<endl;
cout<<"                       |_|__|__|_|__|__|                     "<<endl;   //26
cout<<"                       |           |   |                     "<<endl;
cout<<"                       |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -      O -   -  O -   -   - -       "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                           _______________                      "<<endl;
cout<<"                          |_|__|__|_|__|__|                     "<<endl;
cout<<"                          |           |   |                     "<<endl;    //27
cout<<"                          |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -     O -   -  O -   -   -        "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                            _______________                      "<<endl;
cout<<"                           |_|__|__|_|__|__|                     "<<endl;
cout<<"                           |           |   |                     "<<endl;  //27
cout<<"                           |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  -   O -   -  O -   -  -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                             _______________                      "<<endl;
cout<<"                            |_|__|__|_|__|__|                     "<<endl; //28
cout<<"                            |           |   |                     "<<endl;
cout<<"                            |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  -    O -   -  O -   -  -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");
cout<<"                              _______________                      "<<endl;
cout<<"                             |_|__|__|_|__|__|                     "<<endl;  //29
cout<<"                             |           |   |                     "<<endl;
cout<<"                             |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  -     O -   -  O -   -  -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");      //law of fps
cout<<"                               _______________                      "<<endl;  //30
cout<<"                              |_|__|__|_|__|__|                     "<<endl;
cout<<"                              |           |   |                     "<<endl;
cout<<"                              |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -    O -   -  O -   -  -                 "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|                "<<endl;
system("cls");      //law of fps
//sorry Cant To More To Much Editing Of Road Was Required
cout<<"                                _______________                      "<<endl;  //31
cout<<"                               |_|__|__|_|__|__|                     "<<endl;
cout<<"                               |           |   |                     "<<endl;
cout<<"                               |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -     O -   -  O -   -  -      "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                 _______________                      "<<endl;  //32
cout<<"                                |_|__|__|_|__|__|                     "<<endl;
cout<<"                                |           |   |                     "<<endl;
cout<<"                                |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -    O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                 _______________                      "<<endl;  //33
cout<<"                                |_|__|__|_|__|__|                     "<<endl;
cout<<"                                |           |   |                     "<<endl;
cout<<"                                |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -      O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                  _______________                      "<<endl;  //34
cout<<"                                 |_|__|__|_|__|__|                     "<<endl;
cout<<"                                 |           |   |                     "<<endl;
cout<<"                                 |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -       O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                   _______________                      "<<endl;  //35
cout<<"                                  |_|__|__|_|__|__|                     "<<endl;
cout<<"                                  |           |   |                     "<<endl;
cout<<"                                  |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -  -     O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                      _______________                      "<<endl;  //36
cout<<"                                     |_|__|__|_|__|__|                     "<<endl;
cout<<"                                     |           |   |                     "<<endl;
cout<<"                                     |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - - -   -     O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

cout<<"                                      _______________                      "<<endl;  //37
cout<<"                                     |_|__|__|_|__|__|                     "<<endl;
cout<<"                                     |           |   |                     "<<endl;
cout<<"                                     |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -  - - -    O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                       _______________                      "<<endl;  //38
cout<<"                                      |_|__|__|_|__|__|                     "<<endl;
cout<<"                                      |           |   |                     "<<endl;
cout<<"                                      |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -  - -- -    O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;

system("cls");      //law of fps
cout<<"                                        _______________                      "<<endl;  //39
cout<<"                                       |_|__|__|_|__|__|                     "<<endl;
cout<<"                                       |           |   |                     "<<endl;
cout<<"                                       |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - -  - - -      O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
system("cls");
  cout<<"                                                                            "<<endl;
   cout<<"                                      _______________                      "<<endl;  //40
cout<<"                                        |_|__|__|_|__|__|                     "<<endl;
cout<<"                                        |           |   |                     "<<endl;
cout<<"                                        |__ ________|___|                     "<<endl;
cout<<" - -    - -   -    -   -  - - - - - - - -  O -   -  O -   -  -  -  -  "<<endl;
cout<<"__|-|_|-|_|-|_|-|_|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"<<endl;
}
void RamFpsPerfromace(string DDR,char Size[100]){
 cout<<"Comming Soon"<<endl;
}
void ChangeText_Background(string Background){

}
void Triangle(string Symbol,string Shaders,int totalRowNo){
    int row,space,symbol;
if(totalRowNo==200){
 MessageBox(NULL,"Warning Triangles Will Collide And Make More OF Them","Waring",MB_OK);
}else{

}
if(totalRowNo==0){
 MessageBox(NULL,"Error!","Failed",MB_ICONERROR);
 MessageBox(NULL,"Error!","Failed",MB_ICONERROR);
}else{

}     //else nothing Because The Value = 1 or more

for(row=1;row<=totalRowNo;row++){
//space
for(space=1;space<=(totalRowNo-row);space++)

    cout<<Shaders;
for(symbol=1;symbol<=((2*row)-1);symbol++)
cout<<Symbol;
cout<<endl;
}
}
//?
void GameEngineCreadits(char GameEngine[100]){
 if(strcmp(GameEngine,"yes")==0){
 cout<<"Game Engine Made By DakshArya (c) Light Fetherm V1.1"<<endl;
 }else if(strcmp(GameEngine,"No")==0){
     while(1){
  system("cls");
     }
 }else {

 }

}
void sSync(){

}
void StartGame(int LoadingTime=1000){
 cout<<"                                                                                              "<<endl;
 cout<<"                                                                                              "<<endl;
 cout<<"                                                                                              "<<endl;
 cout<<"                                                                                              "<<endl;
 cout<<"                                            LightFetherm V1.1  Game Engine Was Used To Make It"<<endl;
 cout<<"                                                                                              "<<endl;
 cout<<"                                                                                              "<<endl;
 cout<<"                                                                                              "<<endl;
 Sleep(LoadingTime);
 system("cls");

}
void File_Controller_KeyBdEvent(){
enum eDirecton { STOP = NULL, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
}
void ScriptEdit(string Script){
Script;
}
void varEdit(string Edit){
 Edit;
}
void Editior(string Edit){
Edit;
}
void Support3DCubeRendering(){

}
void DebugRun(){
 bool DebugRun;
 DebugRun=false;
 Sleep(100);
 DebugRun=true;
 if(DebugRun==true){
  cout<<"Working"<<endl;
  MessageBox(NULL,"Working The Debugging Process Works","ODL.exe",MB_OK);
 }else {
  cout<<endl;
 }
}
void string_Input(string InputName){
 getline(cin,InputName);
}
void PR(string Print){
 cout<<Print;
}
void PR_ENDL(string Print){
 cout<<Print<<endl;
}
void Print_Endl(string Print){
 cout<<Print<<endl;
}
void SaveData(string Save){
    ofstream(File);
    File.open("UserSavedData.txt");
    File<<Save;
    File.close();
}
void CircleVsCircle(){
  cout<<"Comming Soon"<<endl;
}
void Neon(){
    while(1){
  Change_ColorTo_Aqua_Text();
  Change_ColorTo_Blue_Text();
  Change_ColorTo_Green_Text();
  Change_ColorTo_LGreen_Text();
  Change_ColorTo_Red_Text();
    }

}

void Object_Creat(string Object){
 ofstream ObjectFile;
 ObjectFile.open("Object");
 ObjectFile<<Object;
 ObjectFile.close();
 Objects1+=Object;
}
void Object_ADD(){
cout<<Objects1<<endl;
}
void Object2_Create(string Object2){
  ofstream ObjectFile2;
  ObjectFile2.open("Object2");
  ObjectFile2<<Object2;
  ObjectFile2.close();
  Objects2+=Object2;
}
void Object2_ADD(){
cout<<Objects2;
}
void Tree(string Leaves,int NumberAsset){
 cout<< Leaves<<endl;
 cout<< Leaves<<endl;
 cout<< Leaves<<endl;
 cout<<"  ||"<<endl;
 cout<<"  ||"<<endl;
 cout<<"  ||"<<endl;
}
void Tree_NormolAsset(short x,short y){
cout<<"    ##"<<endl;
cout<<"   ####"<<endl;
cout<<"  ######"<<endl;
cout<<" ########"<<endl;
cout<<" ########"<<endl;
cout<<"    ||"<<endl;
}
void Cube(int Cube){

}
void Tree1_AssetNotCoustom(short Treex=5,short Treey=13){
PosX_Y(Treex,Treey);
cout<<"##"<<endl;
}
void Tree2_AssetNotCoustom(short Treex=5,short Treey=14){
PosX_Y(Treex,Treey);
cout<<"####"<<endl;
}
void Tree3_AssetNotCoustom(short Treex=5,short Treey=15){
PosX_Y(Treex,Treey);
cout<<"######"<<endl;
}
void Tree4_AssetNotCoustom(short Treex=5,short Treey=16){
PosX_Y(Treex,Treey);
cout<<"########"<<endl;
}
void Tree5_AssetNotCoustom(short Treex=5,short Treey=17){
PosX_Y(Treex,Treey);
cout<<"########"<<endl;
}
void Tree6_AssetNotCoustom(short Treex=10,short Treey=18){
PosX_Y(Treex,Treey);
cout<<"||"<<endl;
}
void SkyBox(){
    int Timex=5000;
    bool Timey;
    Timey=true;
  while(Timey);
  if(Timex==5000){
    system("cls");
  cout<<"                         @@    #####"<<endl;
  cout<<"                        @@@@   #####"<<endl;
  cout<<"     @@                      @ #####"<<endl;
  cout<<"   @@@@@@                   @@@ "<<endl;
  cout<<"  @@@@@@@@       @@        @@@@@ "<<endl;
  cout<<"                @@@@             "<<endl;
  cout<<"               @@@@@@             "<<endl;
  cout<<"                                  "<<endl;
  }else if(Timex==0){
    system("cls");
  cout<<"                               @@@"<<endl;
  cout<<"                         @@      @"<<endl;
  cout<<"                        @@@@     @"<<endl;
  cout<<"     @@                      @ @@@ "<<endl;
  cout<<"   @@@@@@                   @@@ "<<endl;
  cout<<"  @@@@@@@@       @@        @@@@@ "<<endl;
  cout<<"                @@@@             "<<endl;
  cout<<"               @@@@@@             "<<endl;
  cout<<"                                  "<<endl;
  }

}
void Change_ColorTo_AquaBackground_GOLD_Text(){
 system("color 36");
}
void Numbers(int Numbers=10){
     //linear equation
     for(int a=1; a<Numbers;a++){

             cout<<a<<endl;
     }
}

void Frezze(int Time){
  Sleep(Time);
}
void Line_Solid(){

}
void Invemetory(int InvemetoryName,string Item1,string Item2,string Item3,string Item4,string Item5){
 switch(InvemetoryName){
 case 1:
     Item1;
  break;
 case 2:
    Item2;
    break;
 case 3:
   Item3;
 break;
 case 4:
    Item4;
  break;
 case 5:
     Item5;
    break;
 }
}
void DayNight_Cycle(string DayTexure,string NightTexure,int Time,short posx,short posy){
  if(Time=='+'){
   cout<<"!FIX BY Putting A Number"<<endl;
  }else {
   Sleep(Time);
   system("cls");
  PosX_Y(posx,posy);
  cout<<NightTexure;
  Sleep(Time);
  system("cls");
  }
}
void MapPostion(int Mapx,int Mapy){
PosX_Y(Mapx,Mapy);

}
void Draw_Image(string Imgae){
   cout<<"Comming Soon"<<endl;
}
void FreeWindow(){
 cout<<"Free Window Comming Soon"<<endl;
}
void Texture_Insetsyntaxes(string Texure){
 cout<<Texure<<endl;
}
void Texuture_Insert(string TexureName){
 //imageName=texureName
}
void Respawn(int x,int y,string Art){
 if( x,y==0){
 MessageBox(NULL,"Error","ODL.exe",MB_OK);
 }else if( x,y==1){
  cout<<Art<<endl;
 }else if( x,y==2){
   cout<<""<<Art<<endl;
 }else if(x,y==3){
  cout<<" "<<Art<<endl;
 }else if(x,y==4){
   cout<<"  "<<Art<<endl;
 }else if(x,y==5){
   cout<<"     "<<Art<<endl;
 }else if(x,y==5){
   cout<<"     "<<Art<<endl;
 }else  {
   cout<<"Value Of X or Y Not Entered Value Gone Missing Error 0x0000"<<endl;
 }
}
void Map_Asset_TreeSet(){
 cout<<"                         ##             ##                                "<<endl;
 cout<<"                        ####           #####                              "<<endl;
 cout<<"                       ######         #######                             "<<endl;
 cout<<"                         ||          @  ||                                "<<endl;
 cout<<"                 @@@@    || @@@@    @@@ ||                                "<<endl;
}
void Map_AssetExtremGraphics(){
 cout<<"**************************************************************************"<<endl;
 cout<<"**************************************************************************"<<endl;
 cout<<"**************************************************************************"<<endl;
 cout<<"**************************************************************************"<<endl;
 cout<<"**************************************************************************"<<endl;
 cout<<"**************************************************************************"<<endl;
}
void Map_Asset(){

    cout<<"*****************************************^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^############~~~~~~~~~~"<<endl;
    cout<<"*****************************************^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^###@########~~~~~~~~~~"<<endl;
    cout<<"******************************************************************************############~~~~~~~~~~"<<endl;
    cout<<"******************************************************************************#########@##|_________|"<<endl;
}
void LoadingShape(int SizeTill){
 char a;
 for(int i=1;i<SizeTill;i++){
 for(int j=1;j<=10000000;j++);
    cout<<a;
}
}
void Dgress(int Dgress){
cout<<"Comming Soon"<<endl;
}
void Fps_Mega(int Fps){
for(int j=1;j<=Fps;j++);
//cout required or shapes or mapes
}
void CUBEX(int Size){

}
void SolidShape(int Length,int Size=219){
char a=Size;
for(int i=1;i<Length;i++){
 for(int j=1;j<=0;j++);
    cout<<a;
}
 }
void Map(){
RGB_(2);
SolidShape(100);
RGB_(3);
SolidShape(20);
}
void Asset_Tree(int x=80,int y=19,int y2=18,int y3=17){
PosX_Y(x,y3);
RGB_(2);
SolidShape(2);
PosX_Y(x,y2);
RGB_(2);
SolidShape(2);
cout<<""<<endl;
PosX_Y(x,y);
RGB_(5);
SolidShape(2);
}
void SolidSquare(int Heigth,int Length){
for(int i=0;i<Heigth;i++){
SolidShape(Length);
cout<<endl;
}
}
int GUI(int width,int height,int color,string TextureName){

}
void Solid_SquareAnimate(int Length,int Fps=100000000){
char a=219;
for(int i=1;i<Length;i++){
 for(int j=1;j<=Fps;j++);
    cout<<a;
}
}
void Sun(){
  PosX_Y(40,8);
  RGB_(4);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(4);
  PosX_Y(40,7);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(6);
  PosX_Y(40,6);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(6);
  PosX_Y(40,5);
  SolidShape(20);
    PosX_Y(40,4);
  RGB_(6);
  PosX_Y(40,4);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(4);
  PosX_Y(40,3);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(6);
  PosX_Y(40,2);
  SolidShape(20);
  cout<<""<<endl;
  RGB_(6);
  PosX_Y(40,1);
  SolidShape(20);
}
void Asset_Saver(string Asset){
Asset;
}
void Shop_Asset(short Shopx=5,short Shopy=13){
PosX_Y(Shopx,Shopy);
cout<<"________________"<<endl;
}
void Shop_Asset2(short Shopx=5,short Shopy=14){
PosX_Y(Shopx,Shopy);
cout<<"|      Shop    |"<<endl;
}
void Shop_Asset3(short Shopx=5,short Shopy=15){
PosX_Y(Shopx,Shopy);
cout<<"|______________|"<<endl;
}
void Shop_Asset4(short Shopx=5,short Shopy=16){
PosX_Y(Shopx,Shopy);
cout<<"|______________|"<<endl;
}
void Shop_Asset5(short Shopx=5,short Shopy=17){
PosX_Y(Shopx,Shopy);
cout<<"|______________|"<<endl;
}
void InsertiMAGE(string ImageName){
 cout<<"Comming Soon"<<endl;
}
void NPCTextAnimtor(int Time,int Pre_Made=0){
  Sleep(Time);
  system("cls");
  if(Pre_Made==2){
    cout<<"H";
    system("cls");
    cout<<"E";
    system("cls");
    cout<<"L";
    system("cls");
    cout<<"L";
    system("cls");
    cout<<"O";
    system("cls");
    cout<<" H"; //one space for space to prevent form data loss of the File    By Mumble
    system("cls");
    cout<<"U";
    system("cls");
    cout<<"M";
    system("cls");
    cout<<"A";
    system("cls");
    cout<<"N";
    system("cls");
    //ClearScreen NewFrameType     By Mumble
  }else{

  }
}
void VIDEO(){

}
void Coustomize_Background_ToText_OfSystem(int Color){

}
void AnimatorNpc(string Animator){

}
//make sure it is used in c++

void Right_Asset_Sign(){
  cout<<"(c)";
}
void Sign(char Sign[100]){
  if(strcmp(Sign,"Corpration")==0){
    cout<<"(C)"<<endl;
  }else if(strcmp(Sign,"Corpration_Endl")==0){
   cout<<"(C)";
  }else if(strcmp(Sign,"Right_Endl")==0){
  cout<<"(R)";
  }else if(strcmp(Sign,"Right")==0){
    cout<<"(R)"<<endl;
  }
}
void Solid_Line(int Length){
cout.fill(196);
cout.width(Length);
cout<<(char)196;
}
void Solid_VerticalLine(int Length){
while(Length>0){
cout<<(char)179<<endl;
Length++;
}
}
void Solid_circle(){

}
void Fill(){

}
void VSolid_Line(int TheLength){
for(int i=1;i<TheLength;i++){
Solid_Line(TheLength);

}
}
void WindowAdd(int width,int height){

}
void Asset_Block(int Blockx,int Blocky,int Color){
PosX_Y(Blockx,Blocky);
RGB_(Color);
SolidShape(4);
}
void InsertSyntax(string Syntax){
cout<<Syntax;
}
void InsertSyntax_Endl(string Syntax){
    cout<<Syntax<<endl;
}
void ScanFile(string Scan){

}
void BlockFile(string FileName){

}
void Avoid(){

}
void Center(){
PosX_Y(20,88);
}
