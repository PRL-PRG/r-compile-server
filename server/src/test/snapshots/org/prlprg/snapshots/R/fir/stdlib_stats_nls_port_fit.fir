fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2778497213;
    st nls_port_fit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2778497213(m, start, lower, upper, control, trace, `give.v`) {
  (reg m:*, reg start:*, reg lower:*, reg upper:*, reg control:*, reg trace:*, reg give_v:*) -+> V { var m:*, var start:*, var lower:*, var upper:*, var control:*, var trace:*, var `give.v`:*, reg give_v_isMissing:L, reg give_v_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg unlist:cls, reg start1:*, reg start2:V, reg p:p(V +), reg r5:V, reg as_double:cls, reg r6:V, reg length:cls, reg r7:V, reg integer:cls, reg p1:*, reg p2:V, reg r8:V, reg r9:V, reg p3:p(V +), reg r11:V, reg double:cls, reg p4:*, reg p5:V, reg p6:*, reg p7:V, reg r12:V, reg r13:V, reg r14:V, reg r15:V, reg p8:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg C_port_ivset:*, reg C_port_ivset1:V, reg iv:*, reg iv1:V, reg v:*, reg v1:V, reg vargs:dots, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg control1:*, reg control2:V, reg length1:cls, reg r23:V, reg c:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg control3:*, reg control4:V, reg is_list:cls, reg r26:V, reg r27:V, reg c1:L, reg c2:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg c6:L, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c9:L, reg r31:V, reg control5:*, reg control6:V, reg names:cls, reg r32:V, reg c10:V, reg c11:L, reg c12:V, reg c14:L, reg stop:cls, reg r33:V, reg intersect:cls, reg nms:*, reg nms1:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg c15:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x:V, reg l1:*, reg c17:L, reg i6:I, reg r42:dots, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg noN:*, reg noN1:V, reg ____:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg control7:*, reg control8:V, reg names1:cls, reg r48:V, reg pmatch:cls, reg nms2:*, reg nms3:V, reg p11:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg port_cpos:*, reg port_cpos1:V, reg names2:cls, reg r52:V, reg p12:p(V +), reg r54:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r59:V, reg any:cls, reg r60:V, reg c18:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg nap:*, reg nap1:V, reg length2:cls, reg r63:V, reg p13:p(V +), reg r65:V, reg p14:p(V +), reg paste:cls, reg nms4:*, reg nms5:V, reg c19:L, reg nms7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nap2:*, reg nap3:V, reg __:cls, reg r67:V, reg p15:p(V +), reg r69:V, reg p16:p(V +), reg r71:V, reg p17:p(V +), reg r73:V, reg pos2:*, reg pos3:V, reg c20:L, reg pos5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nap4:*, reg nap5:V, reg r74:V, reg __1:cls, reg r75:V, reg control9:*, reg control10:V, reg c21:L, reg control12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nap6:*, reg nap7:V, reg r76:V, reg __2:cls, reg r77:V, reg pos6:*, reg pos7:V, reg r78:V, reg ivpars:*, reg ivpars1:V, reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg ivpars2:*, reg ivpars3:V, reg any1:cls, reg r82:V, reg c22:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg r84:V, reg unlist1:cls, reg control13:*, reg control14:V, reg c23:L, reg control16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg ivpars4:*, reg ivpars5:V, reg __3:cls, reg r85:V, reg p18:p(V +), reg r87:V, reg as_integer:cls, reg r88:V, reg l4:*, reg c24:L, reg r90:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx11:V, reg r92:V, reg dx12:V, reg port_cpos2:*, reg port_cpos3:V, reg c25:L, reg r95:V, reg l8:*, reg r96:V, reg port_cpos5:V, reg dr12:V, reg dc6:L, reg dx13:V, reg r99:V, reg l10:*, reg r100:V, reg dx14:V, reg pos8:*, reg pos9:V, reg c26:L, reg r103:V, reg l12:*, reg r104:V, reg port_cpos7:V, reg pos11:V, reg dr14:V, reg dc7:L, reg dx15:V, reg r107:V, reg l14:*, reg r108:V, reg port_cpos9:V, reg dx16:V, reg ivpars6:*, reg ivpars7:V, reg __4:cls, reg r109:V, reg __5:cls, reg r110:V, reg ___:cls, reg r111:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg vpars:*, reg vpars1:V, reg any2:cls, reg r115:V, reg c27:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r116:V, reg r117:V, reg unlist2:cls, reg control17:*, reg control18:V, reg c28:L, reg control20:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg vpars2:*, reg vpars3:V, reg __6:cls, reg r118:V, reg p19:p(V +), reg r120:V, reg as_double1:cls, reg r121:V, reg l15:*, reg c29:L, reg r123:V, reg l17:*, reg dr18:V, reg dc9:L, reg dx19:V, reg r125:V, reg dx20:V, reg port_cpos10:*, reg port_cpos11:V, reg c30:L, reg r128:V, reg l19:*, reg r129:V, reg port_cpos13:V, reg dr20:V, reg dc10:L, reg dx21:V, reg r132:V, reg l21:*, reg r133:V, reg dx22:V, reg pos12:*, reg pos13:V, reg c31:L, reg r136:V, reg l23:*, reg r137:V, reg port_cpos15:V, reg pos15:V, reg dr22:V, reg dc11:L, reg dx23:V, reg r140:V, reg l25:*, reg r141:V, reg port_cpos17:V, reg dx24:V, reg vpars4:*, reg vpars5:V, reg __7:cls, reg r142:V, reg __8:cls, reg r143:V, reg ___1:cls, reg r144:V, reg r145:V, reg trace1:*, reg trace2:V, reg c32:L, reg l26:*, reg c33:L, reg r148:I, reg l28:*, reg dr24:V, reg dc12:L, reg dx25:V, reg r150:I, reg dx26:V, reg port_cpos18:*, reg port_cpos19:V, reg c34:L, reg r153:I, reg l30:*, reg r154:I, reg port_cpos21:V, reg dr26:V, reg dc13:L, reg dx27:V, reg r157:I, reg l32:*, reg r158:I, reg dx28:V, reg __9:cls, reg r159:V, reg ___2:cls, reg r160:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r162:V, reg r163:V, reg lower1:*, reg lower2:V, reg r164:V, reg any3:cls, reg r165:V, reg c35:L, reg c36:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r166:V, reg c40:L, reg r167:V, reg upper1:*, reg upper2:V, reg r168:V, reg any4:cls, reg r169:V, reg c41:L, reg c42:V, reg c44:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r170:V, reg r171:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r172:V, reg r173:V, reg lower3:*, reg lower4:V, reg as_double2:cls, reg r174:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r175:V, reg r176:V, reg par:*, reg par1:V, reg length3:cls, reg r177:V, reg rep_len:cls, reg r178:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r179:V, reg r180:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r181:V, reg r182:V, reg upper3:*, reg upper4:V, reg as_double3:cls, reg r183:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r184:V, reg r185:V, reg par2:*, reg par3:V, reg length4:cls, reg r186:V, reg rep_len1:cls, reg r187:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r188:V, reg r189:V, reg unlist3:cls, reg start3:*, reg start4:V, reg p20:p(V +), reg r191:V, reg low:*, reg low1:V, reg r192:V, reg any5:cls, reg r193:V, reg c45:L, reg c46:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r194:V, reg c50:L, reg r195:V, reg unlist4:cls, reg start5:*, reg start6:V, reg p21:p(V +), reg r197:V, reg upp:*, reg upp1:V, reg r198:V, reg any6:cls, reg r199:V, reg c51:L, reg c52:V, reg c54:L, reg l33:*, reg c55:L, reg r201:R, reg l35:*, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg ___3:cls, reg r204:V, reg give_v1:*, reg give_v2:V, reg c56:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r205:V, reg r206:V, reg iv2:*, reg iv3:V, reg v2:*, reg v3:V, reg c57:L, reg v5:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r207:V, reg v8:V, reg r208:V, reg r209:I, reg __10:cls, reg r210:V, reg list:cls, reg r211:V, reg r212:V, reg iv4:*, reg iv5:V, reg numeric:cls, reg r216:V, reg p22:*, reg p23:V, reg r217:V, reg c58:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r218:V, reg r219:V, reg C_port_nlsb:*, reg C_port_nlsb1:V, reg m1:*, reg m2:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r220:V, reg r221:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r222:V, reg r223:V, reg scale:*, reg scale1:V, reg as_double4:cls, reg r224:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r225:V, reg r226:V, reg par4:*, reg par5:V, reg length5:cls, reg r227:V, reg rep_len2:cls, reg r228:V, reg m3:*, reg m4:V, reg c59:L, reg m6:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg r229:V, reg dx35:cls, reg r230:V, reg iv6:*, reg iv7:V, reg v9:*, reg v10:V, reg low2:*, reg low3:V, reg upp2:*, reg upp3:V, reg _Call:cls, reg r231:V, reg l36:*, reg c60:L, reg r234:R, reg l38:*, reg dr34:V, reg dc17:L, reg dx36:V, reg r236:R, reg dx37:V, reg ___4:cls, reg r237:V, reg give_v3:*, reg give_v4:V, reg c61:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r238:V, reg r239:V, reg iv8:*, reg iv9:V, reg v11:*, reg v12:V, reg c62:L, reg v14:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r240:V, reg v17:V, reg r241:V, reg r242:I, reg __11:cls, reg r243:V, reg list1:cls, reg r244:V, reg iv10:*, reg iv11:V |
    mkenv;
    st m = m;
    st start = start;
    st lower = lower;
    st upper = upper;
    st control = control;
    st trace = trace;
    give_v_isMissing = missing.0(give_v);
    if give_v_isMissing then L0(FALSE) else L0(give_v);
  L0(give_v_orDefault):
    st `give.v` = give_v_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L74() else L75();
  L1(r1):
    st p = r1;
    integer = ldf integer;
    check L82() else D4();
  L74():
    sym1 = ldf `as.double`;
    base1 = ldf `as.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L76() else L77();
  L75():
    r = dyn base(<lang `<-`(par, as.double(unlist(start)))>);
    goto L1(r);
  D4():
    deopt 15 [];
  L2(r3):
    st par = r3;
    length = ldf length in base;
    r7 = dyn length(r3);
    check L81() else D3();
  L76():
    unlist = ldf unlist;
    check L78() else D0();
  L77():
    r2 = dyn base1(<lang unlist(start)>);
    goto L2(r2);
  L82():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      r8 = `*`(4, p2);
      r9 = `+`(r8, 82);
      return r9;
    };
    r11 = dyn integer(p3);
    check L83() else D5();
  D0():
    deopt 5 [];
  D3():
    deopt 12 [r7];
  D5():
    deopt 17 [r11];
  L78():
    p = prom<V +>{
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      return start2;
    };
    r5 = dyn unlist(p);
    check L79() else D1();
  L81():
    goto L1(r7);
  L83():
    st iv = r11;
    double = ldf double;
    check L84() else D6();
  D1():
    deopt 7 [r5];
  D6():
    deopt 20 [];
  L79():
    as_double = ldf `as.double` in base;
    r6 = dyn as_double(r5);
    check L80() else D2();
  L84():
    p8 = prom<V +>{
      p4 = ld p;
      p5 = force? p4;
      checkMissing(p5);
      p6 = ld p;
      p7 = force? p6;
      checkMissing(p7);
      r12 = `*`(2, p7);
      r13 = `+`(r12, 20);
      r14 = `*`(p5, r13);
      r15 = `+`(105, r14);
      return r15;
    };
    r17 = dyn double(p8);
    check L85() else D7();
  D2():
    deopt 9 [r6];
  D7():
    deopt 22 [r17];
  L80():
    goto L2(r6);
  L85():
    st v = r17;
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L86() else L87();
  L3():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L91() else L92();
  L86():
    C_port_ivset = ld C_port_ivset;
    check L88() else D8();
  L87():
    r18 = dyn base2(<sym C_port_ivset>, 1.0, <sym iv>, <sym v>);
    goto L3();
  D8():
    deopt 25 [C_port_ivset];
  L4(r22):
    c = `as.logical`(r22);
    if c then L95() else L5();
  L88():
    C_port_ivset1 = force? C_port_ivset;
    checkMissing(C_port_ivset1);
    iv = ld iv;
    check L89() else D9();
  L91():
    control1 = ld control;
    check L93() else D11();
  L92():
    r21 = dyn base3(<sym control>);
    goto L4(r21);
  D9():
    deopt 27 [C_port_ivset1, 1.0, iv];
  D11():
    deopt 33 [control1];
  L5():
    goto L36();
  L36():
    trace1 = ld trace;
    check L195() else D53();
  L89():
    iv1 = force? iv;
    checkMissing(iv1);
    v = ld v;
    check L90() else D10();
  L93():
    control2 = force? control1;
    checkMissing(control2);
    length1 = ldf length in base;
    r23 = dyn length1(control2);
    check L94() else D12();
  L95():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L96() else L97();
  D10():
    deopt 28 [C_port_ivset1, 1.0, iv1, v];
  D12():
    deopt 36 [r23];
  D53():
    deopt 186 [trace1];
  L6(r25):
    r27 = `!`(r25);
    c1 = `as.logical`(r27);
    if c1 then L7(c1) else L100();
  L90():
    v1 = force? v;
    checkMissing(v1);
    vargs = dots[1.0, iv1, v1];
    r20 = `.Call`(C_port_ivset1, vargs, <missing>);
    goto L3();
  L94():
    goto L4(r23);
  L96():
    control3 = ld control;
    check L98() else D13();
  L97():
    r24 = dyn base4(<sym control>);
    goto L6(r24);
  L195():
    trace2 = force? trace1;
    checkMissing(trace2);
    c32 = `as.logical`(trace2);
    if c32 then L196() else L37();
  D13():
    deopt 39 [control3];
  L7(c2):
    c14 = `as.logical`(c2);
    if c14 then L108() else L10();
  L37():
    goto L40();
  L40():
    st scale = 1.0;
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L205() else L206();
  L98():
    control4 = force? control3;
    checkMissing(control4);
    is_list = ldf `is.list` in base;
    r26 = dyn is_list(control4);
    check L99() else D14();
  L100():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L101() else L102();
  L196():
    l26 = ld iv;
    c33 = `is.object`(l26);
    if c33 then L197() else L198(1, l26);
  D14():
    deopt 42 [r26];
  L8(c6, r29):
    c11 = `as.logical`(r29);
    c12 = `||`(c6, c11);
    goto L7(c12);
  L10():
    goto L11();
  L11():
    intersect = ldf intersect;
    check L112() else D19();
  L38(r150, dx26):
    st iv = dx26;
    goto L40();
  L41(r163):
    c35 = `as.logical`(r163);
    if c35 then L42(c35) else L209();
  L99():
    goto L6(r26);
  L101():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L102():
    r28 = dyn base5(<lang `<-`(nms, names(control))>);
    goto L8(c1, r28);
  L108():
    stop = ldf stop;
    check L109() else D17();
  L197():
    dr24 = tryDispatchBuiltin.0("[<-", l26, 1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L199() else L198(1, dr24);
  L198(r148, l28):
    port_cpos18 = ld port_cpos;
    check L200() else D54();
  L205():
    lower1 = ld lower;
    check L207() else D55();
  L206():
    r162 = dyn base17(<lang `!=`(lower, `-`(+Infinity))>);
    goto L41(r162);
  D17():
    deopt 55 [];
  D19():
    deopt 61 [];
  D54():
    deopt 191 [r148, l28, 1, port_cpos18];
  D55():
    deopt 205 [lower1];
  L9(c9, r31):
    st nms = r31;
    c10 = `==`(r31, NULL);
    goto L8(c9, c10);
  L42(c36):
    c44 = `as.logical`(c36);
    if c44 then L215() else L44();
  L103():
    control5 = ld control;
    check L105() else D15();
  L104():
    r30 = dyn base6(<sym control>);
    goto L9(c1, r30);
  L109():
    r33 = dyn stop("'control' argument must be a named list");
    check L110() else D18();
  L112():
    p9 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    p10 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c15 = ldf c in base;
      r38 = dyn c15("tol", "minFactor", "warnOnly", "printEval", "scaleOffset", "nDcentral");
      goto L0(r38);
    L2():
      r36 = dyn base7("tol", "minFactor", "warnOnly", "printEval", "scaleOffset", "nDcentral");
      goto L0(r36);
    };
    r40 = dyn intersect(p9, p10);
    check L113() else D20();
  L199():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L38(1, dx25);
  L200():
    port_cpos19 = force? port_cpos18;
    checkMissing(port_cpos19);
    c34 = `is.object`(port_cpos19);
    if c34 then L201() else L202(r148, l28, 1, port_cpos19);
  L207():
    lower2 = force? lower1;
    checkMissing(lower2);
    r164 = `!=`(lower2, -Infinity);
    any3 = ldf any in base;
    r165 = dyn any3(r164);
    check L208() else D56();
  L209():
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L210() else L211();
  D15():
    deopt 47 [c1, control5];
  D18():
    deopt 57 [r33];
  D20():
    deopt 64 [r40];
  D56():
    deopt 210 [r165];
  L39(r157, l32, r158, dx28):
    ___2 = ldf `[<-` in base;
    r160 = dyn ___2(l32, r158, dx28);
    goto L38(r157, r160);
  L43(c40, r167):
    c41 = `as.logical`(r167);
    c42 = `||`(c40, c41);
    goto L42(c42);
  L44():
    numeric = ldf numeric;
    check L273() else D82();
  L62():
    p22 = ld p;
    check L275() else D84();
  L105():
    control6 = force? control5;
    checkMissing(control6);
    names = ldf names in base;
    r32 = dyn names(control6);
    check L106() else D16();
  L110():
    goto L11();
  L113():
    s = toForSeq(r40);
    l = length(s);
    i = 0;
    goto L12(i);
  L201():
    dr26 = tryDispatchBuiltin.1("[[", port_cpos19);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L203() else L202(r148, l28, 1, dr26);
  L202(r153, l30, r154, port_cpos21):
    __9 = ldf `[[` in base;
    r159 = dyn __9(port_cpos21, "trace");
    goto L39(r153, l30, r154, r159);
  L208():
    goto L41(r165);
  L210():
    upper1 = ld upper;
    check L212() else D57();
  L211():
    r166 = dyn base18(<lang `!=`(upper, +Infinity)>);
    goto L43(c35, r166);
  L215():
    sym19 = ldf rep_len;
    base19 = ldf rep_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L216() else L217();
  D16():
    deopt 50 [c1, r32];
  D57():
    deopt 213 [c35, upper1];
  D82():
    deopt 305 [];
  D84():
    deopt 309 [p22];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l, i2);
    if c16 then L114() else L14();
  L45(r171):
    st low = r171;
    sym22 = ldf rep_len;
    base22 = ldf rep_len in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L227() else L228();
  L106():
    goto L9(c1, r32);
  L203():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L39(r148, l28, 1, dx27);
  L212():
    upper2 = force? upper1;
    checkMissing(upper2);
    r168 = `!=`(upper2, +Infinity);
    any4 = ldf any in base;
    r169 = dyn any4(r168);
    check L213() else D58();
  L216():
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L218() else L219();
  L217():
    r170 = dyn base19(<lang as.double(lower)>, <lang length(par)>);
    goto L45(r170);
  L273():
    r216 = dyn numeric();
    check L274() else D83();
  L275():
    p23 = force? p22;
    checkMissing(p23);
    r217 = `>`(p23, 0.0);
    c58 = `as.logical`(r217);
    if c58 then L276() else L63();
  D58():
    deopt 218 [c35, r169];
  D83():
    deopt 306 [r216];
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st noN = x;
    l1 = ld control;
    c17 = `is.object`(l1);
    if c17 then L115() else L116(i2, NULL, l1);
  L46(r173):
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L222() else L223();
  L48(r180):
    st upp = r180;
    sym25 = ldf any;
    base25 = ldf any in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L238() else L239();
  L63():
    l36 = ld iv;
    c60 = `is.object`(l36);
    if c60 then L304() else L305(6.0, l36);
  L68():
    give_v3 = ld `give.v`;
    check L307() else D99();
  L114():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L119() else L120();
  L213():
    goto L43(c35, r169);
  L218():
    lower3 = ld lower;
    check L220() else D59();
  L219():
    r172 = dyn base20(<sym lower>);
    goto L46(r172);
  L227():
    sym23 = ldf `as.double`;
    base23 = ldf `as.double` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L229() else L230();
  L228():
    r179 = dyn base22(<lang as.double(upper)>, <lang length(par)>);
    goto L48(r179);
  L274():
    st upp = r216;
    st low = r216;
    goto L62();
  L276():
    sym29 = ldf `.Call`;
    base29 = ldf `.Call` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L277() else L278();
  D59():
    deopt 224 [lower3];
  D99():
    deopt 359 [give_v3];
  L13(i8, dx1):
    st control = dx1;
    goto L12(i8);
  L15(r47):
    st nms = r47;
    pmatch = ldf pmatch;
    check L123() else D24();
  L47(r176):
    rep_len = ldf rep_len in base;
    r178 = dyn rep_len(r173, r176);
    check L226() else D63();
  L49(r182):
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L233() else L234();
  L51(r189):
    c45 = `as.logical`(r189);
    if c45 then L52(c45) else L244();
  L64(r219):
    goto L68();
  L69(r236, dx37):
    st iv = dx37;
    goto L68();
  L115():
    dr = tryDispatchBuiltin.0("[[<-", l1, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L117() else L116(i2, NULL, dr);
  L116(i6, r42, l3):
    noN = ld noN;
    check L118() else D21();
  L119():
    control7 = ld control;
    check L121() else D22();
  L120():
    r46 = dyn base8(<sym control>);
    goto L15(r46);
  L220():
    lower4 = force? lower3;
    checkMissing(lower4);
    as_double2 = ldf `as.double` in base;
    r174 = dyn as_double2(lower4);
    check L221() else D60();
  L222():
    par = ld par;
    check L224() else D61();
  L223():
    r175 = dyn base21(<sym par>);
    goto L47(r175);
  L229():
    upper3 = ld upper;
    check L231() else D64();
  L230():
    r181 = dyn base23(<sym upper>);
    goto L49(r181);
  L238():
    unlist3 = ldf unlist;
    check L240() else D69();
  L239():
    r188 = dyn base25(<lang `<`(unlist(start), low)>);
    goto L51(r188);
  L277():
    C_port_nlsb = ld C_port_nlsb;
    check L279() else D85();
  L278():
    r218 = dyn base29[, , d, df, , , , ](<sym C_port_nlsb>, <sym m>, <lang rep_len(as.double(scale), length(par))>, <lang `$`(m, gradient)()>, <sym iv>, <sym v>, <sym low>, <sym upp>);
    goto L64(r218);
  L304():
    dr34 = tryDispatchBuiltin.0("[<-", l36, 6.0);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L306() else L305(6.0, dr34);
  L305(r234, l38):
    ___4 = ldf `[<-` in base;
    r237 = dyn ___4(l38, 6.0, 1);
    goto L69(r234, r237);
  L307():
    give_v4 = force? give_v3;
    checkMissing(give_v4);
    c61 = `as.logical`(give_v4);
    if c61 then L308() else L70();
  D21():
    deopt 68 [i6, r42, l3, NULL, noN];
  D22():
    deopt 77 [control7];
  D24():
    deopt 83 [];
  D60():
    deopt 227 [r174];
  D61():
    deopt 230 [par];
  D63():
    deopt 235 [r178];
  D64():
    deopt 241 [upper3];
  D69():
    deopt 257 [];
  D85():
    deopt 315 [C_port_nlsb];
  L50(r185):
    rep_len1 = ldf rep_len in base;
    r187 = dyn rep_len1(r182, r185);
    check L237() else D68();
  L52(c46):
    c54 = `as.logical`(c46);
    if c54 then L252() else L54();
  L70():
    iv10 = ld iv;
    check L320() else D103();
  L117():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(i2, dx);
  L118():
    noN1 = force? noN;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l3, NULL, noN1);
    goto L13(i6, r45);
  L121():
    control8 = force? control7;
    checkMissing(control8);
    names1 = ldf names in base;
    r48 = dyn names1(control8);
    check L122() else D23();
  L123():
    p11 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    p12 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      port_cpos = ld port_cpos;
      port_cpos1 = force? port_cpos;
      checkMissing(port_cpos1);
      names2 = ldf names in base;
      r52 = dyn names2(port_cpos1);
      goto L0(r52);
    L2():
      r50 = dyn base9(<sym port_cpos>);
      goto L0(r50);
    };
    r54 = dyn pmatch(p11, p12);
    check L124() else D25();
  L221():
    goto L46(r174);
  L224():
    par1 = force? par;
    checkMissing(par1);
    length3 = ldf length in base;
    r177 = dyn length3(par1);
    check L225() else D62();
  L226():
    goto L45(r178);
  L231():
    upper4 = force? upper3;
    checkMissing(upper4);
    as_double3 = ldf `as.double` in base;
    r183 = dyn as_double3(upper4);
    check L232() else D65();
  L233():
    par2 = ld par;
    check L235() else D66();
  L234():
    r184 = dyn base24(<sym par>);
    goto L50(r184);
  L240():
    p20 = prom<V +>{
      start3 = ld start;
      start4 = force? start3;
      checkMissing(start4);
      return start4;
    };
    r191 = dyn unlist3(p20);
    check L241() else D70();
  L244():
    sym26 = ldf any;
    base26 = ldf any in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L245() else L246();
  L279():
    C_port_nlsb1 = force? C_port_nlsb;
    checkMissing(C_port_nlsb1);
    m1 = ld m;
    check L280() else D86();
  L306():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L69(6.0, dx36);
  L308():
    sym33 = ldf list;
    base33 = ldf list in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L309() else L310();
  D23():
    deopt 80 [r48];
  D25():
    deopt 86 [r54];
  D62():
    deopt 233 [r177];
  D65():
    deopt 244 [r183];
  D66():
    deopt 247 [par2];
  D68():
    deopt 252 [r187];
  D70():
    deopt 259 [r191];
  D86():
    deopt 317 [m1];
  D103():
    deopt 376 [iv10];
  L53(c50, r195):
    c51 = `as.logical`(r195);
    c52 = `||`(c50, c51);
    goto L52(c52);
  L54():
    goto L62();
  L71(r239):
    popenv;
    return r239;
  L122():
    goto L15(r48);
  L124():
    st pos = r54;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L225():
    goto L47(r177);
  L232():
    goto L49(r183);
  L235():
    par3 = force? par2;
    checkMissing(par3);
    length4 = ldf length in base;
    r186 = dyn length4(par3);
    check L236() else D67();
  L237():
    goto L48(r187);
  L241():
    low = ld low;
    check L242() else D71();
  L245():
    unlist4 = ldf unlist;
    check L247() else D73();
  L246():
    r194 = dyn base26(<lang `>`(unlist(start), upp)>);
    goto L53(c45, r194);
  L252():
    l33 = ld iv;
    c55 = `is.object`(l33);
    if c55 then L253() else L254(300.0, l33);
  L280():
    m2 = force? m1;
    checkMissing(m2);
    sym30 = ldf rep_len;
    base30 = ldf rep_len in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L281() else L282();
  L309():
    iv8 = ld iv;
    check L311() else D100();
  L310():
    r238 = dyn base33[iv, v](<sym iv>, <lang `[`(v, seq_len(18))>);
    goto L71(r238);
  L320():
    iv11 = force? iv10;
    checkMissing(iv11);
    popenv;
    return iv11;
  D67():
    deopt 250 [r186];
  D71():
    deopt 259 [r191, low];
  D73():
    deopt 267 [c45];
  D100():
    deopt 363 [iv8];
  L16(r56):
    c18 = `as.logical`(r56);
    if c18 then L132() else L18();
  L55(dx30):
    st iv = dx30;
    give_v1 = ld `give.v`;
    check L256() else D77();
  L65(r221):
    m3 = ld m;
    check L292() else D92();
  L125():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L127() else L128();
  L126():
    r55 = dyn base10(<lang `<-`(nap, is.na(pos))>);
    goto L16(r55);
  L236():
    goto L50(r186);
  L242():
    low1 = force? low;
    checkMissing(low1);
    r192 = `<`(r191, low1);
    any5 = ldf any in base;
    r193 = dyn any5(r192);
    check L243() else D72();
  L247():
    p21 = prom<V +>{
      start5 = ld start;
      start6 = force? start5;
      checkMissing(start6);
      return start6;
    };
    r197 = dyn unlist4(p21);
    check L248() else D74();
  L253():
    dr28 = tryDispatchBuiltin.0("[<-", l33, 300.0);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L255() else L254(300.0, dr28);
  L254(r201, l35):
    ___3 = ldf `[<-` in base;
    r204 = dyn ___3(l35, 300.0, 1);
    goto L55(r204);
  L281():
    sym31 = ldf `as.double`;
    base31 = ldf `as.double` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L283() else L284();
  L282():
    r220 = dyn base30(<lang as.double(scale)>, <lang length(par)>);
    goto L65(r220);
  L311():
    iv9 = force? iv8;
    checkMissing(iv9);
    v11 = ld v;
    check L312() else D101();
  D72():
    deopt 263 [r193];
  D74():
    deopt 269 [c45, r197];
  D77():
    deopt 282 [give_v1];
  D92():
    deopt 336 [m3];
  D101():
    deopt 366 [v11];
  L17(r58):
    st nap = r58;
    any = ldf any in base;
    r60 = dyn any(r58);
    check L131() else D28();
  L18():
    goto L21();
  L21():
    pos6 = ld pos;
    check L146() else D35();
  L66(r223):
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L287() else L288();
  L127():
    pos = ld pos;
    check L129() else D26();
  L128():
    r57 = dyn base11(<sym pos>);
    goto L17(r57);
  L132():
    warning = ldf warning;
    check L133() else D29();
  L243():
    goto L51(r193);
  L248():
    upp = ld upp;
    check L249() else D75();
  L255():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L55(dx29);
  L256():
    give_v2 = force? give_v1;
    checkMissing(give_v2);
    c56 = `as.logical`(give_v2);
    if c56 then L257() else L56();
  L283():
    scale = ld scale;
    check L285() else D87();
  L284():
    r222 = dyn base31(<sym scale>);
    goto L66(r222);
  L292():
    m4 = force? m3;
    checkMissing(m4);
    c59 = `is.object`(m4);
    if c59 then L294() else L295(m4);
  L312():
    v12 = force? v11;
    checkMissing(v12);
    c62 = `is.object`(v12);
    if c62 then L313() else L314(v12);
  D26():
    deopt 92 [pos];
  D28():
    deopt 98 [r60];
  D29():
    deopt 100 [];
  D35():
    deopt 121 [pos6];
  D75():
    deopt 269 [c45, r197, upp];
  D87():
    deopt 323 [scale];
  L56():
    iv4 = ld iv;
    check L269() else D81();
  L60(r212):
    popenv;
    return r212;
  L67(r226):
    rep_len2 = ldf rep_len in base;
    r228 = dyn rep_len2(r223, r226);
    check L291() else D91();
  L72(dx39):
    list1 = ldf list in base;
    r244 = dyn list1(iv9, dx39);
    check L318() else D102();
  L129():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r59 = dyn is_na(pos1);
    check L130() else D27();
  L131():
    goto L16(r60);
  L133():
    p17 = prom<V +>{
      sprintf = ldf sprintf;
      p14 = prom<V +>{
        ngettext = ldf ngettext;
        p13 = prom<V +>{
          sym12 = ldf length;
          base12 = ldf length in base;
          guard12 = `==`.4(sym12, base12);
          if guard12 then L1() else L2();
        L0(r62):
          return r62;
        L1():
          nap = ld nap;
          nap1 = force? nap;
          checkMissing(nap1);
          length2 = ldf length in base;
          r63 = dyn length2(nap1);
          goto L0(r63);
        L2():
          r61 = dyn base12(<sym nap>);
          goto L0(r61);
        };
        r65 = dyn ngettext(p13, "unrecognized control element named %s ignored", "unrecognized control elements named %s ignored");
        return r65;
      };
      p16 = prom<V +>{
        paste = ldf paste;
        p15 = prom<V +>{
          nms4 = ld nms;
          nms5 = force? nms4;
          checkMissing(nms5);
          c19 = `is.object`(nms5);
          if c19 then L1() else L2(nms5);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", nms5);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(nms7):
          nap2 = ld nap;
          nap3 = force? nap2;
          __ = ldf `[` in base;
          r67 = dyn __(nms7, nap3);
          goto L0(r67);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r69 = dyn paste[, collapse](p15, ", ");
        return r69;
      };
      r71 = dyn sprintf(p14, p16);
      return r71;
    };
    r73 = dyn warning[, domain](p17, NA_LGL);
    check L134() else D30();
  L146():
    pos7 = force? pos6;
    checkMissing(pos7);
    r78 = `<=`(pos7, 4.0);
    st ivpars = r78;
    ivpars = ld ivpars;
    check L147() else D36();
  L249():
    upp1 = force? upp;
    checkMissing(upp1);
    r198 = `>`(r197, upp1);
    any6 = ldf any in base;
    r199 = dyn any6(r198);
    check L250() else D76();
  L257():
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L258() else L259();
  L285():
    scale1 = force? scale;
    checkMissing(scale1);
    as_double4 = ldf `as.double` in base;
    r224 = dyn as_double4(scale1);
    check L286() else D88();
  L287():
    par4 = ld par;
    check L289() else D89();
  L288():
    r225 = dyn base32(<sym par>);
    goto L67(r225);
  L293(dx34):
    checkFun.0(dx34);
    dx35 = dx34 as cls;
    r230 = dyn dx35();
    check L297() else D93();
  L294():
    dr32 = tryDispatchBuiltin.1("$", m4);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L296() else L295(dr32);
  L295(m6):
    r229 = `$`(m6, <sym gradient>);
    goto L293(r229);
  L313():
    dr36 = tryDispatchBuiltin.1("[", v12);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L315() else L314(dr36);
  L314(v14):
    sym34 = ldf seq_len;
    base34 = ldf seq_len in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L316() else L317();
  D27():
    deopt 95 [r59];
  D30():
    deopt 104 [r73];
  D36():
    deopt 126 [ivpars];
  D76():
    deopt 273 [c45, r199];
  D81():
    deopt 299 [iv4];
  D88():
    deopt 326 [r224];
  D89():
    deopt 329 [par4];
  D91():
    deopt 334 [r228];
  D93():
    deopt 340 [r230];
  D102():
    deopt 375 [r244];
  L57(r206):
    goto L60(r206);
  L73(v17, r241):
    __11 = ldf `[` in base;
    r243 = dyn __11(v17, r241);
    goto L72(r243);
  L130():
    goto L17(r59);
  L134():
    pos2 = ld pos;
    check L135() else D31();
  L147():
    ivpars1 = force? ivpars;
    checkMissing(ivpars1);
    r79 = `!`(ivpars1);
    st vpars = r79;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  L250():
    goto L53(c45, r199);
  L258():
    iv2 = ld iv;
    check L260() else D78();
  L259():
    r205 = dyn base27[iv, v](<sym iv>, <lang `[`(v, seq_len(18))>);
    goto L57(r205);
  L269():
    iv5 = force? iv4;
    checkMissing(iv5);
    goto L60(iv5);
  L286():
    goto L66(r224);
  L289():
    par5 = force? par4;
    checkMissing(par5);
    length5 = ldf length in base;
    r227 = dyn length5(par5);
    check L290() else D90();
  L291():
    goto L65(r228);
  L296():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L293(dx33);
  L297():
    iv6 = ld iv;
    check L298() else D94();
  L315():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L72(dx38);
  L316():
    r242 = seq_len(18);
    goto L73(v14, r242);
  L317():
    r240 = dyn base34(18);
    goto L73(v14, r240);
  L318():
    goto L71(r244);
  D31():
    deopt 105 [pos2];
  D78():
    deopt 286 [iv2];
  D90():
    deopt 332 [r227];
  D94():
    deopt 342 [iv6];
  L22(r81):
    c22 = `as.logical`(r81);
    if c22 then L152() else L23();
  L135():
    pos3 = force? pos2;
    checkMissing(pos3);
    c20 = `is.object`(pos3);
    if c20 then L136() else L137(pos3);
  L148():
    ivpars2 = ld ivpars;
    check L150() else D37();
  L149():
    r80 = dyn base13(<sym ivpars>);
    goto L22(r80);
  L260():
    iv3 = force? iv2;
    checkMissing(iv3);
    v2 = ld v;
    check L261() else D79();
  L290():
    goto L67(r227);
  L298():
    iv7 = force? iv6;
    checkMissing(iv7);
    v9 = ld v;
    check L299() else D95();
  D37():
    deopt 132 [ivpars2];
  D79():
    deopt 289 [v2];
  D95():
    deopt 344 [v9];
  L19(dx5):
    st pos = dx5;
    control9 = ld control;
    check L140() else D33();
  L23():
    goto L28();
  L28():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L171() else L172();
  L136():
    dr4 = tryDispatchBuiltin.1("[", pos3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L138() else L137(dr4);
  L137(pos5):
    nap4 = ld nap;
    check L139() else D32();
  L150():
    ivpars3 = force? ivpars2;
    checkMissing(ivpars3);
    any1 = ldf any in base;
    r82 = dyn any1(ivpars3);
    check L151() else D38();
  L152():
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L153() else L154();
  L261():
    v3 = force? v2;
    checkMissing(v3);
    c57 = `is.object`(v3);
    if c57 then L262() else L263(v3);
  L299():
    v10 = force? v9;
    checkMissing(v10);
    low2 = ld low;
    check L300() else D96();
  D32():
    deopt 107 [pos5, nap4];
  D33():
    deopt 112 [control9];
  D38():
    deopt 135 [r82];
  D96():
    deopt 346 [low2];
  L24(r84):
    l4 = ld iv;
    c24 = `is.object`(l4);
    if c24 then L158() else L159(r84, l4);
  L29(r114):
    c27 = `as.logical`(r114);
    if c27 then L175() else L30();
  L58(dx32):
    list = ldf list in base;
    r211 = dyn list(iv3, dx32);
    check L267() else D80();
  L138():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L139():
    nap5 = force? nap4;
    checkMissing(nap5);
    r74 = `!`(nap5);
    __1 = ldf `[` in base;
    r75 = dyn __1(pos5, r74);
    goto L19(r75);
  L140():
    control10 = force? control9;
    checkMissing(control10);
    c21 = `is.object`(control10);
    if c21 then L141() else L142(control10);
  L151():
    goto L22(r82);
  L153():
    unlist1 = ldf unlist;
    check L155() else D39();
  L154():
    r83 = dyn base14(<lang unlist(`[`(control, ivpars))>);
    goto L24(r83);
  L171():
    vpars = ld vpars;
    check L173() else D45();
  L172():
    r113 = dyn base15(<sym vpars>);
    goto L29(r113);
  L262():
    dr30 = tryDispatchBuiltin.1("[", v3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L264() else L263(dr30);
  L263(v5):
    sym28 = ldf seq_len;
    base28 = ldf seq_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L265() else L266();
  L300():
    low3 = force? low2;
    checkMissing(low3);
    upp2 = ld upp;
    check L301() else D97();
  D39():
    deopt 139 [];
  D45():
    deopt 159 [vpars];
  D80():
    deopt 298 [r211];
  D97():
    deopt 348 [upp2];
  L20(dx7):
    st control = dx7;
    goto L21();
  L25(r92, dx12):
    st iv = dx12;
    goto L28();
  L30():
    goto L35(NULL);
  L35(r145):
    goto L36();
  L59(v8, r208):
    __10 = ldf `[` in base;
    r210 = dyn __10(v8, r208);
    goto L58(r210);
  L141():
    dr6 = tryDispatchBuiltin.1("[", control10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L143() else L142(dr6);
  L142(control12):
    nap6 = ld nap;
    check L144() else D34();
  L155():
    p18 = prom<V +>{
      control13 = ld control;
      control14 = force? control13;
      checkMissing(control14);
      c23 = `is.object`(control14);
      if c23 then L1() else L2(control14);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", control14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(control16):
      ivpars4 = ld ivpars;
      ivpars5 = force? ivpars4;
      __3 = ldf `[` in base;
      r85 = dyn __3(control16, ivpars5);
      goto L0(r85);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r87 = dyn unlist1(p18);
    check L156() else D40();
  L158():
    dr10 = tryDispatchBuiltin.0("[<-", l4, r84);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L160() else L159(r84, dr10);
  L159(r90, l6):
    port_cpos2 = ld port_cpos;
    check L161() else D42();
  L173():
    vpars1 = force? vpars;
    checkMissing(vpars1);
    any2 = ldf any in base;
    r115 = dyn any2(vpars1);
    check L174() else D46();
  L175():
    sym16 = ldf `as.double`;
    base16 = ldf `as.double` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L176() else L177();
  L264():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L58(dx31);
  L265():
    r209 = seq_len(18);
    goto L59(v5, r209);
  L266():
    r207 = dyn base28(18);
    goto L59(v5, r207);
  L267():
    goto L57(r211);
  L301():
    upp3 = force? upp2;
    checkMissing(upp3);
    _Call = ldf `.Call` in base;
    r231 = dyn _Call(C_port_nlsb1, m2, r221, r230, iv7, v10, low3, upp3);
    check L302() else D98();
  D34():
    deopt 114 [control12, nap6];
  D40():
    deopt 141 [r87];
  D42():
    deopt 145 [r90, l6, r84, port_cpos2];
  D46():
    deopt 162 [r115];
  D98():
    deopt 351 [r231];
  L31(r117):
    l15 = ld v;
    c29 = `is.object`(l15);
    if c29 then L181() else L182(r117, l15);
  L143():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx6);
  L144():
    nap7 = force? nap6;
    checkMissing(nap7);
    r76 = `!`(nap7);
    __2 = ldf `[` in base;
    r77 = dyn __2(control12, r76);
    goto L20(r77);
  L156():
    as_integer = ldf `as.integer` in base;
    r88 = dyn as_integer(r87);
    check L157() else D41();
  L160():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L25(r84, dx11);
  L161():
    port_cpos3 = force? port_cpos2;
    checkMissing(port_cpos3);
    c25 = `is.object`(port_cpos3);
    if c25 then L162() else L163(r90, l6, r84, port_cpos3);
  L174():
    goto L29(r115);
  L176():
    unlist2 = ldf unlist;
    check L178() else D47();
  L177():
    r116 = dyn base16(<lang unlist(`[`(control, vpars))>);
    goto L31(r116);
  L302():
    goto L64(r231);
  D41():
    deopt 143 [r88];
  D47():
    deopt 166 [];
  L26(r99, l10, r100, dx14):
    ___ = ldf `[<-` in base;
    r111 = dyn ___(l10, r100, dx14);
    goto L25(r99, r111);
  L32(r125, dx20):
    st v = dx20;
    goto L35(r125);
  L157():
    goto L24(r88);
  L162():
    dr12 = tryDispatchBuiltin.1("[", port_cpos3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L164() else L163(r90, l6, r84, dr12);
  L163(r95, l8, r96, port_cpos5):
    pos8 = ld pos;
    check L165() else D43();
  L178():
    p19 = prom<V +>{
      control17 = ld control;
      control18 = force? control17;
      checkMissing(control18);
      c28 = `is.object`(control18);
      if c28 then L1() else L2(control18);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("[", control18);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(control20):
      vpars2 = ld vpars;
      vpars3 = force? vpars2;
      __6 = ldf `[` in base;
      r118 = dyn __6(control20, vpars3);
      goto L0(r118);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r120 = dyn unlist2(p19);
    check L179() else D48();
  L181():
    dr18 = tryDispatchBuiltin.0("[<-", l15, r117);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L183() else L182(r117, dr18);
  L182(r123, l17):
    port_cpos10 = ld port_cpos;
    check L184() else D50();
  D43():
    deopt 147 [r95, l8, r96, port_cpos5, pos8];
  D48():
    deopt 168 [r120];
  D50():
    deopt 172 [r123, l17, r117, port_cpos10];
  L164():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L26(r90, l6, r84, dx13);
  L165():
    pos9 = force? pos8;
    checkMissing(pos9);
    c26 = `is.object`(pos9);
    if c26 then L166() else L167(r95, l8, r96, port_cpos5, pos9);
  L179():
    as_double1 = ldf `as.double` in base;
    r121 = dyn as_double1(r120);
    check L180() else D49();
  L183():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L32(r117, dx19);
  L184():
    port_cpos11 = force? port_cpos10;
    checkMissing(port_cpos11);
    c30 = `is.object`(port_cpos11);
    if c30 then L185() else L186(r123, l17, r117, port_cpos11);
  D49():
    deopt 170 [r121];
  L27(r107, l14, r108, port_cpos9, dx16):
    __5 = ldf `[` in base;
    r110 = dyn __5(port_cpos9, dx16);
    goto L26(r107, l14, r108, r110);
  L33(r132, l21, r133, dx22):
    ___1 = ldf `[<-` in base;
    r144 = dyn ___1(l21, r133, dx22);
    goto L32(r132, r144);
  L166():
    dr14 = tryDispatchBuiltin.1("[", pos9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L168() else L167(r95, l8, r96, port_cpos5, dr14);
  L167(r103, l12, r104, port_cpos7, pos11):
    ivpars6 = ld ivpars;
    check L169() else D44();
  L180():
    goto L31(r121);
  L185():
    dr20 = tryDispatchBuiltin.1("[", port_cpos11);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L187() else L186(r123, l17, r117, dr20);
  L186(r128, l19, r129, port_cpos13):
    pos12 = ld pos;
    check L188() else D51();
  D44():
    deopt 149 [r103, l12, r104, port_cpos7, pos11, ivpars6];
  D51():
    deopt 174 [r128, l19, r129, port_cpos13, pos12];
  L168():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L27(r95, l8, r96, port_cpos5, dx15);
  L169():
    ivpars7 = force? ivpars6;
    __4 = ldf `[` in base;
    r109 = dyn __4(pos11, ivpars7);
    goto L27(r103, l12, r104, port_cpos7, r109);
  L187():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L33(r123, l17, r117, dx21);
  L188():
    pos13 = force? pos12;
    checkMissing(pos13);
    c31 = `is.object`(pos13);
    if c31 then L189() else L190(r128, l19, r129, port_cpos13, pos13);
  L34(r140, l25, r141, port_cpos17, dx24):
    __8 = ldf `[` in base;
    r143 = dyn __8(port_cpos17, dx24);
    goto L33(r140, l25, r141, r143);
  L189():
    dr22 = tryDispatchBuiltin.1("[", pos13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L191() else L190(r128, l19, r129, port_cpos13, dr22);
  L190(r136, l23, r137, port_cpos15, pos15):
    vpars4 = ld vpars;
    check L192() else D52();
  D52():
    deopt 176 [r136, l23, r137, port_cpos15, pos15, vpars4];
  L191():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L34(r128, l19, r129, port_cpos13, dx23);
  L192():
    vpars5 = force? vpars4;
    __7 = ldf `[` in base;
    r142 = dyn __7(pos15, vpars5);
    goto L34(r136, l23, r137, port_cpos15, r142);
  }
}