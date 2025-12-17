fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner5504565;
    st `.chooseMirror` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner5504565(m, label, graphics, ind) {
  (reg m:*, reg label:*, reg graphics:*, reg ind:*) -+> V { var m:*, var label:*, var graphics:*, var ind:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ind1:*, reg ind2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg interactive:cls, reg r4:V, reg r5:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg label1:*, reg label2:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ind3:*, reg ind4:V, reg length:cls, reg r11:V, reg c11:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg ind5:*, reg ind6:V, reg as_integer:cls, reg r14:V, reg c12:L, reg r16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg startsWith:cls, reg m1:*, reg m2:V, reg c13:L, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg grepl:cls, reg m5:*, reg m6:V, reg c14:L, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r21:V, reg p2:p(V +), reg r23:V, reg r24:V, reg m9:*, reg m10:V, reg c15:L, reg m12:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg isHTTPS:*, reg isHTTPS1:V, reg __3:cls, reg r25:V, reg m13:*, reg m14:V, reg c16:L, reg m16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg isHTTPS2:*, reg isHTTPS3:V, reg r26:V, reg __4:cls, reg r27:V, reg paste:cls, reg label3:*, reg label4:V, reg p3:p(V +), reg r29:V, reg paste1:cls, reg label5:*, reg label6:V, reg p4:p(V +), reg r31:V, reg mHTTPS:*, reg mHTTPS1:V, reg menu:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg m17:*, reg m18:V, reg c17:L, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r34:V, reg c18:cls, reg r35:V, reg p5:p(V +), reg graphics1:*, reg graphics2:V, reg p6:p(V +), reg httpsLabel:*, reg httpsLabel1:V, reg p7:p(V +), reg r39:V, reg res:*, reg res1:V, reg nrow:cls, reg m21:*, reg m22:V, reg p8:p(V +), reg r41:V, reg r42:V, reg c19:L, reg mHTTP:*, reg mHTTP1:V, reg menu1:cls, reg m23:*, reg m24:V, reg c20:L, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __6:cls, reg r43:V, reg p9:p(V +), reg graphics3:*, reg graphics4:V, reg p10:p(V +), reg httpLabel:*, reg httpLabel1:V, reg p11:p(V +), reg r47:V, reg res2:*, reg res3:V, reg r48:V, reg c21:L, reg m27:*, reg m28:V, reg c22:L, reg m30:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg res4:*, reg res5:V, reg __7:cls, reg r49:V, reg m31:*, reg m32:V, reg c23:L, reg m34:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg res6:*, reg res7:V, reg __8:cls, reg r50:V, reg l:*, reg names__:cls, reg r51:V, reg sub:cls, reg URL:*, reg URL1:V, reg c24:L, reg URL3:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg __9:cls, reg r52:V, reg p12:p(V +), reg r54:V, reg character:cls, reg r55:V |
    mkenv;
    st m = m;
    st label = label;
    st graphics = graphics;
    st ind = ind;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L1(c1);
  L16():
    ind1 = ld ind;
    check L18() else D0();
  L17():
    r = dyn base(<sym ind>);
    goto L0(r);
  D0():
    deopt 1 [ind1];
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L24() else L3();
  L18():
    ind2 = force? ind1;
    checkMissing(ind2);
    c = `==`(ind2, NULL);
    goto L0(c);
  L19():
    sym1 = ldf interactive;
    base1 = ldf interactive in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L2(c6, r3):
    r5 = `!`(r3);
    c7 = `as.logical`(r5);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3():
    goto L4();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L20():
    interactive = ldf interactive in base;
    r4 = dyn interactive();
    check L22() else D1();
  L21():
    r2 = dyn base1();
    goto L2(c1, r2);
  L24():
    stop = ldf stop;
    check L25() else D2();
  D1():
    deopt 7 [c1, r4];
  D2():
    deopt 11 [];
  L5(r10):
    c11 = `as.logical`(r10);
    if c11 then L32() else L6();
  L22():
    goto L2(c1, r4);
  L25():
    p = prom<V +>{
      label1 = ld label;
      label2 = force? label1;
      checkMissing(label2);
      return label2;
    };
    r7 = dyn stop("cannot choose a ", p, " mirror non-interactively");
    check L26() else D3();
  L28():
    ind3 = ld ind;
    check L30() else D4();
  L29():
    r9 = dyn base2(<sym ind>);
    goto L5(r9);
  D3():
    deopt 15 [r7];
  D4():
    deopt 20 [ind3];
  L6():
    startsWith = ldf startsWith;
    check L41() else D8();
  L9():
    res2 = ld res;
    check L70() else D29();
  L26():
    goto L4();
  L30():
    ind4 = force? ind3;
    checkMissing(ind4);
    length = ldf length in base;
    r11 = dyn length(ind4);
    check L31() else D5();
  L32():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D5():
    deopt 23 [r11];
  D8():
    deopt 35 [];
  D29():
    deopt 106 [res2];
  L7(r13):
    c12 = `is.object`(r13);
    if c12 then L37() else L38(r13);
  L31():
    goto L5(r11);
  L33():
    ind5 = ld ind;
    check L35() else D6();
  L34():
    r12 = dyn base3(<sym ind>);
    goto L7(r12);
  L41():
    p1 = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      c13 = `is.object`(m2);
      if c13 then L1() else L2();
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", m2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r18 = dyn __1(m2, <missing>, "URL");
      goto L0(r18);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    r20 = dyn startsWith(p1, "https");
    check L42() else D9();
  L70():
    res3 = force? res2;
    checkMissing(res3);
    r48 = `>`(res3, 0);
    c21 = `as.logical`(r48);
    if c21 then L71() else L13();
  D6():
    deopt 26 [ind5];
  D9():
    deopt 38 [r20];
  L8(dx1):
    st res = dx1;
    goto L9();
  L13():
    character = ldf character;
    check L87() else D38();
  L35():
    ind6 = force? ind5;
    checkMissing(ind6);
    as_integer = ldf `as.integer` in base;
    r14 = dyn as_integer(ind6);
    check L36() else D7();
  L37():
    dr = tryDispatchBuiltin.1("[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(r16):
    __ = ldf `[` in base;
    r17 = dyn __(r16, 1);
    goto L8(r17);
  L42():
    grepl = ldf grepl;
    check L43() else D10();
  L71():
    m27 = ld m;
    check L72() else D30();
  D7():
    deopt 29 [r14];
  D10():
    deopt 39 [r20];
  D30():
    deopt 110 [m27];
  D38():
    deopt 135 [];
  L36():
    goto L7(r14);
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L43():
    p2 = prom<V +>{
      m5 = ld m;
      m6 = force? m5;
      checkMissing(m6);
      c14 = `is.object`(m6);
      if c14 then L1() else L2();
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", m6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r21 = dyn __2(m6, <missing>, "Comment");
      goto L0(r21);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r23 = dyn grepl[, , fixed]("secure_mirror_from_master", p2, TRUE);
    check L44() else D11();
  L72():
    m28 = force? m27;
    checkMissing(m28);
    c22 = `is.object`(m28);
    if c22 then L73() else L74(m28);
  L87():
    r55 = dyn character();
    check L88() else D39();
  D11():
    deopt 44 [r20, r23];
  D39():
    deopt 136 [r55];
  L14(dx16):
    st URL = dx16;
    m31 = ld m;
    check L77() else D32();
  L44():
    r24 = `&&`(r20, r23);
    st isHTTPS = r24;
    m9 = ld m;
    check L45() else D12();
  L73():
    dr14 = tryDispatchBuiltin.1("[", m28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L75() else L74(dr14);
  L74(m30):
    res4 = ld res;
    check L76() else D31();
  L88():
    popenv;
    return r55;
  D12():
    deopt 47 [m9];
  D31():
    deopt 112 [m30, res4];
  D32():
    deopt 117 [m31];
  L45():
    m10 = force? m9;
    checkMissing(m10);
    c15 = `is.object`(m10);
    if c15 then L46() else L47(m10);
  L75():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L14(dx15);
  L76():
    res5 = force? res4;
    __7 = ldf `[` in base;
    r49 = dyn __7(m30, res5, "URL");
    goto L14(r49);
  L77():
    m32 = force? m31;
    checkMissing(m32);
    c23 = `is.object`(m32);
    if c23 then L78() else L79(m32);
  L10(dx8):
    st mHTTPS = dx8;
    m13 = ld m;
    check L50() else D14();
  L15(dx18):
    l = ld URL;
    names__ = ldf `names<-`;
    check L82() else D34();
  L46():
    dr6 = tryDispatchBuiltin.1("[", m10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(dr6);
  L47(m12):
    isHTTPS = ld isHTTPS;
    check L49() else D13();
  L78():
    dr16 = tryDispatchBuiltin.1("[", m32);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L80() else L79(dr16);
  L79(m34):
    res6 = ld res;
    check L81() else D33();
  D13():
    deopt 49 [m12, isHTTPS];
  D14():
    deopt 55 [m13];
  D33():
    deopt 119 [m34, res6];
  D34():
    deopt 124 [dx18, l, dx18];
  L48():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx7);
  L49():
    isHTTPS1 = force? isHTTPS;
    __3 = ldf `[` in base;
    r25 = dyn __3(m10, isHTTPS1, <missing>);
    goto L10(r25);
  L50():
    m14 = force? m13;
    checkMissing(m14);
    c16 = `is.object`(m14);
    if c16 then L51() else L52(m14);
  L80():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L15(dx17);
  L81():
    res7 = force? res6;
    __8 = ldf `[` in base;
    r50 = dyn __8(m34, res7, "Name");
    goto L15(r50);
  L82():
    r51 = dyn names__(l, NULL, dx18);
    check L83() else D35();
  D35():
    deopt 126 [dx18, r51];
  L11(dx10):
    st mHTTP = dx10;
    paste = ldf paste;
    check L55() else D16();
  L51():
    dr8 = tryDispatchBuiltin.1("[", m14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(dr8);
  L52(m16):
    isHTTPS2 = ld isHTTPS;
    check L54() else D15();
  L83():
    st URL = r51;
    sub = ldf sub;
    check L84() else D36();
  D15():
    deopt 57 [m16, isHTTPS2];
  D16():
    deopt 65 [];
  D36():
    deopt 129 [];
  L53():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx9);
  L54():
    isHTTPS3 = force? isHTTPS2;
    checkMissing(isHTTPS3);
    r26 = `!`(isHTTPS3);
    __4 = ldf `[` in base;
    r27 = dyn __4(m14, r26, <missing>);
    goto L11(r27);
  L55():
    p3 = prom<V +>{
      label3 = ld label;
      label4 = force? label3;
      checkMissing(label4);
      return label4;
    };
    r29 = dyn paste("Secure", p3, "mirrors");
    check L56() else D17();
  L84():
    p12 = prom<V +>{
      URL = ld URL;
      URL1 = force? URL;
      checkMissing(URL1);
      c24 = `is.object`(URL1);
      if c24 then L1() else L2(URL1);
    L0(dx20):
      return dx20;
    L1():
      dr18 = tryDispatchBuiltin.1("[", URL1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(URL3):
      __9 = ldf `[` in base;
      r52 = dyn __9(URL3, 1);
      goto L0(r52);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx19);
    };
    r54 = dyn sub("/$", "", p12);
    check L85() else D37();
  D17():
    deopt 69 [r29];
  D37():
    deopt 133 [r54];
  L56():
    st httpsLabel = r29;
    paste1 = ldf paste;
    check L57() else D18();
  L85():
    popenv;
    return r54;
  D18():
    deopt 72 [];
  L57():
    p4 = prom<V +>{
      label5 = ld label;
      label6 = force? label5;
      checkMissing(label6);
      return label6;
    };
    r31 = dyn paste1("Other", p4, "mirrors");
    check L58() else D19();
  D19():
    deopt 76 [r31];
  L58():
    st httpLabel = r31;
    mHTTPS = ld mHTTPS;
    check L59() else D20();
  D20():
    deopt 78 [mHTTPS];
  L59():
    mHTTPS1 = force? mHTTPS;
    checkMissing(mHTTPS1);
    st m = mHTTPS1;
    menu = ldf menu;
    check L60() else D21();
  D21():
    deopt 82 [];
  L60():
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r33):
      return r33;
    L2():
      m17 = ld m;
      m18 = force? m17;
      checkMissing(m18);
      c17 = `is.object`(m18);
      if c17 then L4() else L5();
    L3():
      r32 = dyn base4(<lang `[`(m, , 1)>, "(other mirrors)");
      goto L0(r32);
    L1(dx12):
      c18 = ldf c in base;
      r35 = dyn c18(dx12, "(other mirrors)");
      goto L0(r35);
    L4():
      dr10 = tryDispatchBuiltin.1("[", m18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5();
    L5():
      __5 = ldf `[` in base;
      r34 = dyn __5(m18, <missing>, 1);
      goto L1(r34);
    L6():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx11);
    };
    p6 = prom<V +>{
      graphics1 = ld graphics;
      graphics2 = force? graphics1;
      checkMissing(graphics2);
      return graphics2;
    };
    p7 = prom<V +>{
      httpsLabel = ld httpsLabel;
      httpsLabel1 = force? httpsLabel;
      checkMissing(httpsLabel1);
      return httpsLabel1;
    };
    r39 = dyn menu(p5, p6, p7);
    check L61() else D22();
  D22():
    deopt 86 [r39];
  L61():
    st res = r39;
    res = ld res;
    check L62() else D23();
  D23():
    deopt 88 [res];
  L62():
    res1 = force? res;
    checkMissing(res1);
    nrow = ldf nrow;
    check L63() else D24();
  D24():
    deopt 90 [res1];
  L63():
    p8 = prom<V +>{
      m21 = ld m;
      m22 = force? m21;
      checkMissing(m22);
      return m22;
    };
    r41 = dyn nrow(p8);
    check L64() else D25();
  D25():
    deopt 92 [res1, r41];
  L64():
    r42 = `>`(res1, r41);
    c19 = `as.logical`(r42);
    if c19 then L65() else L12();
  L12():
    goto L9();
  L65():
    mHTTP = ld mHTTP;
    check L66() else D26();
  D26():
    deopt 94 [mHTTP];
  L66():
    mHTTP1 = force? mHTTP;
    checkMissing(mHTTP1);
    st m = mHTTP1;
    menu1 = ldf menu;
    check L67() else D27();
  D27():
    deopt 98 [];
  L67():
    p9 = prom<V +>{
      m23 = ld m;
      m24 = force? m23;
      checkMissing(m24);
      c20 = `is.object`(m24);
      if c20 then L1() else L2();
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", m24);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r43 = dyn __6(m24, <missing>, 1);
      goto L0(r43);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    p10 = prom<V +>{
      graphics3 = ld graphics;
      graphics4 = force? graphics3;
      checkMissing(graphics4);
      return graphics4;
    };
    p11 = prom<V +>{
      httpLabel = ld httpLabel;
      httpLabel1 = force? httpLabel;
      checkMissing(httpLabel1);
      return httpLabel1;
    };
    r47 = dyn menu1(p9, p10, p11);
    check L68() else D28();
  D28():
    deopt 102 [r47];
  L68():
    st res = r47;
    goto L9();
  }
}