fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3280860523;
    st `logLik.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3280860523(object, REML, `...`) {
  (reg object:*, reg REML:*, reg ddd:dots) -+> V { var object:*, var REML:*, reg REML_isMissing:L, reg REML_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg inherits:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg object3:*, reg object4:V, reg c1:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg object7:*, reg object8:V, reg c2:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg res:*, reg res1:V, reg length:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg object11:*, reg object12:V, reg c3:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg c4:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg N:*, reg N1:V, reg rep_int:cls, reg r15:V, reg w:*, reg w1:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg excl:*, reg excl1:V, reg any:cls, reg r20:V, reg c6:L, reg res2:*, reg res3:V, reg c7:L, reg res5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg excl2:*, reg excl3:V, reg r21:V, reg __:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg res6:*, reg res7:V, reg length1:cls, reg r25:V, reg w2:*, reg w3:V, reg c8:L, reg w5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg excl4:*, reg excl5:V, reg r26:V, reg __1:cls, reg r27:V, reg N2:*, reg N3:V, reg REML1:*, reg REML2:V, reg c9:L, reg N4:*, reg N5:V, reg p:*, reg p1:V, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:R, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:R, reg r39:V, reg w6:*, reg w7:V, reg r40:V, reg sum:cls, reg r41:V, reg N6:*, reg N7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:R, reg r48:V, reg N10:V, reg r49:V, reg r50:V, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:R, reg r60:V, reg N13:V, reg r61:V, reg r62:V, reg N14:*, reg N15:V, reg r63:V, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:R, reg r73:V, reg N18:V, reg r74:V, reg r75:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:R, reg r84:V, reg N21:V, reg r85:V, reg r86:V, reg w8:*, reg w9:V, reg res8:*, reg res9:V, reg r87:V, reg r88:V, reg sum1:cls, reg r89:V, reg r90:V, reg r91:V, reg r92:V, reg r93:V, reg r94:V, reg REML3:*, reg REML4:V, reg c10:L, reg val:*, reg val1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg val4:V, reg r96:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg val7:V, reg r98:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg val10:V, reg r100:V, reg diag:cls, reg object15:*, reg object16:V, reg c11:L, reg object18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r101:V, reg c12:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r102:V, reg p2:p(V +), reg r104:V, reg c13:L, reg val12:V, reg r106:V, reg dr14:V, reg dc7:L, reg dx16:V, reg val14:V, reg dx17:V, reg p3:*, reg p4:V, reg r107:V, reg __2:cls, reg r108:V, reg abs:cls, reg r109:V, reg r110:V, reg sum2:cls, reg r111:V, reg r112:V, reg N22:*, reg N23:V, reg l:*, reg attr__:cls, reg r114:V, reg N24:*, reg N25:V, reg l1:*, reg attr__1:cls, reg r115:V, reg p5:*, reg p6:V, reg r116:V, reg l2:*, reg attr__2:cls, reg r117:V, reg l3:*, reg class__:cls, reg r118:V, reg val15:*, reg val16:V |
    mkenv;
    st object = object;
    REML_isMissing = missing.0(REML);
    if REML_isMissing then L0(FALSE) else L0(REML);
  L0(REML_orDefault):
    st REML = REML_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r1):
    c = `as.logical`(r1);
    if c then L32() else L2();
  L28():
    object1 = ld object;
    check L30() else D0();
  L29():
    r = dyn base(<sym object>, "mlm");
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2():
    goto L3();
  L3():
    object3 = ld object;
    check L36() else D4();
  L30():
    object2 = force? object1;
    checkMissing(object2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(object2, "mlm", FALSE);
    check L31() else D1();
  L32():
    stop = ldf stop;
    check L33() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 14 [object3];
  L31():
    goto L1(r2);
  L33():
    r3 = dyn stop("'logLik.lm' does not support multiple responses");
    check L34() else D3();
  L36():
    object4 = force? object3;
    checkMissing(object4);
    c1 = `is.object`(object4);
    if c1 then L38() else L39(object4);
  D3():
    deopt 11 [r3];
  L34():
    goto L3();
  L37(dx1):
    st res = dx1;
    object7 = ld object;
    check L41() else D5();
  L38():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(object6):
    r5 = `$`(object6, <sym residuals>);
    goto L37(r5);
  D5():
    deopt 18 [object7];
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L37(dx);
  L41():
    object8 = force? object7;
    checkMissing(object8);
    c2 = `is.object`(object8);
    if c2 then L43() else L44(object8);
  L42(dx3):
    st p = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L43():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(dr2);
  L44(object10):
    r6 = `$`(object10, <sym rank>);
    goto L42(r6);
  L4(r8):
    st N = r8;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L42(dx2);
  L46():
    res = ld res;
    check L48() else D6();
  L47():
    r7 = dyn base1(<sym res>);
    goto L4(r7);
  D6():
    deopt 24 [res];
  L5(r11):
    c5 = `as.logical`(r11);
    if c5 then L57() else L6();
  L48():
    res1 = force? res;
    checkMissing(res1);
    length = ldf length in base;
    r9 = dyn length(res1);
    check L49() else D7();
  L50():
    object11 = ld object;
    check L52() else D8();
  L51():
    r10 = dyn base2(<lang `<-`(w, `$`(object, weights))>);
    goto L5(r10);
  D7():
    deopt 27 [r9];
  D8():
    deopt 30 [object11];
  L6():
    w = ld w;
    check L63() else D11();
  L8():
    N2 = ld N;
    check L84() else D20();
  L49():
    goto L4(r9);
  L52():
    object12 = force? object11;
    checkMissing(object12);
    c3 = `is.object`(object12);
    if c3 then L54() else L55(object12);
  L57():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  D11():
    deopt 43 [w];
  D20():
    deopt 77 [N2];
  L7(r14):
    st w = r14;
    goto L8();
  L53(dx5):
    st w = dx5;
    c4 = `==`(dx5, NULL);
    goto L5(c4);
  L54():
    dr4 = tryDispatchBuiltin.1("$", object12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(dr4);
  L55(object14):
    r12 = `$`(object14, <sym weights>);
    goto L53(r12);
  L58():
    N = ld N;
    check L60() else D9();
  L59():
    r13 = dyn base3(1.0, <sym N>);
    goto L7(r13);
  L63():
    w1 = force? w;
    checkMissing(w1);
    r17 = `==`(w1, 0.0);
    st excl = r17;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L84():
    N3 = force? N2;
    checkMissing(N3);
    st N0 = N3;
    REML1 = ld REML;
    check L85() else D21();
  D9():
    deopt 38 [N];
  D21():
    deopt 80 [REML1];
  L9(r19):
    c6 = `as.logical`(r19);
    if c6 then L68() else L10();
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L53(dx4);
  L60():
    N1 = force? N;
    checkMissing(N1);
    rep_int = ldf `rep.int` in base;
    r15 = dyn rep_int(1.0, N1);
    check L61() else D10();
  L64():
    excl = ld excl;
    check L66() else D12();
  L65():
    r18 = dyn base4(<sym excl>);
    goto L9(r18);
  L85():
    REML2 = force? REML1;
    checkMissing(REML2);
    c9 = `as.logical`(REML2);
    if c9 then L86() else L14();
  D10():
    deopt 41 [r15];
  D12():
    deopt 50 [excl];
  L10():
    goto L8();
  L14():
    goto L15();
  L15():
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L61():
    goto L7(r15);
  L66():
    excl1 = force? excl;
    checkMissing(excl1);
    any = ldf any in base;
    r20 = dyn any(excl1);
    check L67() else D13();
  L68():
    res2 = ld res;
    check L69() else D14();
  L86():
    N4 = ld N;
    check L87() else D22();
  D13():
    deopt 53 [r20];
  D14():
    deopt 54 [res2];
  D22():
    deopt 82 [N4];
  L16(r33, r34):
    N6 = ld N;
    check L96() else D26();
  L67():
    goto L9(r20);
  L69():
    res3 = force? res2;
    checkMissing(res3);
    c7 = `is.object`(res3);
    if c7 then L70() else L71(res3);
  L87():
    N5 = force? N4;
    checkMissing(N5);
    p = ld p;
    check L88() else D23();
  L90():
    sym7 = ldf log;
    base7 = ldf log in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L92() else L93();
  L91():
    r32 = dyn base6(<lang log(w)>);
    goto L16(0.5, r32);
  D23():
    deopt 83 [N5, p];
  D26():
    deopt 97 [r33, r34, N6];
  L11(dx7):
    st res = dx7;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L17(r38, r39):
    sum = ldf sum in base;
    r41 = dyn sum(r39);
    check L95() else D25();
  L70():
    dr6 = tryDispatchBuiltin.1("[", res3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(dr6);
  L71(res5):
    excl2 = ld excl;
    check L73() else D15();
  L88():
    p1 = force? p;
    checkMissing(p1);
    r28 = `-`(N5, p1);
    st N = r28;
    goto L15();
  L92():
    w6 = ld w;
    check L94() else D24();
  L93():
    r37 = dyn base7(<sym w>);
    goto L17(0.5, r37);
  L96():
    N7 = force? N6;
    checkMissing(N7);
    sym8 = ldf log;
    base8 = ldf log in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  D15():
    deopt 56 [res5, excl2];
  D24():
    deopt 93 [0.5, w6];
  D25():
    deopt 97 [r38, r41];
  L12(r24):
    st N = r24;
    w2 = ld w;
    check L78() else D18();
  L18(r47, r48, N10, r49):
    r51 = `+`(r49, 1.0);
    sym9 = ldf log;
    base9 = ldf log in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L73():
    excl3 = force? excl2;
    checkMissing(excl3);
    r21 = `!`(excl3);
    __ = ldf `[` in base;
    r22 = dyn __(res5, r21);
    goto L11(r22);
  L74():
    res6 = ld res;
    check L76() else D16();
  L75():
    r23 = dyn base5(<sym res>);
    goto L12(r23);
  L94():
    w7 = force? w6;
    checkMissing(w7);
    r40 = log(w7, 2.718281828459045);
    goto L17(0.5, r40);
  L95():
    goto L16(r38, r41);
  L97():
    r50 = log(6.283185307179586, 2.718281828459045);
    goto L18(r33, r34, N7, r50);
  L98():
    r46 = dyn base8(<lang `*`(2.0, pi)>);
    goto L18(r33, r34, N7, r46);
  D16():
    deopt 63 [res6];
  D18():
    deopt 68 [w2];
  L19(r59, r60, N13, r61, r62):
    r64 = `-`(r61, r62);
    sym10 = ldf log;
    base10 = ldf log in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L76():
    res7 = force? res6;
    checkMissing(res7);
    length1 = ldf length in base;
    r25 = dyn length1(res7);
    check L77() else D17();
  L78():
    w3 = force? w2;
    checkMissing(w3);
    c8 = `is.object`(w3);
    if c8 then L79() else L80(w3);
  L99():
    N14 = ld N;
    check L101() else D27();
  L100():
    r58 = dyn base9(<sym N>);
    goto L19(r47, r48, N10, r51, r58);
  D17():
    deopt 66 [r25];
  D27():
    deopt 104 [r47, r48, N10, r51, N14];
  L13(dx9):
    st w = dx9;
    goto L8();
  L20(r72, r73, N18, r74, r75):
    r91 = `+`(r74, r75);
    r92 = `*`(N18, r91);
    r93 = `-`(r73, r92);
    r94 = `*`(r72, r93);
    st val = r94;
    REML3 = ld REML;
    check L109() else D31();
  L77():
    goto L12(r25);
  L79():
    dr8 = tryDispatchBuiltin.1("[", w3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L81() else L80(dr8);
  L80(w5):
    excl4 = ld excl;
    check L82() else D19();
  L101():
    N15 = force? N14;
    checkMissing(N15);
    r63 = log(N15, 2.718281828459045);
    goto L19(r47, r48, N10, r51, r63);
  L102():
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  L103():
    r71 = dyn base10(<lang sum(`*`(w, `^`(res, 2.0)))>);
    goto L20(r59, r60, N13, r64, r71);
  D19():
    deopt 70 [w5, excl4];
  D31():
    deopt 124 [REML3];
  L21(r83, r84, N21, r85, r86):
    r90 = log(r86, 2.718281828459045);
    goto L20(r83, r84, N21, r85, r90);
  L81():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L82():
    excl5 = force? excl4;
    checkMissing(excl5);
    r26 = `!`(excl5);
    __1 = ldf `[` in base;
    r27 = dyn __1(w5, r26);
    goto L13(r27);
  L104():
    w8 = ld w;
    check L106() else D28();
  L105():
    r82 = dyn base11(<lang `*`(w, `^`(res, 2.0))>);
    goto L21(r59, r60, N13, r64, r82);
  L109():
    REML4 = force? REML3;
    checkMissing(REML4);
    c10 = `as.logical`(REML4);
    if c10 then L110() else L22();
  D28():
    deopt 110 [r59, r60, N13, r64, w8];
  L22():
    goto L27();
  L27():
    N22 = ld N0;
    check L127() else D38();
  L106():
    w9 = force? w8;
    checkMissing(w9);
    res8 = ld res;
    check L107() else D29();
  L110():
    val = ld val;
    check L111() else D32();
  D29():
    deopt 111 [r59, r60, N13, r64, w9, res8];
  D32():
    deopt 126 [val];
  D38():
    deopt 150 [N22];
  L107():
    res9 = force? res8;
    checkMissing(res9);
    r87 = `^`(res9, 2.0);
    r88 = `*`(w9, r87);
    sum1 = ldf sum in base;
    r89 = dyn sum1(r88);
    check L108() else D30();
  L111():
    val1 = force? val;
    checkMissing(val1);
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L112() else L113();
  L127():
    N23 = force? N22;
    checkMissing(N23);
    l = ld val;
    attr__ = ldf `attr<-`;
    check L128() else D39();
  D30():
    deopt 117 [r59, r60, N13, r64, r89];
  D39():
    deopt 153 [N23, l, N23];
  L23(val4, r96):
    r112 = `-`(val4, r96);
    st val = r112;
    goto L27();
  L108():
    goto L21(r59, r60, N13, r64, r89);
  L112():
    sym13 = ldf log;
    base13 = ldf log in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L114() else L115();
  L113():
    r95 = dyn base12(<lang log(abs(`[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p))))>);
    goto L23(val1, r95);
  L128():
    r114 = dyn attr__(l, NULL, "nall", N23);
    check L129() else D40();
  D40():
    deopt 156 [N23, r114];
  L24(val7, r98):
    sum2 = ldf sum in base;
    r111 = dyn sum2(r98);
    check L125() else D37();
  L114():
    sym14 = ldf abs;
    base14 = ldf abs in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L116() else L117();
  L115():
    r97 = dyn base13(<lang abs(`[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p)))>);
    goto L24(val1, r97);
  L129():
    st val = r114;
    N24 = ld N;
    check L130() else D41();
  D37():
    deopt 145 [val7, r111];
  D41():
    deopt 158 [N24];
  L25(val10, r100):
    r110 = log(r100, 2.718281828459045);
    goto L24(val10, r110);
  L116():
    diag = ldf diag;
    check L118() else D33();
  L117():
    r99 = dyn base14(<lang `[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p))>);
    goto L25(val1, r99);
  L125():
    goto L23(val7, r111);
  L130():
    N25 = force? N24;
    checkMissing(N25);
    l1 = ld val;
    attr__1 = ldf `attr<-`;
    check L131() else D42();
  D33():
    deopt 133 [val1];
  D42():
    deopt 161 [N25, l1, N25];
  L118():
    p2 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c11 = `is.object`(object16);
      if c11 then L1() else L2(object16);
    L0(dx11):
      c12 = `is.object`(dx11);
      if c12 then L5() else L6(dx11);
    L1():
      dr10 = tryDispatchBuiltin.1("$", object16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object18):
      r101 = `$`(object18, <sym qr>);
      goto L0(r101);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L4(dx15):
      return dx15;
    L5():
      dr12 = tryDispatchBuiltin.1("$", dx11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx13):
      r102 = `$`(dx13, <sym qr>);
      goto L4(r102);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L4(dx14);
    };
    r104 = dyn diag(p2);
    check L119() else D34();
  L131():
    r115 = dyn attr__1(l1, NULL, "nobs", N25);
    check L132() else D43();
  D34():
    deopt 135 [val1, r104];
  D43():
    deopt 164 [N25, r115];
  L119():
    c13 = `is.object`(r104);
    if c13 then L120() else L121(val1, r104);
  L132():
    st val = r115;
    p5 = ld p;
    check L133() else D44();
  D44():
    deopt 166 [p5];
  L26(val14, dx17):
    abs = ldf abs in base;
    r109 = dyn abs(dx17);
    check L124() else D36();
  L120():
    dr14 = tryDispatchBuiltin.1("[", r104);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L122() else L121(val1, dr14);
  L121(val12, r106):
    p3 = ld p;
    check L123() else D35();
  L133():
    p6 = force? p5;
    checkMissing(p6);
    r116 = `+`(p6, 1.0);
    l2 = ld val;
    attr__2 = ldf `attr<-`;
    check L134() else D45();
  D35():
    deopt 137 [val12, r106, 1, p3];
  D36():
    deopt 142 [val14, r109];
  D45():
    deopt 171 [r116, l2, r116];
  L122():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L26(val1, dx16);
  L123():
    p4 = force? p3;
    checkMissing(p4);
    r107 = `:`(1, p4);
    __2 = ldf `[` in base;
    r108 = dyn __2(r106, r107);
    goto L26(val12, r108);
  L124():
    goto L25(val14, r109);
  L134():
    r117 = dyn attr__2(l2, NULL, "df", r116);
    check L135() else D46();
  D46():
    deopt 174 [r116, r117];
  L135():
    st val = r117;
    l3 = ld val;
    class__ = ldf `class<-`;
    check L136() else D47();
  D47():
    deopt 179 ["logLik", l3, "logLik"];
  L136():
    r118 = dyn class__(l3, NULL, "logLik");
    check L137() else D48();
  D48():
    deopt 181 ["logLik", r118];
  L137():
    st val = r118;
    val15 = ld val;
    check L138() else D49();
  D49():
    deopt 183 [val15];
  L138():
    val16 = force? val15;
    checkMissing(val16);
    popenv;
    return val16;
  }
}