fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg with:cls, reg cars:*, reg cars1:V, reg p1:p(V +), reg plot:cls, reg speed:*, reg speed1:V, reg p2:p(V +), reg dist:*, reg dist1:V, reg p3:p(V +), reg lines:cls, reg supsmu:cls, reg speed2:*, reg speed3:V, reg p4:p(V +), reg dist2:*, reg dist3:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg lines1:cls, reg supsmu1:cls, reg speed4:*, reg speed5:V, reg p7:p(V +), reg dist4:*, reg dist5:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V |
    mkenv;
    r = clos inner2605600262;
    st supsmu = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    popenv;
    return r6;
  L4():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    with = ldf with;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym cars>, <lang {
      plot(speed, dist);
      lines(supsmu(speed, dist));
      lines(supsmu(speed, dist, bass=7.0), lty=2.0)
    }>);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L5():
    goto L0();
  L8():
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    p10 = prom<V +>{
      plot = ldf plot;
      p2 = prom<V +>{
        speed = ld speed;
        speed1 = force? speed;
        checkMissing(speed1);
        return speed1;
      };
      p3 = prom<V +>{
        dist = ld dist;
        dist1 = force? dist;
        checkMissing(dist1);
        return dist1;
      };
      dyn plot(p2, p3);
      lines = ldf lines;
      p6 = prom<V +>{
        supsmu = ldf supsmu;
        p4 = prom<V +>{
          speed2 = ld speed;
          speed3 = force? speed2;
          checkMissing(speed3);
          return speed3;
        };
        p5 = prom<V +>{
          dist2 = ld dist;
          dist3 = force? dist2;
          checkMissing(dist3);
          return dist3;
        };
        r13 = dyn supsmu(p4, p5);
        return r13;
      };
      dyn lines(p6);
      lines1 = ldf lines;
      p9 = prom<V +>{
        supsmu1 = ldf supsmu;
        p7 = prom<V +>{
          speed4 = ld speed;
          speed5 = force? speed4;
          checkMissing(speed5);
          return speed5;
        };
        p8 = prom<V +>{
          dist4 = ld dist;
          dist5 = force? dist4;
          checkMissing(dist5);
          return dist5;
        };
        r18 = dyn supsmu1[, , bass](p7, p8, 7.0);
        return r18;
      };
      r20 = dyn lines1[, lty](p9, 2.0);
      return r20;
    };
    r22 = dyn with(p1, p10);
    check L9() else D3();
  D3():
    deopt 13 [r22];
  L9():
    goto L1(r22);
  }
}
fun inner2605600262(x, y, wt, span, periodic, bass, trace) {
  (reg x:*, reg y:*, reg wt:*, reg span:*, reg periodic:*, reg bass:*, reg trace:*) -+> V { var x:*, var y:*, var wt:*, reg wt_isMissing:L, reg wt_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), var span:*, reg span_isMissing:L, reg span_orDefault:*, var periodic:*, reg periodic_isMissing:L, reg periodic_orDefault:*, var bass:*, reg bass_isMissing:L, reg bass_orDefault:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, reg span1:*, reg span2:V, reg r4:V, reg c:L, reg span3:*, reg span4:V, reg r6:V, reg c1:L, reg c2:V, reg span5:*, reg span6:V, reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg y1:*, reg y2:V, reg length:cls, reg r11:V, reg n:*, reg n1:V, reg r12:V, reg c8:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg c13:L, reg r14:V, reg y3:*, reg y4:V, reg is_numeric:cls, reg r15:V, reg r16:V, reg c14:L, reg c15:V, reg c17:L, reg stop1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x1:*, reg x2:V, reg length1:cls, reg r21:V, reg n2:*, reg n3:V, reg r22:V, reg c18:L, reg stop2:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg wt1:*, reg wt2:V, reg length2:cls, reg r27:V, reg n4:*, reg n5:V, reg r28:V, reg c19:L, reg stop3:cls, reg r29:V, reg periodic1:*, reg periodic2:V, reg c20:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg x3:*, reg x4:V, reg range:cls, reg r33:V, reg xrange:*, reg xrange1:V, reg c21:L, reg xrange3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r34:V, reg r35:V, reg c22:L, reg c23:V, reg xrange4:*, reg xrange5:V, reg c25:L, reg c27:L, reg xrange7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c29:L, reg dx3:V, reg __1:cls, reg r36:V, reg r37:V, reg c30:L, reg c31:V, reg c33:L, reg stop4:cls, reg r38:V, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg x5:*, reg x6:V, reg y5:*, reg y6:V, reg r43:V, reg wt3:*, reg wt4:V, reg r44:V, reg is_finite:cls, reg r45:V, reg order:cls, reg x7:*, reg x8:V, reg c34:L, reg x10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg okay:*, reg okay1:V, reg __2:cls, reg r46:V, reg p1:p(V +), reg y7:*, reg y8:V, reg c35:L, reg y10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg okay2:*, reg okay3:V, reg __3:cls, reg r48:V, reg p2:p(V +), reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg okay4:*, reg okay5:V, reg r53:V, reg cumsum:cls, reg r54:V, reg c36:L, reg r56:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg okay6:*, reg okay7:V, reg __4:cls, reg r57:V, reg c37:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg ord:*, reg ord1:V, reg __5:cls, reg r58:V, reg ord2:*, reg ord3:V, reg r59:V, reg x11:*, reg x12:V, reg c38:L, reg x14:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg ord4:*, reg ord5:V, reg __6:cls, reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg ord6:*, reg ord7:V, reg length3:cls, reg r63:V, reg leno:*, reg leno1:V, reg r64:V, reg c39:L, reg stop5:cls, reg r65:V, reg n6:*, reg n7:V, reg leno2:*, reg leno3:V, reg r67:V, reg c40:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg diff:*, reg diff1:V, reg p3:p(V +), reg r69:V, reg p4:p(V +), reg diff2:*, reg diff3:V, reg p5:p(V +), reg r72:V, reg p6:p(V +), reg r74:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg C_setsmu:*, reg C_setsmu1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r78:V, reg r79:V, reg trace1:*, reg trace2:V, reg as_integer:cls, reg r80:V, reg _Fortran:cls, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg C_supsmu:*, reg C_supsmu1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg r85:V, reg leno4:*, reg leno5:V, reg as_integer1:cls, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg xo:*, reg xo1:V, reg as_double:cls, reg r89:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg y11:*, reg y12:V, reg c41:L, reg y14:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg ord8:*, reg ord9:V, reg __7:cls, reg r92:V, reg as_double1:cls, reg r93:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r94:V, reg r95:V, reg wt5:*, reg wt6:V, reg c42:L, reg wt8:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg ord10:*, reg ord11:V, reg __8:cls, reg r96:V, reg as_double2:cls, reg r97:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg iper:*, reg iper1:V, reg as_integer2:cls, reg r100:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r101:V, reg r102:V, reg span7:*, reg span8:V, reg as_double3:cls, reg r103:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg bass1:*, reg bass2:V, reg as_double4:cls, reg r106:V, reg double:cls, reg leno6:*, reg leno7:V, reg p7:p(V +), reg r108:V, reg double1:cls, reg n8:*, reg n9:V, reg r109:V, reg p8:p(V +), reg r111:V, reg double2:cls, reg r112:V, reg _Fortran1:cls, reg r113:V, reg c43:L, reg r115:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r116:V, reg duplicated:cls, reg xo2:*, reg xo3:V, reg p9:p(V +), reg r118:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r119:V, reg r120:V, reg xo4:*, reg xo5:V, reg c44:L, reg xo7:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg dupx:*, reg dupx1:V, reg r121:V, reg __9:cls, reg r122:V, reg smo:*, reg smo1:V, reg c45:L, reg smo3:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg dupx2:*, reg dupx3:V, reg r123:V, reg __10:cls, reg r124:V, reg list:cls, reg r125:V |
    mkenv;
    st x = x;
    st y = y;
    wt_isMissing = missing.0(wt);
    if wt_isMissing then L0() else L1(wt);
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(1.0, <sym n>);
      goto L0(r2);
    L2():
      r = dyn base(1.0, <sym n>);
      goto L0(r);
    };
    goto L1(p);
  L1(wt_orDefault):
    st wt = wt_orDefault;
    span_isMissing = missing.0(span);
    if span_isMissing then L2("cv") else L2(span);
  L2(span_orDefault):
    st span = span_orDefault;
    periodic_isMissing = missing.0(periodic);
    if periodic_isMissing then L3(FALSE) else L3(periodic);
  L3(periodic_orDefault):
    st periodic = periodic_orDefault;
    bass_isMissing = missing.0(bass);
    if bass_isMissing then L4(0.0) else L4(bass);
  L4(bass_orDefault):
    st bass = bass_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L5(FALSE) else L5(trace);
  L5(trace_orDefault):
    st trace = trace_orDefault;
    span1 = ld span;
    check L54() else D0();
  D0():
    deopt 0 [span1];
  L54():
    span2 = force? span1;
    checkMissing(span2);
    r4 = `==`(span2, "cv");
    c = `as.logical`(r4);
    if c then L55() else L6();
  L6():
    span3 = ld span;
    check L57() else D1();
  L7():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L65() else L66();
  L55():
    st span = 0.0;
    goto L7();
  D1():
    deopt 7 [span3];
  L10(r10):
    st n = r10;
    n = ld n;
    check L69() else D7();
  L57():
    span4 = force? span3;
    checkMissing(span4);
    r6 = `<`(span4, 0.0);
    c1 = `as.logical`(r6);
    if c1 then L8(c1) else L58();
  L65():
    y1 = ld y;
    check L67() else D5();
  L66():
    r9 = dyn base1(<sym y>);
    goto L10(r9);
  D5():
    deopt 24 [y1];
  D7():
    deopt 29 [n];
  L8(c2):
    c7 = `as.logical`(c2);
    if c7 then L61() else L9();
  L58():
    span5 = ld span;
    check L59() else D2();
  L67():
    y2 = force? y1;
    checkMissing(y2);
    length = ldf length in base;
    r11 = dyn length(y2);
    check L68() else D6();
  L69():
    n1 = force? n;
    checkMissing(n1);
    r12 = `!`(n1);
    c8 = `as.logical`(r12);
    if c8 then L11(c8) else L70();
  D2():
    deopt 11 [c1, span5];
  D6():
    deopt 27 [r11];
  L9():
    goto L7();
  L11(c9):
    c17 = `as.logical`(c9);
    if c17 then L76() else L13();
  L59():
    span6 = force? span5;
    checkMissing(span6);
    r7 = `>`(span6, 1.0);
    c4 = `as.logical`(r7);
    c5 = `||`(c1, c4);
    goto L8(c5);
  L61():
    stop = ldf stop;
    check L62() else D3();
  L68():
    goto L10(r11);
  L70():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  D3():
    deopt 17 [];
  L12(c13, r14):
    r16 = `!`(r14);
    c14 = `as.logical`(r16);
    c15 = `||`(c13, c14);
    goto L11(c15);
  L13():
    goto L14();
  L14():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L62():
    r8 = dyn stop("'span' must be between 0 and 1.");
    check L63() else D4();
  L71():
    y3 = ld y;
    check L73() else D8();
  L72():
    r13 = dyn base2(<sym y>);
    goto L12(c8, r13);
  L76():
    stop1 = ldf stop;
    check L77() else D10();
  D4():
    deopt 19 [r8];
  D8():
    deopt 34 [c8, y3];
  D10():
    deopt 41 [];
  L15(r20):
    n2 = ld n;
    check L84() else D14();
  L63():
    goto L7();
  L73():
    y4 = force? y3;
    checkMissing(y4);
    is_numeric = ldf `is.numeric` in base;
    r15 = dyn is_numeric(y4);
    check L74() else D9();
  L77():
    r17 = dyn stop1("'y' must be numeric vector");
    check L78() else D11();
  L80():
    x1 = ld x;
    check L82() else D12();
  L81():
    r19 = dyn base3(<sym x>);
    goto L15(r19);
  D9():
    deopt 37 [c8, r15];
  D11():
    deopt 43 [r17];
  D12():
    deopt 48 [x1];
  D14():
    deopt 51 [r20, n2];
  L74():
    goto L12(c8, r15);
  L78():
    goto L14();
  L82():
    x2 = force? x1;
    checkMissing(x2);
    length1 = ldf length in base;
    r21 = dyn length1(x2);
    check L83() else D13();
  L84():
    n3 = force? n2;
    checkMissing(n3);
    r22 = `!=`(r20, n3);
    c18 = `as.logical`(r22);
    if c18 then L85() else L16();
  D13():
    deopt 51 [r21];
  L16():
    goto L17();
  L17():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L89() else L90();
  L83():
    goto L15(r21);
  L85():
    stop2 = ldf stop;
    check L86() else D15();
  D15():
    deopt 55 [];
  L18(r26):
    n4 = ld n;
    check L93() else D19();
  L86():
    r23 = dyn stop2("number of observations in 'x' and 'y' must match.");
    check L87() else D16();
  L89():
    wt1 = ld wt;
    check L91() else D17();
  L90():
    r25 = dyn base4(<sym wt>);
    goto L18(r25);
  D16():
    deopt 57 [r23];
  D17():
    deopt 62 [wt1];
  D19():
    deopt 65 [r26, n4];
  L87():
    goto L17();
  L91():
    wt2 = force? wt1;
    checkMissing(wt2);
    length2 = ldf length in base;
    r27 = dyn length2(wt2);
    check L92() else D18();
  L93():
    n5 = force? n4;
    checkMissing(n5);
    r28 = `!=`(r26, n5);
    c19 = `as.logical`(r28);
    if c19 then L94() else L19();
  D18():
    deopt 65 [r27];
  L19():
    goto L20();
  L20():
    periodic1 = ld periodic;
    check L98() else D22();
  L92():
    goto L18(r27);
  L94():
    stop3 = ldf stop;
    check L95() else D20();
  D20():
    deopt 69 [];
  D22():
    deopt 74 [periodic1];
  L95():
    r29 = dyn stop3("number of weights must match number of observations.");
    check L96() else D21();
  L98():
    periodic2 = force? periodic1;
    checkMissing(periodic2);
    c20 = `as.logical`(periodic2);
    if c20 then L99() else L21();
  D21():
    deopt 71 [r29];
  L21():
    st iper = 1;
    goto L28();
  L28():
    sym6 = ldf `is.finite`;
    base6 = ldf `is.finite` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L119() else L120();
  L96():
    goto L20();
  L99():
    st iper = 2;
    sym5 = ldf range;
    base5 = ldf range in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L22(r32):
    st xrange = r32;
    xrange = ld xrange;
    check L104() else D25();
  L29(r42):
    st okay = r42;
    order = ldf order;
    check L125() else D33();
  L100():
    x3 = ld x;
    check L102() else D23();
  L101():
    r31 = dyn base5(<sym x>);
    goto L22(r31);
  L119():
    x5 = ld x;
    check L121() else D29();
  L120():
    r41 = dyn base6(<lang `+`(`+`(x, y), wt)>);
    goto L29(r41);
  D23():
    deopt 81 [x3];
  D25():
    deopt 86 [xrange];
  D29():
    deopt 112 [x5];
  D33():
    deopt 122 [];
  L102():
    x4 = force? x3;
    checkMissing(x4);
    range = ldf range in base;
    r33 = dyn range(x4);
    check L103() else D24();
  L104():
    xrange1 = force? xrange;
    checkMissing(xrange1);
    c21 = `is.object`(xrange1);
    if c21 then L105() else L106(xrange1);
  L121():
    x6 = force? x5;
    checkMissing(x6);
    y5 = ld y;
    check L122() else D30();
  L125():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c34 = `is.object`(x8);
      if c34 then L1() else L2(x8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x10):
      okay = ld okay;
      okay1 = force? okay;
      __2 = ldf `[` in base;
      r46 = dyn __2(x10, okay1);
      goto L0(r46);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c35 = `is.object`(y8);
      if c35 then L1() else L2(y8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(y10):
      okay2 = ld okay;
      okay3 = force? okay2;
      __3 = ldf `[` in base;
      r48 = dyn __3(y10, okay3);
      goto L0(r48);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r50 = dyn order(p1, p2);
    check L126() else D34();
  D24():
    deopt 84 [r33];
  D30():
    deopt 113 [x6, y5];
  D34():
    deopt 125 [r50];
  L23(dx1):
    r35 = `<`(dx1, 0.0);
    c22 = `as.logical`(r35);
    if c22 then L24(c22) else L108();
  L103():
    goto L22(r33);
  L105():
    dr = tryDispatchBuiltin.1("[", xrange1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L107() else L106(dr);
  L106(xrange3):
    __ = ldf `[` in base;
    r34 = dyn __(xrange3, 1);
    goto L23(r34);
  L122():
    y6 = force? y5;
    checkMissing(y6);
    r43 = `+`(x6, y6);
    wt3 = ld wt;
    check L123() else D31();
  L126():
    st ord = r50;
    sym7 = ldf cumsum;
    base7 = ldf cumsum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L127() else L128();
  D31():
    deopt 115 [r43, wt3];
  L24(c23):
    c33 = `as.logical`(c23);
    if c33 then L114() else L26();
  L30(r52):
    c36 = `is.object`(r52);
    if c36 then L131() else L132(r52);
  L107():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L108():
    xrange4 = ld xrange;
    check L109() else D26();
  L123():
    wt4 = force? wt3;
    checkMissing(wt4);
    r44 = `+`(r43, wt4);
    is_finite = ldf `is.finite` in base;
    r45 = dyn is_finite(r44);
    check L124() else D32();
  L127():
    okay4 = ld okay;
    check L129() else D35();
  L128():
    r51 = dyn base7(<lang `!`(okay)>);
    goto L30(r51);
  D26():
    deopt 93 [c22, xrange4];
  D32():
    deopt 119 [r45];
  D35():
    deopt 129 [okay4];
  L26():
    goto L27(NULL);
  L27(r39):
    goto L28();
  L31(dx9):
    c37 = `is.object`(dx9);
    if c37 then L135() else L136(dx9);
  L109():
    xrange5 = force? xrange4;
    checkMissing(xrange5);
    c25 = `is.object`(xrange5);
    if c25 then L110() else L111(c22, xrange5);
  L114():
    stop4 = ldf stop;
    check L115() else D27();
  L124():
    goto L29(r45);
  L129():
    okay5 = force? okay4;
    checkMissing(okay5);
    r53 = `!`(okay5);
    cumsum = ldf cumsum in base;
    r54 = dyn cumsum(r53);
    check L130() else D36();
  L131():
    dr8 = tryDispatchBuiltin.1("[", r52);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L133() else L132(dr8);
  L132(r56):
    okay6 = ld okay;
    check L134() else D37();
  D27():
    deopt 102 [];
  D36():
    deopt 133 [r54];
  D37():
    deopt 134 [r56, okay6];
  L25(c29, dx3):
    r37 = `>`(dx3, 1.0);
    c30 = `as.logical`(r37);
    c31 = `||`(c29, c30);
    goto L24(c31);
  L32(dx13):
    ord2 = ld ord;
    check L139() else D39();
  L110():
    dr2 = tryDispatchBuiltin.1("[", xrange5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L112() else L111(c22, dr2);
  L111(c27, xrange7):
    __1 = ldf `[` in base;
    r36 = dyn __1(xrange7, 2);
    goto L25(c27, r36);
  L115():
    r38 = dyn stop4("'x' must be between 0 and 1 for periodic smooth");
    check L116() else D28();
  L130():
    goto L30(r54);
  L133():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L31(dx8);
  L134():
    okay7 = force? okay6;
    __4 = ldf `[` in base;
    r57 = dyn __4(r56, okay7);
    goto L31(r57);
  L135():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L137() else L136(dr10);
  L136(dx11):
    ord = ld ord;
    check L138() else D38();
  D28():
    deopt 104 [r38];
  D38():
    deopt 137 [dx11, ord];
  D39():
    deopt 139 [dx13, ord2];
  L112():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(c22, dx2);
  L116():
    goto L27(r38);
  L137():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L32(dx12);
  L138():
    ord1 = force? ord;
    __5 = ldf `[` in base;
    r58 = dyn __5(dx11, ord1);
    goto L32(r58);
  L139():
    ord3 = force? ord2;
    checkMissing(ord3);
    r59 = `+`(dx13, ord3);
    st ord = r59;
    x11 = ld x;
    check L140() else D40();
  D40():
    deopt 143 [x11];
  L140():
    x12 = force? x11;
    checkMissing(x12);
    c38 = `is.object`(x12);
    if c38 then L141() else L142(x12);
  L33(dx15):
    st xo = dx15;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L145() else L146();
  L141():
    dr12 = tryDispatchBuiltin.1("[", x12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L143() else L142(dr12);
  L142(x14):
    ord4 = ld ord;
    check L144() else D41();
  D41():
    deopt 145 [x14, ord4];
  L34(r62):
    st leno = r62;
    leno = ld leno;
    check L149() else D44();
  L143():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L33(dx14);
  L144():
    ord5 = force? ord4;
    __6 = ldf `[` in base;
    r60 = dyn __6(x14, ord5);
    goto L33(r60);
  L145():
    ord6 = ld ord;
    check L147() else D42();
  L146():
    r61 = dyn base8(<sym ord>);
    goto L34(r61);
  D42():
    deopt 151 [ord6];
  D44():
    deopt 156 [leno];
  L147():
    ord7 = force? ord6;
    checkMissing(ord7);
    length3 = ldf length in base;
    r63 = dyn length3(ord7);
    check L148() else D43();
  L149():
    leno1 = force? leno;
    checkMissing(leno1);
    r64 = `==`(leno1, 0);
    c39 = `as.logical`(r64);
    if c39 then L150() else L35();
  D43():
    deopt 154 [r63];
  L35():
    goto L36();
  L36():
    n6 = ld n;
    check L154() else D47();
  L148():
    goto L34(r63);
  L150():
    stop5 = ldf stop;
    check L151() else D45();
  D45():
    deopt 161 [];
  D47():
    deopt 166 [n6];
  L151():
    r65 = dyn stop5("no finite observations");
    check L152() else D46();
  L154():
    n7 = force? n6;
    checkMissing(n7);
    leno2 = ld leno;
    check L155() else D48();
  D46():
    deopt 163 [r65];
  D48():
    deopt 167 [n7, leno2];
  L152():
    goto L36();
  L155():
    leno3 = force? leno2;
    checkMissing(leno3);
    r67 = `-`(n7, leno3);
    st diff = r67;
    c40 = `as.logical`(r67);
    if c40 then L156() else L37();
  L37():
    goto L38();
  L38():
    sym9 = ldf `.Fortran`;
    base9 = ldf `.Fortran` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L160() else L161();
  L156():
    warning = ldf warning;
    check L157() else D49();
  D49():
    deopt 172 [];
  L39():
    sym11 = ldf `.Fortran`;
    base11 = ldf `.Fortran` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L168() else L169();
  L157():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        ngettext = ldf ngettext;
        p3 = prom<V +>{
          diff = ld diff;
          diff1 = force? diff;
          checkMissing(diff1);
          return diff1;
        };
        r69 = dyn ngettext(p3, "%d observation with NA, NaN or Inf deleted", "%d observations with NAs, NaNs and/or Infs deleted");
        return r69;
      };
      p5 = prom<V +>{
        diff2 = ld diff;
        diff3 = force? diff2;
        checkMissing(diff3);
        return diff3;
      };
      r72 = dyn sprintf(p4, p5);
      return r72;
    };
    r74 = dyn warning[, domain](p6, NA_LGL);
    check L158() else D50();
  L160():
    C_setsmu = ld C_setsmu;
    check L162() else D51();
  L161():
    r76 = dyn base9(<sym C_setsmu>, <lang as.integer(trace)>);
    goto L39();
  D50():
    deopt 176 [r74];
  D51():
    deopt 181 [C_setsmu];
  L41(r83):
    c43 = `is.object`(r83);
    if c43 then L215() else L216(r83);
  L158():
    goto L38();
  L162():
    C_setsmu1 = force? C_setsmu;
    checkMissing(C_setsmu1);
    sym10 = ldf `as.integer`;
    base10 = ldf `as.integer` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L163() else L164();
  L168():
    C_supsmu = ld C_supsmu;
    check L170() else D55();
  L169():
    r82 = dyn base11[, , , , , , , , smo, , ](<sym C_supsmu>, <lang as.integer(leno)>, <lang as.double(xo)>, <lang as.double(`[`(y, ord))>, <lang as.double(`[`(wt, ord))>, <lang as.integer(iper)>, <lang as.double(span)>, <lang as.double(bass)>, <lang double(leno)>, <lang double(`*`(n, 7))>, <lang double(1)>);
    goto L41(r82);
  D55():
    deopt 193 [C_supsmu];
  L40(r79):
    _Fortran = ldf `.Fortran` in base;
    r81 = dyn _Fortran(C_setsmu1, r79);
    check L167() else D54();
  L163():
    trace1 = ld trace;
    check L165() else D52();
  L164():
    r78 = dyn base10(<sym trace>);
    goto L40(r78);
  L170():
    C_supsmu1 = force? C_supsmu;
    checkMissing(C_supsmu1);
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L171() else L172();
  L214(dx21):
    st smo = dx21;
    duplicated = ldf duplicated;
    check L218() else D79();
  L215():
    dr18 = tryDispatchBuiltin.1("$", r83);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L217() else L216(dr18);
  L216(r115):
    r116 = `$`(r115, <sym smo>);
    goto L214(r116);
  D52():
    deopt 185 [trace1];
  D54():
    deopt 190 [r81];
  D79():
    deopt 261 [];
  L42(r85):
    sym13 = ldf `as.double`;
    base13 = ldf `as.double` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L175() else L176();
  L165():
    trace2 = force? trace1;
    checkMissing(trace2);
    as_integer = ldf `as.integer` in base;
    r80 = dyn as_integer(trace2);
    check L166() else D53();
  L167():
    goto L39();
  L171():
    leno4 = ld leno;
    check L173() else D56();
  L172():
    r84 = dyn base12(<sym leno>);
    goto L42(r84);
  L217():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L214(dx20);
  L218():
    p9 = prom<V +>{
      xo2 = ld xo;
      xo3 = force? xo2;
      checkMissing(xo3);
      return xo3;
    };
    r118 = dyn duplicated(p9);
    check L219() else D80();
  D53():
    deopt 188 [r80];
  D56():
    deopt 197 [leno4];
  D80():
    deopt 263 [r118];
  L43(r88):
    sym14 = ldf `as.double`;
    base14 = ldf `as.double` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L179() else L180();
  L166():
    goto L40(r80);
  L173():
    leno5 = force? leno4;
    checkMissing(leno5);
    as_integer1 = ldf `as.integer` in base;
    r86 = dyn as_integer1(leno5);
    check L174() else D57();
  L175():
    xo = ld xo;
    check L177() else D58();
  L176():
    r87 = dyn base13(<sym xo>);
    goto L43(r87);
  L219():
    st dupx = r118;
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L220() else L221();
  D57():
    deopt 200 [r86];
  D58():
    deopt 203 [xo];
  L44(r91):
    sym15 = ldf `as.double`;
    base15 = ldf `as.double` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L187() else L188();
  L51(r120):
    popenv;
    return r120;
  L174():
    goto L42(r86);
  L177():
    xo1 = force? xo;
    checkMissing(xo1);
    as_double = ldf `as.double` in base;
    r89 = dyn as_double(xo1);
    check L178() else D59();
  L179():
    y11 = ld y;
    check L181() else D60();
  L180():
    r90 = dyn base14(<lang `[`(y, ord)>);
    goto L44(r90);
  L220():
    xo4 = ld xo;
    check L222() else D81();
  L221():
    r119 = dyn base19[x, y](<lang `[`(xo, `!`(dupx))>, <lang `[`(smo, `!`(dupx))>);
    goto L51(r119);
  D59():
    deopt 206 [r89];
  D60():
    deopt 209 [y11];
  D81():
    deopt 267 [xo4];
  L46(r95):
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L195() else L196();
  L178():
    goto L43(r89);
  L181():
    y12 = force? y11;
    checkMissing(y12);
    c41 = `is.object`(y12);
    if c41 then L182() else L183(y12);
  L187():
    wt5 = ld wt;
    check L189() else D63();
  L188():
    r94 = dyn base15(<lang `[`(wt, ord)>);
    goto L46(r94);
  L222():
    xo5 = force? xo4;
    checkMissing(xo5);
    c44 = `is.object`(xo5);
    if c44 then L223() else L224(xo5);
  D63():
    deopt 218 [wt5];
  L45(dx17):
    as_double1 = ldf `as.double` in base;
    r93 = dyn as_double1(dx17);
    check L186() else D62();
  L48(r99):
    sym17 = ldf `as.double`;
    base17 = ldf `as.double` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L199() else L200();
  L52(dx23):
    smo = ld smo;
    check L227() else D83();
  L182():
    dr14 = tryDispatchBuiltin.1("[", y12);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L184() else L183(dr14);
  L183(y14):
    ord8 = ld ord;
    check L185() else D61();
  L189():
    wt6 = force? wt5;
    checkMissing(wt6);
    c42 = `is.object`(wt6);
    if c42 then L190() else L191(wt6);
  L195():
    iper = ld iper;
    check L197() else D66();
  L196():
    r98 = dyn base16(<sym iper>);
    goto L48(r98);
  L223():
    dr20 = tryDispatchBuiltin.1("[", xo5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L225() else L224(dr20);
  L224(xo7):
    dupx = ld dupx;
    check L226() else D82();
  D61():
    deopt 211 [y14, ord8];
  D62():
    deopt 215 [r93];
  D66():
    deopt 227 [iper];
  D82():
    deopt 269 [xo7, dupx];
  D83():
    deopt 274 [smo];
  L47(dx19):
    as_double2 = ldf `as.double` in base;
    r97 = dyn as_double2(dx19);
    check L194() else D65();
  L49(r102):
    sym18 = ldf `as.double`;
    base18 = ldf `as.double` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L203() else L204();
  L184():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L45(dx16);
  L185():
    ord9 = force? ord8;
    __7 = ldf `[` in base;
    r92 = dyn __7(y14, ord9);
    goto L45(r92);
  L186():
    goto L44(r93);
  L190():
    dr16 = tryDispatchBuiltin.1("[", wt6);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L192() else L191(dr16);
  L191(wt8):
    ord10 = ld ord;
    check L193() else D64();
  L197():
    iper1 = force? iper;
    checkMissing(iper1);
    as_integer2 = ldf `as.integer` in base;
    r100 = dyn as_integer2(iper1);
    check L198() else D67();
  L199():
    span7 = ld span;
    check L201() else D68();
  L200():
    r101 = dyn base17(<sym span>);
    goto L49(r101);
  L225():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L52(dx22);
  L226():
    dupx1 = force? dupx;
    checkMissing(dupx1);
    r121 = `!`(dupx1);
    __9 = ldf `[` in base;
    r122 = dyn __9(xo7, r121);
    goto L52(r122);
  L227():
    smo1 = force? smo;
    checkMissing(smo1);
    c45 = `is.object`(smo1);
    if c45 then L228() else L229(smo1);
  D64():
    deopt 220 [wt8, ord10];
  D65():
    deopt 224 [r97];
  D67():
    deopt 230 [r100];
  D68():
    deopt 233 [span7];
  L50(r105):
    double = ldf double;
    check L207() else D72();
  L53(dx25):
    list = ldf list in base;
    r125 = dyn list(dx23, dx25);
    check L232() else D85();
  L192():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L47(dx18);
  L193():
    ord11 = force? ord10;
    __8 = ldf `[` in base;
    r96 = dyn __8(wt8, ord11);
    goto L47(r96);
  L194():
    goto L46(r97);
  L198():
    goto L48(r100);
  L201():
    span8 = force? span7;
    checkMissing(span8);
    as_double3 = ldf `as.double` in base;
    r103 = dyn as_double3(span8);
    check L202() else D69();
  L203():
    bass1 = ld bass;
    check L205() else D70();
  L204():
    r104 = dyn base18(<sym bass>);
    goto L50(r104);
  L228():
    dr22 = tryDispatchBuiltin.1("[", smo1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L230() else L229(dr22);
  L229(smo3):
    dupx2 = ld dupx;
    check L231() else D84();
  D69():
    deopt 236 [r103];
  D70():
    deopt 239 [bass1];
  D72():
    deopt 244 [];
  D84():
    deopt 276 [smo3, dupx2];
  D85():
    deopt 282 [r125];
  L202():
    goto L49(r103);
  L205():
    bass2 = force? bass1;
    checkMissing(bass2);
    as_double4 = ldf `as.double` in base;
    r106 = dyn as_double4(bass2);
    check L206() else D71();
  L207():
    p7 = prom<V +>{
      leno6 = ld leno;
      leno7 = force? leno6;
      checkMissing(leno7);
      return leno7;
    };
    r108 = dyn double(p7);
    check L208() else D73();
  L230():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L53(dx24);
  L231():
    dupx3 = force? dupx2;
    checkMissing(dupx3);
    r123 = `!`(dupx3);
    __10 = ldf `[` in base;
    r124 = dyn __10(smo3, r123);
    goto L53(r124);
  L232():
    goto L51(r125);
  D71():
    deopt 242 [r106];
  D73():
    deopt 246 [r108];
  L206():
    goto L50(r106);
  L208():
    double1 = ldf double;
    check L209() else D74();
  D74():
    deopt 249 [];
  L209():
    p8 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      r109 = `*`(n9, 7);
      return r109;
    };
    r111 = dyn double1(p8);
    check L210() else D75();
  D75():
    deopt 251 [r111];
  L210():
    double2 = ldf double;
    check L211() else D76();
  D76():
    deopt 253 [];
  L211():
    r112 = dyn double2(1);
    check L212() else D77();
  D77():
    deopt 255 [r112];
  L212():
    _Fortran1 = ldf `.Fortran` in base;
    r113 = dyn _Fortran1(C_supsmu1, r85, r88, r91, r95, r99, r102, r105, r108, r111, r112);
    check L213() else D78();
  D78():
    deopt 257 [r113];
  L213():
    goto L41(r113);
  }
}