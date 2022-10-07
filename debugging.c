int iVar1,iVar2,I;
while(1)
{
    iVar2 = iVar1;
    LEDRed_PutVal(1);
    LEDGreen_PutVal(0);
    iVar1++;
    for(i=0;i<0x7fff;i++);
    LEDRed_PutVal(1);
    LEDGreen_PutVal(1);
    for(i=0;i<0x7fff;i++);
}
