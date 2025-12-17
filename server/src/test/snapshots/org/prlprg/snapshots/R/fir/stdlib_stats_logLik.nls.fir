fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3280860523;
    st `logLik.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3280860523(object, REML, `...`) {
  (reg object:*, reg REML:*, reg ddd:dots) -+> V { var object:*, var REML:*, reg REML_isMissing:L, reg REML_orDefault:*, var `...`:dots?, reg REML1:*, reg REML2:V, reg c:L, reg stop:cls, reg r:V, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r3:V, reg dx6:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg res:*, reg res1:V, reg length:cls, reg r7:V, reg ____:cls, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg r8:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg N:*, reg N1:V, reg rep_len:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg w:*, reg w1:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg zw:*, reg zw1:V, reg r18:V, reg sum:cls, reg r19:V, reg N2:*, reg N3:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg r25:V, reg r26:V, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg r34:V, reg r35:V, reg N4:*, reg N5:V, reg r36:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg r44:V, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg r52:V, reg r53:V, reg w2:*, reg w3:V, reg zw2:*, reg zw3:V, reg r54:V, reg r55:V, reg sum1:cls, reg r56:V, reg N6:*, reg N7:V, reg r57:V, reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg r65:V, reg r66:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg r73:V, reg r74:V, reg res2:*, reg res3:V, reg r75:V, reg sum2:cls, reg r76:V, reg r77:V, reg r78:V, reg r79:V, reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r83:V, reg r84:I, reg r85:V, reg coef:cls, reg object9:*, reg object10:V, reg p2:p(V +), reg r87:V, reg length1:cls, reg r88:V, reg r89:V, reg l:*, reg attr__:cls, reg r90:V, reg N8:*, reg N9:V, reg l1:*, reg attr__1:cls, reg r91:V, reg l2:*, reg attr__2:cls, reg r92:V, reg l3:*, reg class__:cls, reg r93:V, reg val:*, reg val1:V |
    mkenv;
    st object = object;
    REML_isMissing = missing.0(REML);
    if REML_isMissing then L0(FALSE) else L0(REML);
  L0(REML_orDefault):
    st REML = REML_orDefault;
    st `...` = ddd;
    REML1 = ld REML;
    check L12() else D0();
  D0():
    deopt 0 [REML1];
  L12():
    REML2 = force? REML1;
    checkMissing(REML2);
    c = `as.logical`(REML2);
    if c then L13() else L1();
  L1():
    goto L2();
  L2():
    object1 = ld object;
    check L17() else D3();
  L13():
    stop = ldf stop;
    check L14() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 8 [object1];
  L14():
    r = dyn stop("cannot calculate REML log-likelihood for \"nls\" objects");
    check L15() else D2();
  L17():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L19() else L20(object2);
  D2():
    deopt 5 [r];
  L15():
    goto L2();
  L18(dx1):
    c2 = `is.object`(dx1);
    if c2 then L23() else L24(dx1);
  L19():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(object4):
    r2 = `$`(object4, <sym m>);
    goto L18(r2);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22(dx5):
    checkFun.0(dx5);
    dx6 = dx5 as cls;
    r4 = dyn dx6();
    check L26() else D4();
  L23():
    dr2 = tryDispatchBuiltin.1("$", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(dx3):
    r3 = `$`(dx3, <sym resid>);
    goto L22(r3);
  D4():
    deopt 13 [r4];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx4);
  L26():
    st res = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L3(r6):
    st N = r6;
    ____ = ldf `%||%`;
    check L31() else D7();
  L27():
    res = ld res;
    check L29() else D5();
  L28():
    r5 = dyn base(<sym res>);
    goto L3(r5);
  D5():
    deopt 17 [res];
  D7():
    deopt 23 [];
  L29():
    res1 = force? res;
    checkMissing(res1);
    length = ldf length in base;
    r7 = dyn length(res1);
    check L30() else D6();
  L31():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c3 = `is.object`(object6);
      if c3 then L1() else L2(object6);
    L0(dx8):
      return dx8;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object8):
      r8 = `$`(object8, <sym weights>);
      goto L0(r8);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx7);
    };
    p1 = prom<V +>{
      sym1 = ldf rep_len;
      base1 = ldf rep_len in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      N = ld N;
      N1 = force? N;
      checkMissing(N1);
      rep_len = ldf rep_len in base;
      r12 = dyn rep_len(1.0, N1);
      goto L0(r12);
    L2():
      r10 = dyn base1(1.0, <sym N>);
      goto L0(r10);
    };
    r14 = dyn ____(p, p1);
    check L32() else D8();
  D6():
    deopt 20 [r7];
  D8():
    deopt 26 [r14];
  L30():
    goto L3(r7);
  L32():
    st w = r14;
    w = ld w;
    check L33() else D9();
  D9():
    deopt 28 [w];
  L33():
    w1 = force? w;
    checkMissing(w1);
    r15 = `==`(w1, 0.0);
    st zw = r15;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L4(r17):
    st N = r17;
    N2 = ld N;
    check L38() else D12();
  L34():
    zw = ld zw;
    check L36() else D10();
  L35():
    r16 = dyn base2(<lang `!`(zw)>);
    goto L4(r16);
  D10():
    deopt 35 [zw];
  D12():
    deopt 41 [N2];
  L36():
    zw1 = force? zw;
    checkMissing(zw1);
    r18 = `!`(zw1);
    sum = ldf sum in base;
    r19 = dyn sum(r18);
    check L37() else D11();
  L38():
    N3 = force? N2;
    checkMissing(N3);
    r20 = `-`(<missing>, N3);
    sym3 = ldf log;
    base3 = ldf log in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  D11():
    deopt 39 [r19];
  L5(r24, r25):
    r27 = `+`(r25, 1.0);
    sym4 = ldf log;
    base4 = ldf log in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L37():
    goto L4(r19);
  L39():
    r26 = log(6.283185307179586, 2.718281828459045);
    goto L5(r20, r26);
  L40():
    r23 = dyn base3(<lang `*`(2.0, pi)>);
    goto L5(r20, r23);
  L6(r33, r34, r35):
    r37 = `-`(r34, r35);
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L41():
    N4 = ld N;
    check L43() else D13();
  L42():
    r32 = dyn base4(<sym N>);
    goto L6(r24, r27, r32);
  D13():
    deopt 49 [r24, r27, N4];
  L7(r43, r44, r45):
    N6 = ld N;
    check L51() else D17();
  L43():
    N5 = force? N4;
    checkMissing(N5);
    r36 = log(N5, 2.718281828459045);
    goto L6(r24, r27, r36);
  L44():
    sym6 = ldf log;
    base6 = ldf log in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  L45():
    r42 = dyn base5(<lang log(`+`(w, zw))>);
    goto L7(r33, r37, r42);
  D17():
    deopt 61 [r43, r44, r45, N6];
  L8(r51, r52, r53):
    sum1 = ldf sum in base;
    r56 = dyn sum1(r53);
    check L50() else D16();
  L46():
    w2 = ld w;
    check L48() else D14();
  L47():
    r50 = dyn base6(<lang `+`(w, zw)>);
    goto L8(r33, r37, r50);
  L51():
    N7 = force? N6;
    checkMissing(N7);
    r57 = `/`(r45, N7);
    r58 = `-`(r44, r57);
    sym7 = ldf log;
    base7 = ldf log in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L52() else L53();
  D14():
    deopt 55 [r33, r37, w2];
  D16():
    deopt 61 [r51, r52, r56];
  L9(r64, r65, r66):
    r78 = `+`(r65, r66);
    r79 = `*`(r64, r78);
    r80 = `/`(r79, 2.0);
    st val = r80;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L58() else L59();
  L48():
    w3 = force? w2;
    checkMissing(w3);
    zw2 = ld zw;
    check L49() else D15();
  L50():
    goto L7(r51, r52, r56);
  L52():
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L54() else L55();
  L53():
    r63 = dyn base7(<lang sum(`^`(res, 2.0))>);
    goto L9(r43, r58, r63);
  D15():
    deopt 56 [r33, r37, w3, zw2];
  L10(r72, r73, r74):
    r77 = log(r74, 2.718281828459045);
    goto L9(r72, r73, r77);
  L11(r84, r85):
    r89 = `+`(r84, r85);
    l = ld val;
    attr__ = ldf `attr<-`;
    check L63() else D23();
  L49():
    zw3 = force? zw2;
    checkMissing(zw3);
    r54 = `+`(w3, zw3);
    r55 = log(r54, 2.718281828459045);
    goto L8(r33, r37, r55);
  L54():
    res2 = ld res;
    check L56() else D18();
  L55():
    r71 = dyn base8(<lang `^`(res, 2.0)>);
    goto L10(r43, r58, r71);
  L58():
    coef = ldf coef;
    check L60() else D20();
  L59():
    r83 = dyn base9(<lang coef(object)>);
    goto L11(1, r83);
  D18():
    deopt 67 [r43, r58, res2];
  D20():
    deopt 83 [1];
  D23():
    deopt 90 [r89, l, r89];
  L56():
    res3 = force? res2;
    checkMissing(res3);
    r75 = `^`(res3, 2.0);
    sum2 = ldf sum in base;
    r76 = dyn sum2(r75);
    check L57() else D19();
  L60():
    p2 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r87 = dyn coef(p2);
    check L61() else D21();
  L63():
    r90 = dyn attr__(l, NULL, "df", r89);
    check L64() else D24();
  D19():
    deopt 72 [r43, r58, r76];
  D21():
    deopt 85 [1, r87];
  D24():
    deopt 93 [r89, r90];
  L57():
    goto L10(r43, r58, r76);
  L61():
    length1 = ldf length in base;
    r88 = dyn length1(r87);
    check L62() else D22();
  L64():
    st val = r90;
    N8 = ld N;
    check L65() else D25();
  D22():
    deopt 87 [1, r88];
  D25():
    deopt 95 [N8];
  L62():
    goto L11(1, r88);
  L65():
    N9 = force? N8;
    checkMissing(N9);
    l1 = ld val;
    attr__1 = ldf `attr<-`;
    check L66() else D26();
  D26():
    deopt 98 [N9, l1, N9];
  L66():
    r91 = dyn attr__1(l1, NULL, "nall", N9);
    check L67() else D27();
  D27():
    deopt 101 [N9, r91];
  L67():
    st val = r91;
    l2 = ld val;
    attr__2 = ldf `attr<-`;
    check L68() else D28();
  D28():
    deopt 104 [N9, l2, N9];
  L68():
    r92 = dyn attr__2(l2, NULL, "nobs", N9);
    check L69() else D29();
  D29():
    deopt 107 [N9, r92];
  L69():
    st val = r92;
    l3 = ld val;
    class__ = ldf `class<-`;
    check L70() else D30();
  D30():
    deopt 112 ["logLik", l3, "logLik"];
  L70():
    r93 = dyn class__(l3, NULL, "logLik");
    check L71() else D31();
  D31():
    deopt 114 ["logLik", r93];
  L71():
    st val = r93;
    val = ld val;
    check L72() else D32();
  D32():
    deopt 116 [val];
  L72():
    val1 = force? val;
    checkMissing(val1);
    popenv;
    return val1;
  }
}