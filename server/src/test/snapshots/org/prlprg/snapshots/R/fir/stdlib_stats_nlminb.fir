fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1116164296;
    st nlminb = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1116164296(start, objective, gradient, hessian, `...`, scale, control, lower, upper) {
  (reg start:*, reg objective:*, reg gradient:*, reg hessian:*, reg ddd:dots, reg scale:*, reg control:*, reg lower:*, reg upper:*) -+> V { var start:*, var objective:*, var gradient:*, reg gradient_isMissing:L, reg gradient_orDefault:*, var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, var `...`:dots?, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, reg p1:p(V +), var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg setNames:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg start1:*, reg start2:V, reg as_double:cls, reg r7:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg start3:*, reg start4:V, reg names:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg par:*, reg par1:V, reg length:cls, reg r16:V, reg integer:cls, reg n:*, reg n1:V, reg r17:V, reg r18:V, reg p4:p(V +), reg r20:V, reg double:cls, reg n2:*, reg n3:V, reg n4:*, reg n5:V, reg r21:V, reg r22:V, reg r23:V, reg r24:V, reg p5:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg C_port_ivset:*, reg C_port_ivset1:V, reg iv:*, reg iv1:V, reg v:*, reg v1:V, reg vargs:dots, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg control1:*, reg control2:V, reg length1:cls, reg r32:V, reg c:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg control3:*, reg control4:V, reg names1:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg control5:*, reg control6:V, reg is_list:cls, reg r38:V, reg r39:V, reg c1:L, reg c2:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg c6:L, reg r41:V, reg nms:*, reg nms1:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg stop:cls, reg r42:V, reg pmatch:cls, reg nms2:*, reg nms3:V, reg p6:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg port_cpos:*, reg port_cpos1:V, reg names2:cls, reg r47:V, reg p7:p(V +), reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r54:V, reg any:cls, reg r55:V, reg c12:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg nap:*, reg nap1:V, reg length2:cls, reg r58:V, reg p8:p(V +), reg r60:V, reg p9:p(V +), reg paste:cls, reg sQuote:cls, reg nms4:*, reg nms5:V, reg c13:L, reg nms7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nap2:*, reg nap3:V, reg __:cls, reg r62:V, reg p10:p(V +), reg r64:V, reg p11:p(V +), reg r66:V, reg p12:p(V +), reg r68:V, reg p13:p(V +), reg r70:V, reg pos2:*, reg pos3:V, reg c14:L, reg pos5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nap4:*, reg nap5:V, reg r71:V, reg __1:cls, reg r72:V, reg control7:*, reg control8:V, reg c15:L, reg control10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nap6:*, reg nap7:V, reg r73:V, reg __2:cls, reg r74:V, reg pos6:*, reg pos7:V, reg r75:V, reg ivpars:*, reg ivpars1:V, reg r76:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg r78:V, reg ivpars2:*, reg ivpars3:V, reg any1:cls, reg r79:V, reg c16:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r80:V, reg r81:V, reg unlist:cls, reg control11:*, reg control12:V, reg c17:L, reg control14:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg ivpars4:*, reg ivpars5:V, reg __3:cls, reg r82:V, reg p14:p(V +), reg r84:V, reg as_integer:cls, reg r85:V, reg l:*, reg c18:L, reg r87:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r89:V, reg dx10:V, reg port_cpos2:*, reg port_cpos3:V, reg c19:L, reg r92:V, reg l4:*, reg r93:V, reg port_cpos5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg r96:V, reg l6:*, reg r97:V, reg dx12:V, reg pos8:*, reg pos9:V, reg c20:L, reg r100:V, reg l8:*, reg r101:V, reg port_cpos7:V, reg pos11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg r104:V, reg l10:*, reg r105:V, reg port_cpos9:V, reg dx14:V, reg ivpars6:*, reg ivpars7:V, reg __4:cls, reg r106:V, reg __5:cls, reg r107:V, reg ___:cls, reg r108:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r110:V, reg r111:V, reg vpars:*, reg vpars1:V, reg any2:cls, reg r112:V, reg c21:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r113:V, reg r114:V, reg unlist1:cls, reg control15:*, reg control16:V, reg c22:L, reg control18:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg vpars2:*, reg vpars3:V, reg __6:cls, reg r115:V, reg p15:p(V +), reg r117:V, reg as_double1:cls, reg r118:V, reg l11:*, reg c23:L, reg r120:V, reg l13:*, reg dr16:V, reg dc8:L, reg dx17:V, reg r122:V, reg dx18:V, reg port_cpos10:*, reg port_cpos11:V, reg c24:L, reg r125:V, reg l15:*, reg r126:V, reg port_cpos13:V, reg dr18:V, reg dc9:L, reg dx19:V, reg r129:V, reg l17:*, reg r130:V, reg dx20:V, reg pos12:*, reg pos13:V, reg c25:L, reg r133:V, reg l19:*, reg r134:V, reg port_cpos15:V, reg pos15:V, reg dr20:V, reg dc10:L, reg dx21:V, reg r137:V, reg l21:*, reg r138:V, reg port_cpos17:V, reg dx22:V, reg vpars4:*, reg vpars5:V, reg __7:cls, reg r139:V, reg __8:cls, reg r140:V, reg ___1:cls, reg r141:V, reg r142:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r144:V, reg r145:V, reg quote:cls, reg r146:V, reg new_env:cls, reg environment:cls, reg r147:V, reg p16:p(V +), reg r149:V, reg assign:cls, reg par2:*, reg par3:V, reg p17:p(V +), reg rho:*, reg rho1:V, reg p18:p(V +), reg r152:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r153:V, reg r154:V, reg gradient1:*, reg gradient2:V, reg c26:V, reg r155:V, reg c27:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r156:V, reg r157:V, reg quote1:cls, reg r158:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r159:V, reg r160:V, reg hessian1:*, reg hessian2:V, reg c28:V, reg r161:V, reg c29:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r162:V, reg r163:V, reg hessian3:*, reg hessian4:V, reg c30:L, reg c31:L, reg stop1:cls, reg r164:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r166:V, reg r167:V, reg quote2:cls, reg r168:V, reg r169:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r171:V, reg r172:V, reg lower1:*, reg lower2:V, reg r173:V, reg any3:cls, reg r174:V, reg c32:L, reg c33:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r175:V, reg c37:L, reg r176:V, reg upper1:*, reg upper2:V, reg r177:V, reg any4:cls, reg r178:V, reg c38:L, reg c39:V, reg c41:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r179:V, reg r180:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r181:V, reg r182:V, reg lower3:*, reg lower4:V, reg as_double2:cls, reg r183:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r184:V, reg r185:V, reg par4:*, reg par5:V, reg length3:cls, reg r186:V, reg rep_len:cls, reg r187:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r188:V, reg r189:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r190:V, reg r191:V, reg upper3:*, reg upper4:V, reg as_double3:cls, reg r192:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r193:V, reg r194:V, reg par6:*, reg par7:V, reg length4:cls, reg r195:V, reg rep_len1:cls, reg r196:V, reg numeric:cls, reg r198:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r199:V, reg C_port_nlminb:*, reg C_port_nlminb1:V, reg obj:*, reg obj1:V, reg grad:*, reg grad1:V, reg hess:*, reg hess1:V, reg rho2:*, reg rho3:V, reg low:*, reg low1:V, reg upp:*, reg upp1:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r201:V, reg r202:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r203:V, reg r204:V, reg scale1:*, reg scale2:V, reg as_double4:cls, reg r205:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r206:V, reg r207:V, reg par8:*, reg par9:V, reg length5:cls, reg r208:V, reg rep_len2:cls, reg r209:V, reg iv2:*, reg iv3:V, reg v2:*, reg v3:V, reg _Call:cls, reg r210:V, reg iv4:*, reg iv5:V, reg c42:L, reg iv7:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg __9:cls, reg r211:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r212:V, reg r213:V, reg get:cls, reg rho4:*, reg rho5:V, reg p19:p(V +), reg r215:V, reg v4:*, reg v5:V, reg c43:L, reg v7:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg __10:cls, reg r216:V, reg _in_:cls, reg iv8:*, reg iv9:V, reg p20:p(V +), reg p21:p(V +), reg r219:V, reg c44:L, reg r220:I, reg iv10:*, reg iv11:V, reg c45:L, reg iv13:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg __11:cls, reg r221:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r222:V, reg r223:V, reg iv14:*, reg iv15:V, reg c46:L, reg iv17:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg __12:cls, reg r224:V, reg iv18:*, reg iv19:V, reg c47:L, reg iv21:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg __13:cls, reg r225:V, reg c48:cls, reg r226:V, reg iv22:*, reg iv23:V, reg r227:V, reg c49:L, reg c51:V, reg iv24:*, reg iv25:V, reg r228:V, reg c52:L, reg c53:V, reg c55:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r229:V, reg r230:V, reg iv26:*, reg iv27:V, reg port_cpos18:*, reg port_cpos19:V, reg r231:V, reg any5:cls, reg r232:V, reg c56:L, reg sprintf1:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r233:V, reg r234:V, reg port_cpos20:*, reg port_cpos21:V, reg names3:cls, reg r235:V, reg c57:L, reg r237:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg B:*, reg B1:V, reg __14:cls, reg r238:V, reg p22:p(V +), reg v8:*, reg v9:V, reg c58:L, reg v11:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg iv28:*, reg iv29:V, reg __15:cls, reg r240:V, reg p23:p(V +), reg r242:V, reg r243:V, reg sprintf2:cls, reg iv30:*, reg iv31:V, reg p24:p(V +), reg v12:*, reg v13:V, reg c59:L, reg v15:V, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg iv32:*, reg iv33:V, reg __16:cls, reg r245:V, reg p25:p(V +), reg r247:V, reg r248:V, reg port_msg:cls, reg iv34:*, reg iv35:V, reg p26:p(V +), reg r250:V, reg list1:cls, reg r251:V |
    mkenv;
    st start = start;
    st objective = objective;
    gradient_isMissing = missing.0(gradient);
    if gradient_isMissing then L0(NULL) else L0(gradient);
  L0(gradient_orDefault):
    st gradient = gradient_orDefault;
    hessian_isMissing = missing.0(hessian);
    if hessian_isMissing then L1(NULL) else L1(hessian);
  L1(hessian_orDefault):
    st hessian = hessian_orDefault;
    st `...` = ddd;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L2(1.0) else L2(scale);
  L2(scale_orDefault):
    st scale = scale_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L3() else L4(control);
  L3():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L4(p);
  L4(control_orDefault):
    st control = control_orDefault;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L5() else L6(lower);
  L5():
    p1 = prom<V +>{
      return -Infinity;
    };
    goto L6(p1);
  L6(lower_orDefault):
    st lower = lower_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L7(+Infinity) else L7(upper);
  L7(upper_orDefault):
    st upper = upper_orDefault;
    setNames = ldf setNames;
    check L81() else D0();
  D0():
    deopt 1 [];
  L81():
    p2 = prom<V +>{
      sym1 = ldf `as.double`;
      base1 = ldf `as.double` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      as_double = ldf `as.double` in base;
      r7 = dyn as_double(start2);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym start>);
      goto L0(r5);
    };
    p3 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      start3 = ld start;
      start4 = force? start3;
      checkMissing(start4);
      names = ldf names in base;
      r11 = dyn names(start4);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym start>);
      goto L0(r9);
    };
    r13 = dyn setNames(p2, p3);
    check L82() else D1();
  D1():
    deopt 4 [r13];
  L82():
    st par = r13;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L8(r15):
    st n = r15;
    integer = ldf integer;
    check L87() else D4();
  L83():
    par = ld par;
    check L85() else D2();
  L84():
    r14 = dyn base3(<sym par>);
    goto L8(r14);
  D2():
    deopt 8 [par];
  D4():
    deopt 14 [];
  L85():
    par1 = force? par;
    checkMissing(par1);
    length = ldf length in base;
    r16 = dyn length(par1);
    check L86() else D3();
  L87():
    p4 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r17 = `*`(3.0, n1);
      r18 = `+`(78.0, r17);
      return r18;
    };
    r20 = dyn integer(p4);
    check L88() else D5();
  D3():
    deopt 11 [r16];
  D5():
    deopt 16 [r20];
  L86():
    goto L8(r16);
  L88():
    st iv = r20;
    double = ldf double;
    check L89() else D6();
  D6():
    deopt 19 [];
  L89():
    p5 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r21 = `+`(n5, 27.0);
      r22 = `*`(n3, r21);
      r23 = `/`(r22, 2.0);
      r24 = `+`(130.0, r23);
      return r24;
    };
    r26 = dyn double(p5);
    check L90() else D7();
  D7():
    deopt 21 [r26];
  L90():
    st v = r26;
    sym4 = ldf `.Call`;
    base4 = ldf `.Call` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L9():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  L91():
    C_port_ivset = ld C_port_ivset;
    check L93() else D8();
  L92():
    r27 = dyn base4(<sym C_port_ivset>, 2.0, <sym iv>, <sym v>);
    goto L9();
  D8():
    deopt 24 [C_port_ivset];
  L10(r31):
    c = `as.logical`(r31);
    if c then L100() else L11();
  L93():
    C_port_ivset1 = force? C_port_ivset;
    checkMissing(C_port_ivset1);
    iv = ld iv;
    check L94() else D9();
  L96():
    control1 = ld control;
    check L98() else D11();
  L97():
    r30 = dyn base5(<sym control>);
    goto L10(r30);
  D9():
    deopt 26 [C_port_ivset1, 2.0, iv];
  D11():
    deopt 32 [control1];
  L11():
    goto L38();
  L38():
    sym17 = ldf quote;
    base17 = ldf quote in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L190() else L191();
  L94():
    iv1 = force? iv;
    checkMissing(iv1);
    v = ld v;
    check L95() else D10();
  L98():
    control2 = force? control1;
    checkMissing(control2);
    length1 = ldf length in base;
    r32 = dyn length1(control2);
    check L99() else D12();
  L100():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  D10():
    deopt 27 [C_port_ivset1, 2.0, iv1, v];
  D12():
    deopt 35 [r32];
  L12(r34):
    st nms = r34;
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L39(r145):
    st obj = r145;
    new_env = ldf `new.env`;
    check L192() else D49();
  L95():
    v1 = force? v;
    checkMissing(v1);
    vargs = dots[2.0, iv1, v1];
    r29 = `.Call`(C_port_ivset1, vargs, <missing>);
    goto L9();
  L99():
    goto L10(r32);
  L101():
    control3 = ld control;
    check L103() else D13();
  L102():
    r33 = dyn base6(<sym control>);
    goto L12(r33);
  L190():
    quote = ldf quote in base;
    r146 = dyn quote(<lang objective(.par, ...)>);
    goto L39(r146);
  L191():
    r144 = dyn base17(<lang objective(.par, ...)>);
    goto L39(r144);
  D13():
    deopt 38 [control3];
  D49():
    deopt 170 [];
  L13(r37):
    r39 = `!`(r37);
    c1 = `as.logical`(r39);
    if c1 then L14(c1) else L109();
  L103():
    control4 = force? control3;
    checkMissing(control4);
    names1 = ldf names in base;
    r35 = dyn names1(control4);
    check L104() else D14();
  L105():
    control5 = ld control;
    check L107() else D15();
  L106():
    r36 = dyn base7(<sym control>);
    goto L13(r36);
  L192():
    p16 = prom<V +>{
      environment = ldf environment;
      r147 = dyn environment();
      return r147;
    };
    r149 = dyn new_env[parent](p16);
    check L193() else D50();
  D14():
    deopt 41 [r35];
  D15():
    deopt 45 [control5];
  D50():
    deopt 173 [r149];
  L14(c2):
    c11 = `as.logical`(c2);
    if c11 then L114() else L16();
  L104():
    goto L12(r35);
  L107():
    control6 = force? control5;
    checkMissing(control6);
    is_list = ldf `is.list` in base;
    r38 = dyn is_list(control6);
    check L108() else D16();
  L109():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L193():
    st rho = r149;
    assign = ldf assign;
    check L194() else D51();
  D16():
    deopt 48 [r38];
  D51():
    deopt 176 [];
  L15(c6, r41):
    c8 = `as.logical`(r41);
    c9 = `||`(c6, c8);
    goto L14(c9);
  L16():
    goto L17();
  L17():
    pmatch = ldf pmatch;
    check L118() else D20();
  L108():
    goto L13(r38);
  L110():
    nms = ld nms;
    check L112() else D17();
  L111():
    r40 = dyn base8(<sym nms>);
    goto L15(c1, r40);
  L114():
    stop = ldf stop;
    check L115() else D18();
  L194():
    p17 = prom<V +>{
      par2 = ld par;
      par3 = force? par2;
      checkMissing(par3);
      return par3;
    };
    p18 = prom<V +>{
      rho = ld rho;
      rho1 = force? rho;
      checkMissing(rho1);
      return rho1;
    };
    r152 = dyn assign[, , envir](".par", p17, p18);
    check L195() else D52();
  D17():
    deopt 51 [c1, nms];
  D18():
    deopt 56 [];
  D20():
    deopt 62 [];
  D52():
    deopt 181 [r152];
  L112():
    nms1 = force? nms;
    checkMissing(nms1);
    c7 = `==`(nms1, NULL);
    goto L15(c1, c7);
  L115():
    r42 = dyn stop("'control' argument must be a named list");
    check L116() else D19();
  L118():
    p6 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    p7 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      port_cpos = ld port_cpos;
      port_cpos1 = force? port_cpos;
      checkMissing(port_cpos1);
      names2 = ldf names in base;
      r47 = dyn names2(port_cpos1);
      goto L0(r47);
    L2():
      r45 = dyn base9(<sym port_cpos>);
      goto L0(r45);
    };
    r49 = dyn pmatch(p6, p7);
    check L119() else D21();
  L195():
    st upp = NULL;
    st low = NULL;
    st hess = NULL;
    st grad = NULL;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L196() else L197();
  D19():
    deopt 58 [r42];
  D21():
    deopt 65 [r49];
  L40(r154):
    r155 = `!`(r154);
    c27 = `as.logical`(r155);
    if c27 then L199() else L41();
  L116():
    goto L17();
  L119():
    st pos = r49;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L120() else L121();
  L196():
    gradient1 = ld gradient;
    check L198() else D53();
  L197():
    r153 = dyn base18(<sym gradient>);
    goto L40(r153);
  D53():
    deopt 189 [gradient1];
  L18(r51):
    c12 = `as.logical`(r51);
    if c12 then L127() else L20();
  L41():
    goto L50();
  L50():
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L217() else L218();
  L120():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L121():
    r50 = dyn base10(<lang `<-`(nap, is.na(pos))>);
    goto L18(r50);
  L198():
    gradient2 = force? gradient1;
    checkMissing(gradient2);
    c26 = `==`(gradient2, NULL);
    goto L40(c26);
  L199():
    sym19 = ldf quote;
    base19 = ldf quote in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L200() else L201();
  L19(r53):
    st nap = r53;
    any = ldf any in base;
    r55 = dyn any(r53);
    check L126() else D24();
  L20():
    goto L23();
  L23():
    pos6 = ld pos;
    check L141() else D31();
  L42(r157):
    st grad = r157;
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L202() else L203();
  L51(r172):
    c32 = `as.logical`(r172);
    if c32 then L52(c32) else L221();
  L122():
    pos = ld pos;
    check L124() else D22();
  L123():
    r52 = dyn base11(<sym pos>);
    goto L19(r52);
  L127():
    warning = ldf warning;
    check L128() else D25();
  L200():
    quote1 = ldf quote in base;
    r158 = dyn quote1(<lang gradient(.par, ...)>);
    goto L42(r158);
  L201():
    r156 = dyn base19(<lang gradient(.par, ...)>);
    goto L42(r156);
  L217():
    lower1 = ld lower;
    check L219() else D58();
  L218():
    r171 = dyn base23(<lang `!=`(lower, `-`(+Infinity))>);
    goto L51(r171);
  D22():
    deopt 71 [pos];
  D24():
    deopt 77 [r55];
  D25():
    deopt 79 [];
  D31():
    deopt 100 [pos6];
  D58():
    deopt 222 [lower1];
  L43(r160):
    r161 = `!`(r160);
    c29 = `as.logical`(r161);
    if c29 then L205() else L44();
  L52(c33):
    c41 = `as.logical`(c33);
    if c41 then L227() else L54();
  L124():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r54 = dyn is_na(pos1);
    check L125() else D23();
  L126():
    goto L18(r55);
  L128():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        ngettext = ldf ngettext;
        p8 = prom<V +>{
          sym12 = ldf length;
          base12 = ldf length in base;
          guard12 = `==`.4(sym12, base12);
          if guard12 then L1() else L2();
        L0(r57):
          return r57;
        L1():
          nap = ld nap;
          nap1 = force? nap;
          checkMissing(nap1);
          length2 = ldf length in base;
          r58 = dyn length2(nap1);
          goto L0(r58);
        L2():
          r56 = dyn base12(<sym nap>);
          goto L0(r56);
        };
        r60 = dyn ngettext(p8, "unrecognized control element named %s ignored", "unrecognized control elements named %s ignored");
        return r60;
      };
      p12 = prom<V +>{
        paste = ldf paste;
        p11 = prom<V +>{
          sQuote = ldf sQuote;
          p10 = prom<V +>{
            nms4 = ld nms;
            nms5 = force? nms4;
            checkMissing(nms5);
            c13 = `is.object`(nms5);
            if c13 then L1() else L2(nms5);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", nms5);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(nms7):
            nap2 = ld nap;
            nap3 = force? nap2;
            __ = ldf `[` in base;
            r62 = dyn __(nms7, nap3);
            goto L0(r62);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r64 = dyn sQuote(p10);
          return r64;
        };
        r66 = dyn paste[, collapse](p11, ", ");
        return r66;
      };
      r68 = dyn sprintf(p9, p12);
      return r68;
    };
    r70 = dyn warning[, domain](p13, NA_LGL);
    check L129() else D26();
  L141():
    pos7 = force? pos6;
    checkMissing(pos7);
    r75 = `<=`(pos7, 4.0);
    st ivpars = r75;
    ivpars = ld ivpars;
    check L142() else D32();
  L202():
    hessian1 = ld hessian;
    check L204() else D54();
  L203():
    r159 = dyn base20(<sym hessian>);
    goto L43(r159);
  L219():
    lower2 = force? lower1;
    checkMissing(lower2);
    r173 = `!=`(lower2, -Infinity);
    any3 = ldf any in base;
    r174 = dyn any3(r173);
    check L220() else D59();
  L221():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L222() else L223();
  D23():
    deopt 74 [r54];
  D26():
    deopt 83 [r70];
  D32():
    deopt 105 [ivpars];
  D54():
    deopt 198 [hessian1];
  D59():
    deopt 227 [r174];
  L44():
    goto L49(NULL);
  L49(r169):
    goto L50();
  L53(c37, r176):
    c38 = `as.logical`(r176);
    c39 = `||`(c37, c38);
    goto L52(c39);
  L54():
    numeric = ldf numeric;
    check L251() else D72();
  L61():
    sym31 = ldf `.Call`;
    base31 = ldf `.Call` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L253() else L254();
  L125():
    goto L19(r54);
  L129():
    pos2 = ld pos;
    check L130() else D27();
  L142():
    ivpars1 = force? ivpars;
    checkMissing(ivpars1);
    r76 = `!`(ivpars1);
    st vpars = r76;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L143() else L144();
  L204():
    hessian2 = force? hessian1;
    checkMissing(hessian2);
    c28 = `==`(hessian2, NULL);
    goto L43(c28);
  L205():
    sym21 = ldf `is.logical`;
    base21 = ldf `is.logical` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L206() else L207();
  L220():
    goto L51(r174);
  L222():
    upper1 = ld upper;
    check L224() else D60();
  L223():
    r175 = dyn base24(<lang `!=`(upper, +Infinity)>);
    goto L53(c32, r175);
  L227():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L228() else L229();
  D27():
    deopt 84 [pos2];
  D60():
    deopt 230 [c32, upper1];
  D72():
    deopt 272 [];
  L24(r78):
    c16 = `as.logical`(r78);
    if c16 then L147() else L25();
  L45(r163):
    c31 = `as.logical`(r163);
    if c31 then L209() else L46();
  L55(r180):
    st low = r180;
    sym28 = ldf rep_len;
    base28 = ldf rep_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L239() else L240();
  L62():
    iv4 = ld iv;
    check L276() else D89();
  L130():
    pos3 = force? pos2;
    checkMissing(pos3);
    c14 = `is.object`(pos3);
    if c14 then L131() else L132(pos3);
  L143():
    ivpars2 = ld ivpars;
    check L145() else D33();
  L144():
    r77 = dyn base13(<sym ivpars>);
    goto L24(r77);
  L206():
    hessian3 = ld hessian;
    check L208() else D55();
  L207():
    r162 = dyn base21(<sym hessian>);
    goto L45(r162);
  L224():
    upper2 = force? upper1;
    checkMissing(upper2);
    r177 = `!=`(upper2, +Infinity);
    any4 = ldf any in base;
    r178 = dyn any4(r177);
    check L225() else D61();
  L228():
    sym26 = ldf `as.double`;
    base26 = ldf `as.double` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L230() else L231();
  L229():
    r179 = dyn base25(<lang as.double(lower)>, <lang length(par)>);
    goto L55(r179);
  L251():
    r198 = dyn numeric();
    check L252() else D73();
  L253():
    C_port_nlminb = ld C_port_nlminb;
    check L255() else D74();
  L254():
    r199 = dyn base31[, , , , , , , d, , ](<sym C_port_nlminb>, <sym obj>, <sym grad>, <sym hess>, <sym rho>, <sym low>, <sym upp>, <lang rep_len(as.double(scale), length(par))>, <sym iv>, <sym v>);
    goto L62();
  D33():
    deopt 111 [ivpars2];
  D55():
    deopt 203 [hessian3];
  D61():
    deopt 235 [c32, r178];
  D73():
    deopt 273 [r198];
  D74():
    deopt 278 [C_port_nlminb];
  D89():
    deopt 315 [iv4];
  L21(dx3):
    st pos = dx3;
    control7 = ld control;
    check L135() else D29();
  L25():
    goto L30();
  L30():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L166() else L167();
  L46():
    goto L47();
  L47():
    sym22 = ldf quote;
    base22 = ldf quote in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L213() else L214();
  L56(r182):
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L234() else L235();
  L58(r189):
    st upp = r189;
    goto L61();
  L131():
    dr2 = tryDispatchBuiltin.1("[", pos3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132(dr2);
  L132(pos5):
    nap4 = ld nap;
    check L134() else D28();
  L145():
    ivpars3 = force? ivpars2;
    checkMissing(ivpars3);
    any1 = ldf any in base;
    r79 = dyn any1(ivpars3);
    check L146() else D34();
  L147():
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L148() else L149();
  L208():
    hessian4 = force? hessian3;
    checkMissing(hessian4);
    c30 = `is.logical`(hessian4);
    goto L45(c30);
  L209():
    stop1 = ldf stop;
    check L210() else D56();
  L225():
    goto L53(c32, r178);
  L230():
    lower3 = ld lower;
    check L232() else D62();
  L231():
    r181 = dyn base26(<sym lower>);
    goto L56(r181);
  L239():
    sym29 = ldf `as.double`;
    base29 = ldf `as.double` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L241() else L242();
  L240():
    r188 = dyn base28(<lang as.double(upper)>, <lang length(par)>);
    goto L58(r188);
  L252():
    st upp = r198;
    st low = r198;
    goto L61();
  L255():
    C_port_nlminb1 = force? C_port_nlminb;
    checkMissing(C_port_nlminb1);
    obj = ld obj;
    check L256() else D75();
  L276():
    iv5 = force? iv4;
    checkMissing(iv5);
    c42 = `is.object`(iv5);
    if c42 then L277() else L278(iv5);
  D28():
    deopt 86 [pos5, nap4];
  D29():
    deopt 91 [control7];
  D34():
    deopt 114 [r79];
  D56():
    deopt 207 [];
  D62():
    deopt 241 [lower3];
  D75():
    deopt 280 [obj];
  L26(r81):
    l = ld iv;
    c18 = `is.object`(l);
    if c18 then L153() else L154(r81, l);
  L31(r111):
    c21 = `as.logical`(r111);
    if c21 then L170() else L32();
  L48(r167):
    st hess = r167;
    goto L49(r167);
  L57(r185):
    rep_len = ldf rep_len in base;
    r187 = dyn rep_len(r182, r185);
    check L238() else D66();
  L59(r191):
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L245() else L246();
  L66(dx24):
    st iv1 = dx24;
    sym35 = ldf list;
    base35 = ldf list in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L280() else L281();
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L134():
    nap5 = force? nap4;
    checkMissing(nap5);
    r71 = `!`(nap5);
    __1 = ldf `[` in base;
    r72 = dyn __1(pos5, r71);
    goto L21(r72);
  L135():
    control8 = force? control7;
    checkMissing(control8);
    c15 = `is.object`(control8);
    if c15 then L136() else L137(control8);
  L146():
    goto L24(r79);
  L148():
    unlist = ldf unlist;
    check L150() else D35();
  L149():
    r80 = dyn base14(<lang unlist(`[`(control, ivpars))>);
    goto L26(r80);
  L166():
    vpars = ld vpars;
    check L168() else D41();
  L167():
    r110 = dyn base15(<sym vpars>);
    goto L31(r110);
  L210():
    r164 = dyn stop1("logical 'hessian' argument not allowed.  See documentation.");
    check L211() else D57();
  L213():
    quote2 = ldf quote in base;
    r168 = dyn quote2(<lang hessian(.par, ...)>);
    goto L48(r168);
  L214():
    r166 = dyn base22(<lang hessian(.par, ...)>);
    goto L48(r166);
  L232():
    lower4 = force? lower3;
    checkMissing(lower4);
    as_double2 = ldf `as.double` in base;
    r183 = dyn as_double2(lower4);
    check L233() else D63();
  L234():
    par4 = ld par;
    check L236() else D64();
  L235():
    r184 = dyn base27(<sym par>);
    goto L57(r184);
  L241():
    upper3 = ld upper;
    check L243() else D67();
  L242():
    r190 = dyn base29(<sym upper>);
    goto L59(r190);
  L256():
    obj1 = force? obj;
    checkMissing(obj1);
    grad = ld grad;
    check L257() else D76();
  L277():
    dr22 = tryDispatchBuiltin.1("[", iv5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L279() else L278(dr22);
  L278(iv7):
    __9 = ldf `[` in base;
    r211 = dyn __9(iv7, 1);
    goto L66(r211);
  D35():
    deopt 118 [];
  D41():
    deopt 138 [vpars];
  D57():
    deopt 209 [r164];
  D63():
    deopt 244 [r183];
  D64():
    deopt 247 [par4];
  D66():
    deopt 252 [r187];
  D67():
    deopt 258 [upper3];
  D76():
    deopt 282 [grad];
  L22(dx5):
    st control = dx5;
    goto L23();
  L27(r89, dx10):
    st iv = dx10;
    goto L30();
  L32():
    goto L37(NULL);
  L37(r142):
    goto L38();
  L60(r194):
    rep_len1 = ldf rep_len in base;
    r196 = dyn rep_len1(r191, r194);
    check L249() else D71();
  L67(r213):
    popenv;
    return r213;
  L136():
    dr4 = tryDispatchBuiltin.1("[", control8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L138() else L137(dr4);
  L137(control10):
    nap6 = ld nap;
    check L139() else D30();
  L150():
    p14 = prom<V +>{
      control11 = ld control;
      control12 = force? control11;
      checkMissing(control12);
      c17 = `is.object`(control12);
      if c17 then L1() else L2(control12);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[", control12);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(control14):
      ivpars4 = ld ivpars;
      ivpars5 = force? ivpars4;
      __3 = ldf `[` in base;
      r82 = dyn __3(control14, ivpars5);
      goto L0(r82);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r84 = dyn unlist(p14);
    check L151() else D36();
  L153():
    dr8 = tryDispatchBuiltin.0("[<-", l, r81);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L155() else L154(r81, dr8);
  L154(r87, l2):
    port_cpos2 = ld port_cpos;
    check L156() else D38();
  L168():
    vpars1 = force? vpars;
    checkMissing(vpars1);
    any2 = ldf any in base;
    r112 = dyn any2(vpars1);
    check L169() else D42();
  L170():
    sym16 = ldf `as.double`;
    base16 = ldf `as.double` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L171() else L172();
  L211():
    goto L47();
  L233():
    goto L56(r183);
  L236():
    par5 = force? par4;
    checkMissing(par5);
    length3 = ldf length in base;
    r186 = dyn length3(par5);
    check L237() else D65();
  L238():
    goto L55(r187);
  L243():
    upper4 = force? upper3;
    checkMissing(upper4);
    as_double3 = ldf `as.double` in base;
    r192 = dyn as_double3(upper4);
    check L244() else D68();
  L245():
    par6 = ld par;
    check L247() else D69();
  L246():
    r193 = dyn base30(<sym par>);
    goto L60(r193);
  L257():
    grad1 = force? grad;
    checkMissing(grad1);
    hess = ld hess;
    check L258() else D77();
  L279():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L66(dx23);
  L280():
    get = ldf get;
    check L282() else D90();
  L281():
    r212 = dyn base35[par, objective, convergence, iterations, evaluations, message](<lang get(".par", envir=rho)>, <lang `[`(v, 10)>, <lang `(`(if(`%in%`(iv1, `:`(3, 6)), 0, 1))>, <lang `[`(iv, 31)>, <lang c(function=`[`(iv, 6), gradient=`[`(iv, 30))>, <lang if(`&&`(`<=`(19.0, iv1), `<=`(iv1, 43.0)), {
        if(any(`<-`(B, `==`(iv1, port_cpos))), sprintf("'control' component '%s' = %g, is out of range", `[`(names(port_cpos), B), `[`(v, iv1)), sprintf("V[IV[1]] = V[%d] = %g is out of range (see PORT docu.)", iv1, `[`(v, iv1)))
      }, port_msg(iv1))>);
    goto L67(r212);
  D30():
    deopt 93 [control10, nap6];
  D36():
    deopt 120 [r84];
  D38():
    deopt 124 [r87, l2, r81, port_cpos2];
  D42():
    deopt 141 [r112];
  D65():
    deopt 250 [r186];
  D68():
    deopt 261 [r192];
  D69():
    deopt 264 [par6];
  D71():
    deopt 269 [r196];
  D77():
    deopt 284 [hess];
  D90():
    deopt 324 [];
  L33(r114):
    l11 = ld v;
    c23 = `is.object`(l11);
    if c23 then L176() else L177(r114, l11);
  L138():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx4);
  L139():
    nap7 = force? nap6;
    checkMissing(nap7);
    r73 = `!`(nap7);
    __2 = ldf `[` in base;
    r74 = dyn __2(control10, r73);
    goto L22(r74);
  L151():
    as_integer = ldf `as.integer` in base;
    r85 = dyn as_integer(r84);
    check L152() else D37();
  L155():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L27(r81, dx9);
  L156():
    port_cpos3 = force? port_cpos2;
    checkMissing(port_cpos3);
    c19 = `is.object`(port_cpos3);
    if c19 then L157() else L158(r87, l2, r81, port_cpos3);
  L169():
    goto L31(r112);
  L171():
    unlist1 = ldf unlist;
    check L173() else D43();
  L172():
    r113 = dyn base16(<lang unlist(`[`(control, vpars))>);
    goto L33(r113);
  L237():
    goto L57(r186);
  L244():
    goto L59(r192);
  L247():
    par7 = force? par6;
    checkMissing(par7);
    length4 = ldf length in base;
    r195 = dyn length4(par7);
    check L248() else D70();
  L249():
    goto L58(r196);
  L258():
    hess1 = force? hess;
    checkMissing(hess1);
    rho2 = ld rho;
    check L259() else D78();
  L282():
    p19 = prom<V +>{
      rho4 = ld rho;
      rho5 = force? rho4;
      checkMissing(rho5);
      return rho5;
    };
    r215 = dyn get[, envir](".par", p19);
    check L283() else D91();
  D37():
    deopt 122 [r85];
  D43():
    deopt 145 [];
  D70():
    deopt 267 [r195];
  D78():
    deopt 286 [rho2];
  D91():
    deopt 328 [r215];
  L28(r96, l6, r97, dx12):
    ___ = ldf `[<-` in base;
    r108 = dyn ___(l6, r97, dx12);
    goto L27(r96, r108);
  L34(r122, dx18):
    st v = dx18;
    goto L37(r122);
  L152():
    goto L26(r85);
  L157():
    dr10 = tryDispatchBuiltin.1("[", port_cpos3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L159() else L158(r87, l2, r81, dr10);
  L158(r92, l4, r93, port_cpos5):
    pos8 = ld pos;
    check L160() else D39();
  L173():
    p15 = prom<V +>{
      control15 = ld control;
      control16 = force? control15;
      checkMissing(control16);
      c22 = `is.object`(control16);
      if c22 then L1() else L2(control16);
    L0(dx16):
      return dx16;
    L1():
      dr14 = tryDispatchBuiltin.1("[", control16);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(control18):
      vpars2 = ld vpars;
      vpars3 = force? vpars2;
      __6 = ldf `[` in base;
      r115 = dyn __6(control18, vpars3);
      goto L0(r115);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx15);
    };
    r117 = dyn unlist1(p15);
    check L174() else D44();
  L176():
    dr16 = tryDispatchBuiltin.0("[<-", l11, r114);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L178() else L177(r114, dr16);
  L177(r120, l13):
    port_cpos10 = ld port_cpos;
    check L179() else D46();
  L248():
    goto L60(r195);
  L259():
    rho3 = force? rho2;
    checkMissing(rho3);
    low = ld low;
    check L260() else D79();
  L283():
    v4 = ld v;
    check L284() else D92();
  D39():
    deopt 126 [r92, l4, r93, port_cpos5, pos8];
  D44():
    deopt 147 [r117];
  D46():
    deopt 151 [r120, l13, r114, port_cpos10];
  D79():
    deopt 288 [low];
  D92():
    deopt 330 [v4];
  L159():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L28(r87, l2, r81, dx11);
  L160():
    pos9 = force? pos8;
    checkMissing(pos9);
    c20 = `is.object`(pos9);
    if c20 then L161() else L162(r92, l4, r93, port_cpos5, pos9);
  L174():
    as_double1 = ldf `as.double` in base;
    r118 = dyn as_double1(r117);
    check L175() else D45();
  L178():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L34(r114, dx17);
  L179():
    port_cpos11 = force? port_cpos10;
    checkMissing(port_cpos11);
    c24 = `is.object`(port_cpos11);
    if c24 then L180() else L181(r120, l13, r114, port_cpos11);
  L260():
    low1 = force? low;
    checkMissing(low1);
    upp = ld upp;
    check L261() else D80();
  L284():
    v5 = force? v4;
    checkMissing(v5);
    c43 = `is.object`(v5);
    if c43 then L285() else L286(v5);
  D45():
    deopt 149 [r118];
  D80():
    deopt 290 [upp];
  L29(r104, l10, r105, port_cpos9, dx14):
    __5 = ldf `[` in base;
    r107 = dyn __5(port_cpos9, dx14);
    goto L28(r104, l10, r105, r107);
  L35(r129, l17, r130, dx20):
    ___1 = ldf `[<-` in base;
    r141 = dyn ___1(l17, r130, dx20);
    goto L34(r129, r141);
  L68(dx26):
    _in_ = ldf `%in%`;
    check L288() else D93();
  L161():
    dr12 = tryDispatchBuiltin.1("[", pos9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L163() else L162(r92, l4, r93, port_cpos5, dr12);
  L162(r100, l8, r101, port_cpos7, pos11):
    ivpars6 = ld ivpars;
    check L164() else D40();
  L175():
    goto L33(r118);
  L180():
    dr18 = tryDispatchBuiltin.1("[", port_cpos11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L182() else L181(r120, l13, r114, dr18);
  L181(r125, l15, r126, port_cpos13):
    pos12 = ld pos;
    check L183() else D47();
  L261():
    upp1 = force? upp;
    checkMissing(upp1);
    sym32 = ldf rep_len;
    base32 = ldf rep_len in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L262() else L263();
  L285():
    dr24 = tryDispatchBuiltin.1("[", v5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L287() else L286(dr24);
  L286(v7):
    __10 = ldf `[` in base;
    r216 = dyn __10(v7, 10);
    goto L68(r216);
  D40():
    deopt 128 [r100, l8, r101, port_cpos7, pos11, ivpars6];
  D47():
    deopt 153 [r125, l15, r126, port_cpos13, pos12];
  D93():
    deopt 337 [];
  L63(r202):
    iv2 = ld iv;
    check L273() else D86();
  L163():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L29(r92, l4, r93, port_cpos5, dx13);
  L164():
    ivpars7 = force? ivpars6;
    __4 = ldf `[` in base;
    r106 = dyn __4(pos11, ivpars7);
    goto L29(r100, l8, r101, port_cpos7, r106);
  L182():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L35(r120, l13, r114, dx19);
  L183():
    pos13 = force? pos12;
    checkMissing(pos13);
    c25 = `is.object`(pos13);
    if c25 then L184() else L185(r125, l15, r126, port_cpos13, pos13);
  L262():
    sym33 = ldf `as.double`;
    base33 = ldf `as.double` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L264() else L265();
  L263():
    r201 = dyn base32(<lang as.double(scale)>, <lang length(par)>);
    goto L63(r201);
  L287():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L68(dx25);
  L288():
    p20 = prom<V +>{
      iv8 = ld iv1;
      iv9 = force? iv8;
      checkMissing(iv9);
      return iv9;
    };
    p21 = prom<V +>{
      return <int 3, 4, 5, 6>;
    };
    r219 = dyn _in_(p20, p21);
    check L289() else D94();
  D86():
    deopt 309 [iv2];
  D94():
    deopt 340 [r219];
  L36(r137, l21, r138, port_cpos17, dx22):
    __8 = ldf `[` in base;
    r140 = dyn __8(port_cpos17, dx22);
    goto L35(r137, l21, r138, r140);
  L64(r204):
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L268() else L269();
  L184():
    dr20 = tryDispatchBuiltin.1("[", pos13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L186() else L185(r125, l15, r126, port_cpos13, dr20);
  L185(r133, l19, r134, port_cpos15, pos15):
    vpars4 = ld vpars;
    check L187() else D48();
  L264():
    scale1 = ld scale;
    check L266() else D81();
  L265():
    r203 = dyn base33(<sym scale>);
    goto L64(r203);
  L273():
    iv3 = force? iv2;
    checkMissing(iv3);
    v2 = ld v;
    check L274() else D87();
  L289():
    c44 = `as.logical`(r219);
    if c44 then L290() else L69();
  D48():
    deopt 155 [r133, l19, r134, port_cpos15, pos15, vpars4];
  D81():
    deopt 296 [scale1];
  D87():
    deopt 311 [v2];
  L65(r207):
    rep_len2 = ldf rep_len in base;
    r209 = dyn rep_len2(r204, r207);
    check L272() else D85();
  L69():
    goto L70(1);
  L70(r220):
    iv10 = ld iv;
    check L292() else D95();
  L186():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L36(r125, l15, r126, port_cpos13, dx21);
  L187():
    vpars5 = force? vpars4;
    __7 = ldf `[` in base;
    r139 = dyn __7(pos15, vpars5);
    goto L36(r133, l19, r134, port_cpos15, r139);
  L266():
    scale2 = force? scale1;
    checkMissing(scale2);
    as_double4 = ldf `as.double` in base;
    r205 = dyn as_double4(scale2);
    check L267() else D82();
  L268():
    par8 = ld par;
    check L270() else D83();
  L269():
    r206 = dyn base34(<sym par>);
    goto L65(r206);
  L274():
    v3 = force? v2;
    checkMissing(v3);
    _Call = ldf `.Call` in base;
    r210 = dyn _Call(C_port_nlminb1, obj1, grad1, hess1, rho3, low1, upp1, r202, iv3, v3);
    check L275() else D88();
  L290():
    goto L70(0);
  D82():
    deopt 299 [r205];
  D83():
    deopt 302 [par8];
  D85():
    deopt 307 [r209];
  D88():
    deopt 314 [r210];
  D95():
    deopt 346 [iv10];
  L267():
    goto L64(r205);
  L270():
    par9 = force? par8;
    checkMissing(par9);
    length5 = ldf length in base;
    r208 = dyn length5(par9);
    check L271() else D84();
  L272():
    goto L63(r209);
  L275():
    goto L62();
  L292():
    iv11 = force? iv10;
    checkMissing(iv11);
    c45 = `is.object`(iv11);
    if c45 then L293() else L294(iv11);
  D84():
    deopt 305 [r208];
  L71(dx28):
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L296() else L297();
  L271():
    goto L65(r208);
  L293():
    dr26 = tryDispatchBuiltin.1("[", iv11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L295() else L294(dr26);
  L294(iv13):
    __11 = ldf `[` in base;
    r221 = dyn __11(iv13, 31);
    goto L71(r221);
  L72(r223):
    iv22 = ld iv1;
    check L307() else D99();
  L295():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L71(dx27);
  L296():
    iv14 = ld iv;
    check L298() else D96();
  L297():
    r222 = dyn base36[function, gradient](<lang `[`(iv, 6)>, <lang `[`(iv, 30)>);
    goto L72(r222);
  D96():
    deopt 354 [iv14];
  D99():
    deopt 370 [19.0, iv22];
  L298():
    iv15 = force? iv14;
    checkMissing(iv15);
    c46 = `is.object`(iv15);
    if c46 then L299() else L300(iv15);
  L307():
    iv23 = force? iv22;
    checkMissing(iv23);
    r227 = `<=`(19.0, iv23);
    c49 = `as.logical`(r227);
    if c49 then L308() else L75(c49);
  L73(dx30):
    iv18 = ld iv;
    check L302() else D97();
  L75(c51):
    c55 = `as.logical`(c51);
    if c55 then L311() else L76();
  L299():
    dr28 = tryDispatchBuiltin.1("[", iv15);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L301() else L300(dr28);
  L300(iv17):
    __12 = ldf `[` in base;
    r224 = dyn __12(iv17, 6);
    goto L73(r224);
  L308():
    iv24 = ld iv1;
    check L309() else D100();
  D97():
    deopt 360 [iv18];
  D100():
    deopt 373 [c49, iv24];
  L76():
    port_msg = ldf port_msg;
    check L324() else D108();
  L80(r248):
    list1 = ldf list in base;
    r251 = dyn list1(r215, dx26, r220, dx28, r223, r248);
    check L326() else D110();
  L301():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L73(dx29);
  L302():
    iv19 = force? iv18;
    checkMissing(iv19);
    c47 = `is.object`(iv19);
    if c47 then L303() else L304(iv19);
  L309():
    iv25 = force? iv24;
    checkMissing(iv25);
    r228 = `<=`(iv25, 43.0);
    c52 = `as.logical`(r228);
    c53 = `&&`(c49, c52);
    goto L75(c53);
  L311():
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L312() else L313();
  D108():
    deopt 400 [];
  D110():
    deopt 405 [r251];
  L74(dx32):
    c48 = ldf c in base;
    r226 = dyn c48(dx30, dx32);
    check L306() else D98();
  L77(r230):
    c56 = `as.logical`(r230);
    if c56 then L317() else L78();
  L303():
    dr30 = tryDispatchBuiltin.1("[", iv19);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L305() else L304(dr30);
  L304(iv21):
    __13 = ldf `[` in base;
    r225 = dyn __13(iv21, 30);
    goto L74(r225);
  L312():
    iv26 = ld iv1;
    check L314() else D101();
  L313():
    r229 = dyn base37(<lang `<-`(B, `==`(iv1, port_cpos))>);
    goto L77(r229);
  L324():
    p26 = prom<V +>{
      iv34 = ld iv1;
      iv35 = force? iv34;
      checkMissing(iv35);
      return iv35;
    };
    r250 = dyn port_msg(p26);
    check L325() else D109();
  L326():
    goto L67(r251);
  D98():
    deopt 367 [r226];
  D101():
    deopt 380 [iv26];
  D109():
    deopt 402 [r250];
  L78():
    sprintf2 = ldf sprintf;
    check L321() else D106();
  L79(r243):
    goto L80(r243);
  L305():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L74(dx31);
  L306():
    goto L72(r226);
  L314():
    iv27 = force? iv26;
    checkMissing(iv27);
    port_cpos18 = ld port_cpos;
    check L315() else D102();
  L317():
    sprintf1 = ldf sprintf;
    check L318() else D104();
  L325():
    goto L80(r250);
  D102():
    deopt 381 [iv27, port_cpos18];
  D104():
    deopt 388 [];
  D106():
    deopt 394 [];
  L315():
    port_cpos19 = force? port_cpos18;
    checkMissing(port_cpos19);
    r231 = `==`(iv27, port_cpos19);
    st B = r231;
    any5 = ldf any in base;
    r232 = dyn any5(r231);
    check L316() else D103();
  L318():
    p22 = prom<V +>{
      sym38 = ldf names;
      base38 = ldf names in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L2() else L3();
    L0(r234):
      c57 = `is.object`(r234);
      if c57 then L4() else L5(r234);
    L2():
      port_cpos20 = ld port_cpos;
      port_cpos21 = force? port_cpos20;
      checkMissing(port_cpos21);
      names3 = ldf names in base;
      r235 = dyn names3(port_cpos21);
      goto L0(r235);
    L3():
      r233 = dyn base38(<sym port_cpos>);
      goto L0(r233);
    L1(dx34):
      return dx34;
    L4():
      dr32 = tryDispatchBuiltin.1("[", r234);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L6() else L5(dr32);
    L5(r237):
      B = ld B;
      B1 = force? B;
      __14 = ldf `[` in base;
      r238 = dyn __14(r237, B1);
      goto L1(r238);
    L6():
      dx33 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx33);
    };
    p23 = prom<V +>{
      v8 = ld v;
      v9 = force? v8;
      checkMissing(v9);
      c58 = `is.object`(v9);
      if c58 then L1() else L2(v9);
    L0(dx36):
      return dx36;
    L1():
      dr34 = tryDispatchBuiltin.1("[", v9);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(v11):
      iv28 = ld iv1;
      iv29 = force? iv28;
      __15 = ldf `[` in base;
      r240 = dyn __15(v11, iv29);
      goto L0(r240);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx35);
    };
    r242 = dyn sprintf1("'control' component '%s' = %g, is out of range", p22, p23);
    check L319() else D105();
  L321():
    p24 = prom<V +>{
      iv30 = ld iv1;
      iv31 = force? iv30;
      checkMissing(iv31);
      return iv31;
    };
    p25 = prom<V +>{
      v12 = ld v;
      v13 = force? v12;
      checkMissing(v13);
      c59 = `is.object`(v13);
      if c59 then L1() else L2(v13);
    L0(dx38):
      return dx38;
    L1():
      dr36 = tryDispatchBuiltin.1("[", v13);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(v15):
      iv32 = ld iv1;
      iv33 = force? iv32;
      __16 = ldf `[` in base;
      r245 = dyn __16(v15, iv33);
      goto L0(r245);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx37);
    };
    r247 = dyn sprintf2("V[IV[1]] = V[%d] = %g is out of range (see PORT docu.)", p24, p25);
    check L322() else D107();
  D103():
    deopt 386 [r232];
  D105():
    deopt 392 [r242];
  D107():
    deopt 398 [r247];
  L316():
    goto L77(r232);
  L319():
    goto L79(r242);
  L322():
    goto L79(r247);
  }
}