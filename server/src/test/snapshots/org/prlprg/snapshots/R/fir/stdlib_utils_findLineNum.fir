fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2451812930;
    st findLineNum = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2451812930(srcfile, line, nameonly, envir, lastenv) {
  (reg srcfile:*, reg line:*, reg nameonly:*, reg envir:*, reg lastenv:*) -+> V { var srcfile:*, var line:*, var nameonly:*, reg nameonly_isMissing:L, reg nameonly_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var lastenv:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg srcfile1:*, reg srcfile2:V, reg inherits:cls, reg r7:V, reg r8:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg sub:cls, reg srcfile3:*, reg srcfile4:V, reg p1:p(V +), reg r15:V, reg as_numeric:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg line1:*, reg line2:V, reg is_na:cls, reg r19:V, reg c2:L, reg stop:cls, reg r20:V, reg sub1:cls, reg srcfile5:*, reg srcfile6:V, reg p2:p(V +), reg r23:V, reg srcfile7:cls, reg srcfile8:*, reg srcfile9:V, reg p3:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg missing1:cls, reg r30:V, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg missing2:cls, reg r33:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg globalenv:cls, reg r36:V, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg emptyenv:cls, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg envir1:*, reg envir2:V, reg is_environment:cls, reg r43:V, reg r44:V, reg c5:L, reg environment:cls, reg envir3:*, reg envir4:V, reg p4:p(V +), reg r46:V, reg character:cls, reg r48:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg list1:cls, reg r51:V, reg envir5:*, reg envir6:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg fns:*, reg fns1:V, reg lsf_str:cls, reg e:*, reg e1:V, reg p5:p(V +), reg r55:V, reg c6:cls, reg r56:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg r58:V, reg envirs:*, reg envirs1:V, reg length:cls, reg r59:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r60:V, reg r61:V, reg fns2:*, reg fns3:V, reg length1:cls, reg r62:V, reg l:*, reg length__:cls, reg r63:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r64:V, reg r65:V, reg envirs2:*, reg envirs3:V, reg length2:cls, reg r66:V, reg oldlen:*, reg oldlen1:V, reg r67:V, reg c7:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r68:V, reg r69:V, reg oldlen2:*, reg oldlen3:V, reg r70:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r71:V, reg r72:V, reg envirs4:*, reg envirs5:V, reg length3:cls, reg r73:V, reg seq_int:cls, reg r74:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg e2:*, reg e3:V, reg l2:*, reg c9:L, reg i6:I, reg e5:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg ____:cls, reg r75:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r76:V, reg r77:V, reg e8:*, reg e9:V, reg lastenv1:*, reg lastenv2:V, reg identical:cls, reg r78:V, reg c10:L, reg c11:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r79:V, reg c15:L, reg r80:V, reg e10:*, reg e11:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r81:V, reg c18:L, reg r82:V, reg emptyenv1:cls, reg r83:V, reg identical1:cls, reg r84:V, reg c19:L, reg c20:V, reg c22:L, reg parent_env:cls, reg e12:*, reg e13:V, reg p6:p(V +), reg r87:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r88:V, reg r89:V, reg fns4:*, reg fns5:V, reg r90:I, reg s1:V, reg l5:I, reg i12:I, reg i13:I, reg i14:I, reg c23:L, reg x1:V, reg fns6:*, reg fns7:V, reg c24:L, reg i18:I, reg fns9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __:cls, reg r91:V, reg get:cls, reg functionName:*, reg functionName1:V, reg p7:p(V +), reg envirs6:*, reg envirs7:V, reg c25:L, reg envirs9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i23:*, reg i24:V, reg __1:cls, reg r93:V, reg p8:p(V +), reg r95:V, reg fnLineNum:cls, reg fn:*, reg fn1:V, reg p9:p(V +), reg srcfile10:*, reg srcfile11:V, reg p10:p(V +), reg line3:*, reg line4:V, reg p11:p(V +), reg nameonly1:*, reg nameonly2:V, reg p12:p(V +), reg r100:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r101:V, reg i27:I, reg r102:V, reg loc:*, reg loc1:V, reg c26:V, reg r103:V, reg c27:L, reg count:*, reg count1:V, reg r104:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r105:V, reg i32:I, reg r106:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r107:V, reg i35:I, reg r108:V, reg functionName2:*, reg functionName3:V, reg envirs10:*, reg envirs11:V, reg c28:L, reg i37:I, reg envirs13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i39:I, reg dx7:V, reg i40:*, reg i41:V, reg __2:cls, reg r109:V, reg list2:cls, reg r110:V, reg loc2:*, reg loc3:V, reg c29:cls, reg r111:V, reg l6:*, reg c30:L, reg i43:I, reg r113:V, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i45:I, reg r115:V, reg dx9:V, reg count2:*, reg count3:V, reg ____1:cls, reg r116:V, reg i46:I, reg tryCatch:cls, reg __3:cls, reg r118:V, reg r119:cls, reg functionName4:*, reg functionName5:V, reg p13:p(V +), reg envirs14:*, reg envirs15:V, reg c31:L, reg envirs17:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i47:*, reg i48:V, reg __4:cls, reg r121:V, reg p14:p(V +), reg fn2:*, reg fn3:V, reg p15:p(V +), reg r124:V, reg p16:p(V +), reg identity:*, reg identity1:V, reg p17:p(V +), reg r127:V, reg isTRUE:cls, reg gen:*, reg gen1:V, reg p18:p(V +), reg r129:V, reg c32:L, reg environment1:cls, reg fn4:*, reg fn5:V, reg p19:p(V +), reg r131:V, reg c33:L, reg i52:I, reg r133:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i54:I, reg dx13:V, reg r134:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r135:V, reg i57:I, reg r136:V, reg e14:*, reg e15:V, reg names:cls, reg r137:V, reg s2:V, reg l9:I, reg i58:I, reg i59:I, reg i60:I, reg i61:I, reg c34:L, reg x2:V, reg e16:*, reg e17:V, reg c35:L, reg i68:I, reg i69:I, reg e19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i72:I, reg i73:I, reg dx15:V, reg sig:*, reg sig1:V, reg __5:cls, reg r138:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r139:V, reg i78:I, reg i79:I, reg r140:V, reg fn6:*, reg fn7:V, reg typeof:cls, reg r141:V, reg r142:V, reg c36:L, reg fnLineNum1:cls, reg fn8:*, reg fn9:V, reg p20:p(V +), reg srcfile12:*, reg srcfile13:V, reg p21:p(V +), reg line5:*, reg line6:V, reg p22:p(V +), reg nameonly3:*, reg nameonly4:V, reg p23:p(V +), reg r148:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r149:V, reg i92:I, reg i93:I, reg r150:V, reg loc4:*, reg loc5:V, reg c37:V, reg c38:L, reg i96:I, reg i97:I, reg c40:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r151:V, reg i102:I, reg i103:I, reg c43:L, reg r152:V, reg body:cls, reg fn10:*, reg fn11:V, reg p24:p(V +), reg r154:V, reg length4:cls, reg r155:V, reg r156:V, reg c44:L, reg c45:V, reg c47:L, reg i108:I, reg i109:I, reg c49:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r157:V, reg i114:I, reg i115:I, reg c52:L, reg r158:V, reg bf:*, reg bf1:V, reg c53:L, reg i118:I, reg i119:I, reg c55:L, reg bf3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i122:I, reg i123:I, reg c57:L, reg dx17:V, reg __6:cls, reg r159:V, reg length5:cls, reg r160:V, reg r161:V, reg c58:L, reg c59:V, reg c61:L, reg i128:I, reg i129:I, reg c63:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r162:V, reg i134:I, reg i135:I, reg c66:L, reg r163:V, reg bf4:*, reg bf5:V, reg c67:L, reg i138:I, reg i139:I, reg c69:L, reg bf7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i142:I, reg i143:I, reg c71:L, reg dx19:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r164:V, reg i148:I, reg i149:I, reg c74:L, reg bf10:V, reg r165:V, reg c75:cls, reg r166:V, reg __7:cls, reg r167:V, reg typeof1:cls, reg r168:V, reg r169:V, reg c76:L, reg c77:V, reg c79:L, reg fnLineNum2:cls, reg bf_i:*, reg bf_i1:V, reg p25:p(V +), reg srcfile14:*, reg srcfile15:V, reg p26:p(V +), reg line7:*, reg line8:V, reg p27:p(V +), reg nameonly5:*, reg nameonly6:V, reg p28:p(V +), reg r174:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r175:V, reg i160:I, reg i161:I, reg r176:V, reg loc6:*, reg loc7:V, reg c80:V, reg r177:V, reg c81:L, reg iloc:*, reg iloc1:V, reg l10:*, reg c82:L, reg i168:I, reg i169:I, reg iloc3:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx20:V, reg i172:I, reg i173:I, reg iloc5:V, reg dx21:V, reg r178:V, reg i174:I, reg i175:I, reg iloc6:V, reg i176:I, reg i177:I, reg sym32:cls, reg base32:cls, reg guard32:L, reg r179:V, reg i182:I, reg i183:I, reg r180:V, reg loc8:*, reg loc9:V, reg c83:V, reg r181:V, reg c84:L, reg count4:*, reg count5:V, reg r182:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r183:V, reg i192:I, reg i193:I, reg r184:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r185:V, reg i198:I, reg i199:I, reg r186:V, reg functionName6:*, reg functionName7:V, reg envirs18:*, reg envirs19:V, reg c85:L, reg i202:I, reg i203:I, reg envirs21:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i206:I, reg i207:I, reg dx23:V, reg i208:*, reg i209:V, reg __8:cls, reg r187:V, reg strsplit:cls, reg sig2:*, reg sig3:V, reg p29:p(V +), reg r189:V, reg c86:L, reg i212:I, reg i213:I, reg r191:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i216:I, reg i217:I, reg dx25:V, reg __9:cls, reg r192:V, reg list3:cls, reg r193:V, reg loc10:*, reg loc11:V, reg c87:cls, reg r194:V, reg l13:*, reg c88:L, reg i220:I, reg i221:I, reg r196:V, reg l15:*, reg dr26:V, reg dc13:L, reg dx26:V, reg i224:I, reg i225:I, reg r198:V, reg dx27:V, reg count6:*, reg count7:V, reg ____2:cls, reg r199:V, reg i226:I, reg i227:I, reg i228:I, reg structure:cls, reg result:*, reg result1:V, reg p30:p(V +), reg r202:V |
    mkenv;
    st srcfile = srcfile;
    st line = line;
    nameonly_isMissing = missing.0(nameonly);
    if nameonly_isMissing then L0(TRUE) else L0(nameonly);
  L0(nameonly_orDefault):
    st nameonly = nameonly_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L1() else L2(envir);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(envir_orDefault):
    st envir = envir_orDefault;
    st lastenv = lastenv;
    st count = 0;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L3(r3):
    st result = r3;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L90() else L91();
  L87():
    list = ldf list in base;
    r4 = dyn list();
    check L89() else D0();
  L88():
    r2 = dyn base();
    goto L3(r2);
  D0():
    deopt 6 [r4];
  L4(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L94() else L5();
  L89():
    goto L3(r4);
  L90():
    srcfile1 = ld srcfile;
    check L92() else D1();
  L91():
    r5 = dyn base1(<sym srcfile>, "srcfile");
    goto L4(r5);
  D1():
    deopt 10 [srcfile1];
  L5():
    goto L13();
  L13():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L117() else L118();
  L92():
    srcfile2 = force? srcfile1;
    checkMissing(srcfile2);
    inherits = ldf inherits in base;
    r7 = dyn inherits(srcfile2, "srcfile", FALSE);
    check L93() else D2();
  L94():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L95() else L96();
  D2():
    deopt 15 [r7];
  L6(r10):
    c1 = `as.logical`(r10);
    if c1 then L97() else L7();
  L14(r29):
    c3 = `as.logical`(r29);
    if c3 then L119() else L15();
  L93():
    goto L4(r7);
  L95():
    missing = ldf missing in base;
    r11 = dyn missing(<sym line>);
    goto L6(r11);
  L96():
    r9 = dyn base2(<sym line>);
    goto L6(r9);
  L117():
    missing1 = ldf missing in base;
    r30 = dyn missing1(<sym lastenv>);
    goto L14(r30);
  L118():
    r28 = dyn base5(<sym lastenv>);
    goto L14(r28);
  L7():
    goto L12();
  L12():
    srcfile7 = ldf srcfile;
    check L114() else D12();
  L15():
    goto L20();
  L20():
    sym9 = ldf `is.environment`;
    base9 = ldf `is.environment` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  L97():
    sym3 = ldf `as.numeric`;
    base3 = ldf `as.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L119():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  D12():
    deopt 53 [];
  L8(r13):
    st line = r13;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L103() else L104();
  L16(r32):
    c4 = `as.logical`(r32);
    if c4 then L122() else L17();
  L21(r42):
    r44 = `!`(r42);
    c5 = `as.logical`(r44);
    if c5 then L135() else L22();
  L98():
    sub = ldf sub;
    check L100() else D3();
  L99():
    r12 = dyn base3(<lang sub(".*#", "", srcfile)>);
    goto L8(r12);
  L114():
    p3 = prom<V +>{
      srcfile8 = ld srcfile;
      srcfile9 = force? srcfile8;
      checkMissing(srcfile9);
      return srcfile9;
    };
    r26 = dyn srcfile7(p3);
    check L115() else D13();
  L120():
    missing2 = ldf missing in base;
    r33 = dyn missing2(<sym envir>);
    goto L16(r33);
  L121():
    r31 = dyn base6(<sym envir>);
    goto L16(r31);
  L131():
    envir1 = ld envir;
    check L133() else D16();
  L132():
    r41 = dyn base9(<sym envir>);
    goto L21(r41);
  D3():
    deopt 23 [];
  D13():
    deopt 55 [r26];
  D16():
    deopt 78 [envir1];
  L9(r18):
    c2 = `as.logical`(r18);
    if c2 then L107() else L10();
  L17():
    sym8 = ldf emptyenv;
    base8 = ldf emptyenv in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L127() else L128();
  L19(r37):
    st lastenv = r37;
    goto L20();
  L22():
    goto L23();
  L23():
    character = ldf character;
    check L139() else D20();
  L100():
    p1 = prom<V +>{
      srcfile3 = ld srcfile;
      srcfile4 = force? srcfile3;
      checkMissing(srcfile4);
      return srcfile4;
    };
    r15 = dyn sub(".*#", "", p1);
    check L101() else D4();
  L103():
    line1 = ld line;
    check L105() else D6();
  L104():
    r17 = dyn base4(<sym line>);
    goto L9(r17);
  L115():
    st srcfile = r26;
    goto L13();
  L122():
    sym7 = ldf globalenv;
    base7 = ldf globalenv in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L123() else L124();
  L133():
    envir2 = force? envir1;
    checkMissing(envir2);
    is_environment = ldf `is.environment` in base;
    r43 = dyn is_environment(envir2);
    check L134() else D17();
  L135():
    environment = ldf environment;
    check L136() else D18();
  D4():
    deopt 27 [r15];
  D6():
    deopt 33 [line1];
  D17():
    deopt 81 [r43];
  D18():
    deopt 84 [];
  D20():
    deopt 91 [];
  L10():
    goto L11();
  L11():
    sub1 = ldf sub;
    check L111() else D10();
  L18(r35):
    goto L19(r35);
  L101():
    as_numeric = ldf `as.numeric` in base;
    r16 = dyn as_numeric(r15);
    check L102() else D5();
  L105():
    line2 = force? line1;
    checkMissing(line2);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(line2);
    check L106() else D7();
  L107():
    stop = ldf stop;
    check L108() else D8();
  L123():
    globalenv = ldf globalenv in base;
    r36 = dyn globalenv();
    check L125() else D14();
  L124():
    r34 = dyn base7();
    goto L18(r34);
  L127():
    emptyenv = ldf emptyenv in base;
    r39 = dyn emptyenv();
    check L129() else D15();
  L128():
    r38 = dyn base8();
    goto L19(r38);
  L134():
    goto L21(r43);
  L136():
    p4 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r46 = dyn environment(p4);
    check L137() else D19();
  L139():
    r48 = dyn character();
    check L140() else D21();
  D5():
    deopt 29 [r16];
  D7():
    deopt 36 [r19];
  D8():
    deopt 38 [];
  D10():
    deopt 44 [];
  D14():
    deopt 68 [r36];
  D15():
    deopt 72 [r39];
  D19():
    deopt 86 [r46];
  D21():
    deopt 92 [r48];
  L102():
    goto L8(r16);
  L106():
    goto L9(r19);
  L108():
    r20 = dyn stop("Line number missing");
    check L109() else D9();
  L111():
    p2 = prom<V +>{
      srcfile5 = ld srcfile;
      srcfile6 = force? srcfile5;
      checkMissing(srcfile6);
      return srcfile6;
    };
    r23 = dyn sub1("#[^#]*", "", p2);
    check L112() else D11();
  L125():
    goto L18(r36);
  L129():
    goto L19(r39);
  L137():
    st envir = r46;
    goto L23();
  L140():
    st fns = r48;
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  D9():
    deopt 40 [r20];
  D11():
    deopt 48 [r23];
  L24(r50):
    st envirs = r50;
    envir5 = ld envir;
    check L144() else D23();
  L109():
    goto L11();
  L112():
    st srcfile = r23;
    goto L12();
  L141():
    list1 = ldf list in base;
    r51 = dyn list1();
    check L143() else D22();
  L142():
    r49 = dyn base10();
    goto L24(r49);
  D22():
    deopt 97 [r51];
  D23():
    deopt 99 [envir5];
  L143():
    goto L24(r51);
  L144():
    envir6 = force? envir5;
    checkMissing(envir6);
    st e = envir6;
    goto L43();
  L43():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L145() else L146();
  L25(r53):
    st fns = r53;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L151() else L152();
  L145():
    fns = ld fns;
    check L147() else D24();
  L146():
    r52 = dyn base11(<sym fns>, <lang lsf.str(envir=e, all.names=TRUE)>);
    goto L25(r52);
  D24():
    deopt 104 [fns];
  L26(r58):
    st oldlen = r58;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L155() else L156();
  L147():
    fns1 = force? fns;
    checkMissing(fns1);
    lsf_str = ldf `lsf.str`;
    check L148() else D25();
  L151():
    envirs = ld envirs;
    check L153() else D28();
  L152():
    r57 = dyn base12(<sym envirs>);
    goto L26(r57);
  D25():
    deopt 107 [];
  D28():
    deopt 118 [envirs];
  L27(r61):
    l = ld envirs;
    length__ = ldf `length<-`;
    check L159() else D32();
  L148():
    p5 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r55 = dyn lsf_str[envir, `all.names`](p5, TRUE);
    check L149() else D26();
  L153():
    envirs1 = force? envirs;
    checkMissing(envirs1);
    length = ldf length in base;
    r59 = dyn length(envirs1);
    check L154() else D29();
  L155():
    fns2 = ld fns;
    check L157() else D30();
  L156():
    r60 = dyn base13(<sym fns>);
    goto L27(r60);
  D26():
    deopt 112 [r55];
  D29():
    deopt 121 [r59];
  D30():
    deopt 125 [fns2];
  D32():
    deopt 130 [r61, l, r61];
  L149():
    c6 = ldf c in base;
    r56 = dyn c6(fns1, r55);
    check L150() else D27();
  L154():
    goto L26(r59);
  L157():
    fns3 = force? fns2;
    checkMissing(fns3);
    length1 = ldf length in base;
    r62 = dyn length1(fns3);
    check L158() else D31();
  L159():
    r63 = dyn length__(l, NULL, r61);
    check L160() else D33();
  D27():
    deopt 114 [r56];
  D31():
    deopt 128 [r62];
  D33():
    deopt 132 [r61, r63];
  L150():
    goto L25(r56);
  L158():
    goto L27(r62);
  L160():
    st envirs = r63;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L161() else L162();
  L28(r65):
    oldlen = ld oldlen;
    check L165() else D36();
  L161():
    envirs2 = ld envirs;
    check L163() else D34();
  L162():
    r64 = dyn base14(<sym envirs>);
    goto L28(r64);
  D34():
    deopt 136 [envirs2];
  D36():
    deopt 139 [r65, oldlen];
  L163():
    envirs3 = force? envirs2;
    checkMissing(envirs3);
    length2 = ldf length in base;
    r66 = dyn length2(envirs3);
    check L164() else D35();
  L165():
    oldlen1 = force? oldlen;
    checkMissing(oldlen1);
    r67 = `>`(r65, oldlen1);
    c7 = `as.logical`(r67);
    if c7 then L166() else L29();
  D35():
    deopt 139 [r66];
  L29():
    goto L35();
  L35():
    sym17 = ldf identical;
    base17 = ldf identical in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L182() else L183();
  L164():
    goto L28(r66);
  L166():
    sym15 = ldf `seq.int`;
    base15 = ldf `seq.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L167() else L168();
  L30(r69):
    s = toForSeq(r69);
    l1 = length(s);
    i = 0;
    goto L32(i);
  L36(r77):
    c10 = `as.logical`(r77);
    if c10 then L37(c10) else L187();
  L167():
    oldlen2 = ld oldlen;
    check L169() else D37();
  L168():
    r68 = dyn base15(<lang `+`(oldlen, 1)>, <lang length(envirs)>);
    goto L30(r68);
  L182():
    e8 = ld e;
    check L184() else D43();
  L183():
    r76 = dyn base17(<sym e>, <sym lastenv>);
    goto L36(r76);
  D37():
    deopt 144 [oldlen2];
  D43():
    deopt 170 [e8];
  L32(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l1, i2);
    if c8 then L175() else L34();
  L37(c11):
    c22 = `as.logical`(c11);
    if c22 then L196() else L40();
  L169():
    oldlen3 = force? oldlen2;
    checkMissing(oldlen3);
    r70 = `+`(oldlen3, 1);
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L170() else L171();
  L184():
    e9 = force? e8;
    checkMissing(e9);
    lastenv1 = ld lastenv;
    check L185() else D44();
  L187():
    sym18 = ldf identical;
    base18 = ldf identical in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L188() else L189();
  D44():
    deopt 172 [lastenv1];
  L31(r72):
    seq_int = ldf `seq.int` in base;
    r74 = dyn seq_int(r70, r72);
    check L174() else D40();
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    e2 = ld e;
    check L176() else D41();
  L38(c15, r80):
    c19 = `as.logical`(r80);
    c20 = `||`(c15, c19);
    goto L37(c20);
  L40():
    parent_env = ldf `parent.env`;
    check L199() else D49();
  L170():
    envirs4 = ld envirs;
    check L172() else D38();
  L171():
    r71 = dyn base16(<sym envirs>);
    goto L31(r71);
  L175():
    goto L35();
  L185():
    lastenv2 = force? lastenv1;
    checkMissing(lastenv2);
    identical = ldf identical in base;
    r78 = dyn identical(e9, lastenv2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L186() else D45();
  L188():
    e10 = ld e;
    check L190() else D46();
  L189():
    r79 = dyn base18(<sym e>, <lang emptyenv()>);
    goto L38(c10, r79);
  L196():
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L202() else L203();
  D38():
    deopt 150 [envirs4];
  D40():
    deopt 155 [r74];
  D41():
    deopt 156 [i2, e2];
  D45():
    deopt 182 [r78];
  D46():
    deopt 185 [c10, e10];
  D49():
    deopt 206 [];
  L44(r89):
    s1 = toForSeq(r89);
    l5 = length(s1);
    i12 = 0;
    goto L45(i12);
  L172():
    envirs5 = force? envirs4;
    checkMissing(envirs5);
    length3 = ldf length in base;
    r73 = dyn length3(envirs5);
    check L173() else D39();
  L174():
    goto L30(r74);
  L176():
    e3 = force? e2;
    checkMissing(e3);
    l2 = ld envirs;
    c9 = `is.object`(l2);
    if c9 then L177() else L178(i2, e3, l2);
  L186():
    goto L36(r78);
  L190():
    e11 = force? e10;
    checkMissing(e11);
    sym19 = ldf emptyenv;
    base19 = ldf emptyenv in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L191() else L192();
  L199():
    p6 = prom<V +>{
      e12 = ld e;
      e13 = force? e12;
      checkMissing(e13);
      return e13;
    };
    r87 = dyn parent_env(p6);
    check L200() else D50();
  L202():
    fns4 = ld fns;
    check L204() else D51();
  L203():
    r88 = dyn base20(<sym fns>);
    goto L44(r88);
  D39():
    deopt 153 [r73];
  D50():
    deopt 208 [r87];
  D51():
    deopt 214 [fns4];
  L33(i8, dx1):
    st envirs = dx1;
    goto L32(i8);
  L39(c18, r82):
    identical1 = ldf identical in base;
    r84 = dyn identical1(e11, r82, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L194() else D48();
  L45(i13):
    i14 = `+`.1(i13, 1);
    c23 = `<`.1(l5, i14);
    if c23 then L205() else L86();
  L173():
    goto L31(r73);
  L177():
    dr = tryDispatchBuiltin.0("[[<-", l2, e3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L179() else L178(i2, e3, dr);
  L178(i6, e5, l4):
    i9 = ld i;
    check L180() else D42();
  L191():
    emptyenv1 = ldf emptyenv in base;
    r83 = dyn emptyenv1();
    check L193() else D47();
  L192():
    r81 = dyn base19();
    goto L39(c10, r81);
  L200():
    st e = r87;
    goto L43();
  L204():
    fns5 = force? fns4;
    checkMissing(fns5);
    r90 = seq_along(fns5);
    goto L44(r90);
  D42():
    deopt 159 [i6, e5, l4, e3, i9];
  D47():
    deopt 190 [c10, r83];
  D48():
    deopt 199 [c18, r84];
  L86():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st i = x1;
    fns6 = ld fns;
    check L206() else D52();
  L179():
    dx = getTryDispatchBuiltinValue(dr);
    goto L33(i2, dx);
  L180():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r75 = dyn ____(l4, e3, i10);
    goto L33(i6, r75);
  L193():
    goto L39(c10, r83);
  L194():
    goto L38(c18, r84);
  L205():
    structure = ldf structure;
    check L342() else D105();
  D52():
    deopt 217 [i14, fns6];
  D105():
    deopt 454 [];
  L206():
    fns7 = force? fns6;
    checkMissing(fns7);
    c24 = `is.object`(fns7);
    if c24 then L207() else L208(i14, fns7);
  L342():
    p30 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    r202 = dyn structure[, class](p30, "findLineNumResult");
    check L343() else D106();
  D106():
    deopt 458 [r202];
  L46(i20, dx3):
    st functionName = dx3;
    get = ldf get;
    check L211() else D54();
  L207():
    dr2 = tryDispatchBuiltin.1("[", fns7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L209() else L208(i14, dr2);
  L208(i18, fns9):
    i21 = ld i;
    check L210() else D53();
  L343():
    popenv;
    return r202;
  D53():
    deopt 219 [i18, fns9, i21];
  D54():
    deopt 224 [i20];
  L209():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L46(i14, dx2);
  L210():
    i22 = force? i21;
    __ = ldf `[` in base;
    r91 = dyn __(fns9, i22);
    goto L46(i18, r91);
  L211():
    p7 = prom<V +>{
      functionName = ld functionName;
      functionName1 = force? functionName;
      checkMissing(functionName1);
      return functionName1;
    };
    p8 = prom<V +>{
      envirs6 = ld envirs;
      envirs7 = force? envirs6;
      checkMissing(envirs7);
      c25 = `is.object`(envirs7);
      if c25 then L1() else L2(envirs7);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", envirs7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(envirs9):
      i23 = ld i;
      i24 = force? i23;
      __1 = ldf `[[` in base;
      r93 = dyn __1(envirs9, i24);
      goto L0(r93);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r95 = dyn get[, envir](p7, p8);
    check L212() else D55();
  D55():
    deopt 228 [i20, r95];
  L212():
    st fn = r95;
    fnLineNum = ldf fnLineNum;
    check L213() else D56();
  D56():
    deopt 231 [i20];
  L213():
    p9 = prom<V +>{
      fn = ld fn;
      fn1 = force? fn;
      checkMissing(fn1);
      return fn1;
    };
    p10 = prom<V +>{
      srcfile10 = ld srcfile;
      srcfile11 = force? srcfile10;
      checkMissing(srcfile11);
      return srcfile11;
    };
    p11 = prom<V +>{
      line3 = ld line;
      line4 = force? line3;
      checkMissing(line4);
      return line4;
    };
    p12 = prom<V +>{
      nameonly1 = ld nameonly;
      nameonly2 = force? nameonly1;
      checkMissing(nameonly2);
      return nameonly2;
    };
    r100 = dyn fnLineNum[, srcfile, line, nameonly](p9, p10, p11, p12);
    check L214() else D57();
  D57():
    deopt 239 [i20, r100];
  L214():
    st loc = r100;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L215() else L216();
  L47(i27, r102):
    r103 = `!`(r102);
    c27 = `as.logical`(r103);
    if c27 then L218() else L48();
  L215():
    loc = ld loc;
    check L217() else D58();
  L216():
    r101 = dyn base21(<sym loc>);
    goto L47(i20, r101);
  D58():
    deopt 242 [i20, loc];
  L48():
    goto L53(i27);
  L53(i46):
    tryCatch = ldf tryCatch;
    check L238() else D67();
  L217():
    loc1 = force? loc;
    checkMissing(loc1);
    c26 = `==`(loc1, NULL);
    goto L47(i20, c26);
  L218():
    count = ld count;
    check L219() else D59();
  D59():
    deopt 246 [i27, count];
  D67():
    deopt 278 [i46];
  L219():
    count1 = force? count;
    checkMissing(count1);
    r104 = `+`(count1, 1);
    st count = r104;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L220() else L221();
  L238():
    p16 = prom<V +>{
      __3 = ldf `::`;
      r118 = dyn __3("methods", "isGeneric");
      checkFun.0(r118);
      r119 = r118 as cls;
      p13 = prom<V +>{
        functionName4 = ld functionName;
        functionName5 = force? functionName4;
        checkMissing(functionName5);
        return functionName5;
      };
      p14 = prom<V +>{
        envirs14 = ld envirs;
        envirs15 = force? envirs14;
        checkMissing(envirs15);
        c31 = `is.object`(envirs15);
        if c31 then L1() else L2(envirs15);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[[", envirs15);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(envirs17):
        i47 = ld i;
        i48 = force? i47;
        __4 = ldf `[[` in base;
        r121 = dyn __4(envirs17, i48);
        goto L0(r121);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p15 = prom<V +>{
        fn2 = ld fn;
        fn3 = force? fn2;
        checkMissing(fn3);
        return fn3;
      };
      r124 = dyn r119[, , fdef](p13, p14, p15);
      return r124;
    };
    p17 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r127 = dyn tryCatch[, error](p16, p17);
    check L239() else D68();
  D68():
    deopt 282 [i46, r127];
  L49(i32, r106):
    l6 = ld result;
    c30 = `is.object`(l6);
    if c30 then L233() else L234(i32, r106, l6);
  L220():
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L222() else L223();
  L221():
    r105 = dyn base22(<lang list(name=functionName, env=`[[`(envirs, i))>, <sym loc>);
    goto L49(i27, r105);
  L239():
    st gen = r127;
    isTRUE = ldf isTRUE;
    check L240() else D69();
  D69():
    deopt 285 [i46];
  L50(i35, r108):
    loc2 = ld loc;
    check L231() else D64();
  L52(i45, r115, dx9):
    st result = dx9;
    goto L53(i45);
  L222():
    functionName2 = ld functionName;
    check L224() else D60();
  L223():
    r107 = dyn base23[name, env](<sym functionName>, <lang `[[`(envirs, i)>);
    goto L50(i27, r107);
  L233():
    dr8 = tryDispatchBuiltin.0("[[<-", l6, r106);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L235() else L234(i32, r106, dr8);
  L234(i43, r113, l8):
    count2 = ld count;
    check L236() else D66();
  L240():
    p18 = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    r129 = dyn isTRUE(p18);
    check L241() else D70();
  D60():
    deopt 255 [i27, functionName2];
  D64():
    deopt 266 [i35, loc2];
  D66():
    deopt 271 [i43, r113, l8, r106, count2];
  D70():
    deopt 287 [i46, r129];
  L224():
    functionName3 = force? functionName2;
    checkMissing(functionName3);
    envirs10 = ld envirs;
    check L225() else D61();
  L231():
    loc3 = force? loc2;
    checkMissing(loc3);
    c29 = ldf c in base;
    r111 = dyn c29(r108, loc3);
    check L232() else D65();
  L235():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L52(i32, r106, dx8);
  L236():
    count3 = force? count2;
    ____1 = ldf `[[<-` in base;
    r116 = dyn ____1(l8, r106, count3);
    goto L52(i43, r113, r116);
  L241():
    c32 = `as.logical`(r129);
    if c32 then L242() else L54();
  D61():
    deopt 258 [i27, envirs10];
  D65():
    deopt 269 [i35, r111];
  L54():
    goto L85(i46);
  L85(i228):
    goto L45(i228);
  L225():
    envirs11 = force? envirs10;
    checkMissing(envirs11);
    c28 = `is.object`(envirs11);
    if c28 then L226() else L227(i27, envirs11);
  L232():
    goto L49(i35, r111);
  L242():
    environment1 = ldf environment;
    check L243() else D71();
  D71():
    deopt 289 [i46];
  L51(i39, dx7):
    list2 = ldf list in base;
    r110 = dyn list2(functionName3, dx7);
    check L230() else D63();
  L226():
    dr6 = tryDispatchBuiltin.1("[[", envirs11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L228() else L227(i27, dr6);
  L227(i37, envirs13):
    i40 = ld i;
    check L229() else D62();
  L243():
    p19 = prom<V +>{
      fn4 = ld fn;
      fn5 = force? fn4;
      checkMissing(fn5);
      return fn5;
    };
    r131 = dyn environment1(p19);
    check L244() else D72();
  D62():
    deopt 260 [i37, envirs13, i40];
  D63():
    deopt 265 [i39, r110];
  D72():
    deopt 291 [i46, r131];
  L228():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L51(i27, dx6);
  L229():
    i41 = force? i40;
    __2 = ldf `[[` in base;
    r109 = dyn __2(envirs13, i41);
    goto L51(i37, r109);
  L230():
    goto L50(i39, r110);
  L244():
    c33 = `is.object`(r131);
    if c33 then L246() else L247(i46, r131);
  L245(i54, dx13):
    st e1 = dx13;
    sym24 = ldf names;
    base24 = ldf names in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L249() else L250();
  L246():
    dr12 = tryDispatchBuiltin.1("$", r131);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L248() else L247(i46, dr12);
  L247(i52, r133):
    r134 = `$`(r133, <sym .AllMTable>);
    goto L245(i52, r134);
  L55(i57, r136):
    s2 = toForSeq(r136);
    l9 = length(s2);
    i58 = 0;
    goto L56(i57, i58);
  L248():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L245(i46, dx12);
  L249():
    e14 = ld e1;
    check L251() else D73();
  L250():
    r135 = dyn base24(<sym e1>);
    goto L55(i54, r135);
  D73():
    deopt 296 [i54, e14];
  L56(i59, i60):
    i61 = `+`.1(i60, 1);
    c34 = `<`.1(l9, i61);
    if c34 then L253() else L84();
  L251():
    e15 = force? e14;
    checkMissing(e15);
    names = ldf names in base;
    r137 = dyn names(e15);
    check L252() else D74();
  D74():
    deopt 299 [i54, r137];
  L84():
    x2 = `[[`(s2, i61, NULL, TRUE);
    st sig = x2;
    e16 = ld e1;
    check L254() else D75();
  L252():
    goto L55(i54, r137);
  L253():
    goto L85(i59);
  D75():
    deopt 300 [i59, i61, e16];
  L254():
    e17 = force? e16;
    checkMissing(e17);
    c35 = `is.object`(e17);
    if c35 then L255() else L256(i59, i61, e17);
  L57(i72, i73, dx15):
    st fn = dx15;
    sym25 = ldf typeof;
    base25 = ldf typeof in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L259() else L260();
  L255():
    dr14 = tryDispatchBuiltin.1("[[", e17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L257() else L256(i59, i61, dr14);
  L256(i68, i69, e19):
    sig = ld sig;
    check L258() else D76();
  D76():
    deopt 302 [i68, i69, e19, sig];
  L58(i78, i79, r140):
    r142 = `!=`(r140, "closure");
    c36 = `as.logical`(r142);
    if c36 then L263() else L59();
  L257():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L57(i59, i61, dx14);
  L258():
    sig1 = force? sig;
    __5 = ldf `[[` in base;
    r138 = dyn __5(e19, sig1);
    goto L57(i68, i69, r138);
  L259():
    fn6 = ld fn;
    check L261() else D77();
  L260():
    r139 = dyn base25(<sym fn>);
    goto L58(i72, i73, r139);
  D77():
    deopt 308 [i72, i73, fn6];
  L59():
    fnLineNum1 = ldf fnLineNum;
    check L266() else D79();
  L261():
    fn7 = force? fn6;
    checkMissing(fn7);
    typeof = ldf typeof in base;
    r141 = dyn typeof(fn7);
    check L262() else D78();
  L263():
    goto L56(i78, i79);
  D78():
    deopt 311 [i72, i73, r141];
  D79():
    deopt 319 [i78, i79];
  L262():
    goto L58(i72, i73, r141);
  L266():
    p20 = prom<V +>{
      fn8 = ld fn;
      fn9 = force? fn8;
      checkMissing(fn9);
      return fn9;
    };
    p21 = prom<V +>{
      srcfile12 = ld srcfile;
      srcfile13 = force? srcfile12;
      checkMissing(srcfile13);
      return srcfile13;
    };
    p22 = prom<V +>{
      line5 = ld line;
      line6 = force? line5;
      checkMissing(line6);
      return line6;
    };
    p23 = prom<V +>{
      nameonly3 = ld nameonly;
      nameonly4 = force? nameonly3;
      checkMissing(nameonly4);
      return nameonly4;
    };
    r148 = dyn fnLineNum1[, srcfile, line, nameonly](p20, p21, p22, p23);
    check L267() else D80();
  D80():
    deopt 327 [i78, i79, r148];
  L267():
    st loc = r148;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L268() else L269();
  L61(i92, i93, r150):
    c38 = `as.logical`(r150);
    if c38 then L271() else L62(i92, i93, c38);
  L268():
    loc4 = ld loc;
    check L270() else D81();
  L269():
    r149 = dyn base26(<sym loc>);
    goto L61(i78, i79, r149);
  D81():
    deopt 330 [i78, i79, loc4];
  L62(i96, i97, c40):
    c47 = `as.logical`(c40);
    if c47 then L278() else L64(i96, i97, c47);
  L270():
    loc5 = force? loc4;
    checkMissing(loc5);
    c37 = `==`(loc5, NULL);
    goto L61(i78, i79, c37);
  L271():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L272() else L273();
  L63(i102, i103, c43, r152):
    r156 = `>=`(r152, 2);
    c44 = `as.logical`(r156);
    c45 = `&&`(c43, c44);
    goto L62(i102, i103, c45);
  L64(i108, i109, c49):
    c61 = `as.logical`(c49);
    if c61 then L287() else L67(i108, i109, c61);
  L272():
    body = ldf body;
    check L274() else D82();
  L273():
    r151 = dyn base27(<lang `<-`(bf, body(fn))>);
    goto L63(i92, i93, c38, r151);
  L278():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L279() else L280();
  D82():
    deopt 336 [i92, i93, c38];
  L65(i114, i115, c52, r158):
    r161 = `>`(r158, 2);
    c58 = `as.logical`(r161);
    c59 = `&&`(c52, c58);
    goto L64(i114, i115, c59);
  L67(i128, i129, c63):
    c79 = `as.logical`(c63);
    if c79 then L299() else L71();
  L274():
    p24 = prom<V +>{
      fn10 = ld fn;
      fn11 = force? fn10;
      checkMissing(fn11);
      return fn11;
    };
    r154 = dyn body(p24);
    check L275() else D83();
  L279():
    bf = ld bf;
    check L281() else D85();
  L280():
    r157 = dyn base28(<lang `[[`(bf, 2)>);
    goto L65(i96, i97, c47, r157);
  L287():
    sym29 = ldf typeof;
    base29 = ldf typeof in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L288() else L289();
  D83():
    deopt 338 [i92, i93, c38, r154];
  D85():
    deopt 347 [i96, i97, c47, bf];
  L68(i134, i135, c66, r163):
    r169 = `==`(r163, "closure");
    c76 = `as.logical`(r169);
    c77 = `&&`(c66, c76);
    goto L67(i134, i135, c77);
  L71():
    goto L75(i128, i129);
  L75(i176, i177):
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L313() else L314();
  L275():
    st bf = r154;
    length4 = ldf length in base;
    r155 = dyn length4(r154);
    check L276() else D84();
  L281():
    bf1 = force? bf;
    checkMissing(bf1);
    c53 = `is.object`(bf1);
    if c53 then L282() else L283(i96, i97, c47, bf1);
  L288():
    bf4 = ld bf;
    check L290() else D87();
  L289():
    r162 = dyn base29(<lang `<-`(bf.i, `[[`(bf, `<-`(iloc, c(2, 3))))>);
    goto L68(i108, i109, c61, r162);
  L299():
    fnLineNum2 = ldf fnLineNum;
    check L300() else D90();
  D84():
    deopt 341 [i92, i93, c38, r155];
  D87():
    deopt 359 [i108, i109, c61, bf4];
  D90():
    deopt 376 [i128, i129];
  L66(i122, i123, c57, dx17):
    length5 = ldf length in base;
    r160 = dyn length5(dx17);
    check L285() else D86();
  L76(i182, i183, r180):
    r181 = `!`(r180);
    c84 = `as.logical`(r181);
    if c84 then L316() else L77();
  L276():
    goto L63(i92, i93, c38, r155);
  L282():
    dr16 = tryDispatchBuiltin.1("[[", bf1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L284() else L283(i96, i97, c47, dr16);
  L283(i118, i119, c55, bf3):
    __6 = ldf `[[` in base;
    r159 = dyn __6(bf3, 2);
    goto L66(i118, i119, c55, r159);
  L290():
    bf5 = force? bf4;
    checkMissing(bf5);
    c67 = `is.object`(bf5);
    if c67 then L291() else L292(i108, i109, c61, bf5);
  L300():
    p25 = prom<V +>{
      bf_i = ld `bf.i`;
      bf_i1 = force? bf_i;
      checkMissing(bf_i1);
      return bf_i1;
    };
    p26 = prom<V +>{
      srcfile14 = ld srcfile;
      srcfile15 = force? srcfile14;
      checkMissing(srcfile15);
      return srcfile15;
    };
    p27 = prom<V +>{
      line7 = ld line;
      line8 = force? line7;
      checkMissing(line8);
      return line8;
    };
    p28 = prom<V +>{
      nameonly5 = ld nameonly;
      nameonly6 = force? nameonly5;
      checkMissing(nameonly6);
      return nameonly6;
    };
    r174 = dyn fnLineNum2[, srcfile, line, nameonly](p25, p26, p27, p28);
    check L301() else D91();
  L313():
    loc8 = ld loc;
    check L315() else D94();
  L314():
    r179 = dyn base32(<sym loc>);
    goto L76(i176, i177, r179);
  D86():
    deopt 353 [i122, i123, c57, r160];
  D91():
    deopt 384 [i128, i129, r174];
  D94():
    deopt 401 [i176, i177, loc8];
  L69(i142, i143, c71, dx19):
    st `bf.i` = dx19;
    typeof1 = ldf typeof in base;
    r168 = dyn typeof1(dx19);
    check L297() else D89();
  L77():
    goto L83(i182, i183);
  L83(i226, i227):
    goto L56(i226, i227);
  L284():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L66(i96, i97, c47, dx16);
  L285():
    goto L65(i122, i123, c57, r160);
  L291():
    dr18 = tryDispatchBuiltin.1("[[", bf5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L293() else L292(i108, i109, c61, dr18);
  L292(i138, i139, c69, bf7):
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L294() else L295();
  L301():
    st loc = r174;
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L302() else L303();
  L315():
    loc9 = force? loc8;
    checkMissing(loc9);
    c83 = `==`(loc9, NULL);
    goto L76(i176, i177, c83);
  L316():
    count4 = ld count;
    check L317() else D95();
  D89():
    deopt 371 [i142, i143, c71, r168];
  D95():
    deopt 405 [i182, i183, count4];
  L70(i148, i149, c74, bf10, r165):
    st iloc = r165;
    __7 = ldf `[[` in base;
    r167 = dyn __7(bf10, r165);
    goto L69(i148, i149, c74, r167);
  L72(i160, i161, r176):
    r177 = `!`(r176);
    c81 = `as.logical`(r177);
    if c81 then L305() else L73();
  L293():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L69(i108, i109, c61, dx18);
  L294():
    c75 = ldf c in base;
    r166 = dyn c75(2, 3);
    check L296() else D88();
  L295():
    r164 = dyn base30(2, 3);
    goto L70(i138, i139, c69, bf7, r164);
  L297():
    goto L68(i142, i143, c71, r168);
  L302():
    loc6 = ld loc;
    check L304() else D92();
  L303():
    r175 = dyn base31(<sym loc>);
    goto L72(i128, i129, r175);
  L317():
    count5 = force? count4;
    checkMissing(count5);
    r182 = `+`(count5, 1);
    st count = r182;
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L318() else L319();
  D88():
    deopt 366 [i138, i139, c69, bf7, r166];
  D92():
    deopt 387 [i128, i129, loc6];
  L73():
    goto L74(i160, i161, NULL);
  L74(i174, i175, iloc6):
    goto L75(i174, i175);
  L78(i192, i193, r184):
    l13 = ld result;
    c88 = `is.object`(l13);
    if c88 then L336() else L337(i192, i193, r184, l13);
  L296():
    goto L70(i138, i139, c69, bf7, r166);
  L304():
    loc7 = force? loc6;
    checkMissing(loc7);
    c80 = `==`(loc7, NULL);
    goto L72(i128, i129, c80);
  L305():
    iloc = ld iloc;
    check L306() else D93();
  L318():
    sym34 = ldf list;
    base34 = ldf list in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L320() else L321();
  L319():
    r183 = dyn base33(<lang list(name=functionName, env=`[[`(envirs, i), signature=`[[`(strsplit(sig, "#"), 1))>, <sym loc>);
    goto L78(i182, i183, r183);
  D93():
    deopt 391 [i160, i161, iloc];
  L79(i198, i199, r186):
    loc10 = ld loc;
    check L334() else D102();
  L82(i224, i225, r198, dx27):
    st result = dx27;
    goto L83(i224, i225);
  L306():
    iloc1 = force? iloc;
    checkMissing(iloc1);
    l10 = ld loc;
    c82 = `is.object`(l10);
    if c82 then L308() else L309(i160, i161, iloc1, l10);
  L320():
    functionName6 = ld functionName;
    check L322() else D96();
  L321():
    r185 = dyn base34[name, env, signature](<sym functionName>, <lang `[[`(envirs, i)>, <lang `[[`(strsplit(sig, "#"), 1)>);
    goto L79(i182, i183, r185);
  L336():
    dr26 = tryDispatchBuiltin.0("[[<-", l13, r184);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L338() else L337(i192, i193, r184, dr26);
  L337(i220, i221, r196, l15):
    count6 = ld count;
    check L339() else D104();
  D96():
    deopt 414 [i182, i183, functionName6];
  D102():
    deopt 434 [i198, i199, loc10];
  D104():
    deopt 439 [i220, i221, r196, l15, r184, count6];
  L307(i172, i173, iloc5, dx21):
    st loc = dx21;
    goto L74(i172, i173, iloc5);
  L308():
    dr20 = tryDispatchBuiltin.0("$<-", l10, iloc1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L310() else L309(i160, i161, iloc1, dr20);
  L309(i168, i169, iloc3, l12):
    r178 = `$<-`(l12, <sym at>, iloc1);
    goto L307(i168, i169, iloc3, r178);
  L322():
    functionName7 = force? functionName6;
    checkMissing(functionName7);
    envirs18 = ld envirs;
    check L323() else D97();
  L334():
    loc11 = force? loc10;
    checkMissing(loc11);
    c87 = ldf c in base;
    r194 = dyn c87(r186, loc11);
    check L335() else D103();
  L338():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L82(i192, i193, r184, dx26);
  L339():
    count7 = force? count6;
    ____2 = ldf `[[<-` in base;
    r199 = dyn ____2(l15, r184, count7);
    goto L82(i220, i221, r196, r199);
  D97():
    deopt 417 [i182, i183, envirs18];
  D103():
    deopt 437 [i198, i199, r194];
  L310():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L307(i160, i161, iloc1, dx20);
  L323():
    envirs19 = force? envirs18;
    checkMissing(envirs19);
    c85 = `is.object`(envirs19);
    if c85 then L324() else L325(i182, i183, envirs19);
  L335():
    goto L78(i198, i199, r194);
  L80(i206, i207, dx23):
    strsplit = ldf strsplit;
    check L328() else D99();
  L324():
    dr22 = tryDispatchBuiltin.1("[[", envirs19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L326() else L325(i182, i183, dr22);
  L325(i202, i203, envirs21):
    i208 = ld i;
    check L327() else D98();
  D98():
    deopt 419 [i202, i203, envirs21, i208];
  D99():
    deopt 424 [i206, i207];
  L326():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L80(i182, i183, dx22);
  L327():
    i209 = force? i208;
    __8 = ldf `[[` in base;
    r187 = dyn __8(envirs21, i209);
    goto L80(i202, i203, r187);
  L328():
    p29 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    r189 = dyn strsplit(p29, "#");
    check L329() else D100();
  D100():
    deopt 427 [i206, i207, r189];
  L329():
    c86 = `is.object`(r189);
    if c86 then L330() else L331(i206, i207, r189);
  L81(i216, i217, dx25):
    list3 = ldf list in base;
    r193 = dyn list3(functionName7, dx23, dx25);
    check L333() else D101();
  L330():
    dr24 = tryDispatchBuiltin.1("[[", r189);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L332() else L331(i206, i207, dr24);
  L331(i212, i213, r191):
    __9 = ldf `[[` in base;
    r192 = dyn __9(r191, 1);
    goto L81(i212, i213, r192);
  D101():
    deopt 433 [i216, i217, r193];
  L332():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L81(i206, i207, dx24);
  L333():
    goto L79(i216, i217, r193);
  }
}