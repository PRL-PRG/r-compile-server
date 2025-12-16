fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner600028202;
    st `identify.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner600028202(x, y, labels, pos, n, plot, atpen, offset, tolerance, order, `...`) {
  (reg x:*, reg y:*, reg labels:*, reg pos:*, reg n:*, reg plot:*, reg atpen:*, reg offset:*, reg tolerance:*, reg order:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg p:p(V +), var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg length:cls, reg r6:V, reg p1:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var atpen:*, reg atpen_isMissing:L, reg atpen_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var tolerance:*, reg tolerance_isMissing:L, reg tolerance_orDefault:*, var order:*, reg order_isMissing:L, reg order_orDefault:*, var `...`:dots?, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg list:cls, reg ddd1:dots?, reg r12:V, reg length1:cls, reg r13:V, reg c:L, reg par:cls, reg extras:*, reg extras1:V, reg p2:p(V +), reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg on_exit:cls, reg r18:V, reg xy_coords:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg y1:*, reg y2:V, reg p4:p(V +), reg r22:V, reg xy:*, reg xy1:V, reg c1:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r23:V, reg xy4:*, reg xy5:V, reg c2:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x7:*, reg x8:V, reg length2:cls, reg r27:V, reg r28:V, reg c3:L, reg pos1:*, reg pos2:V, reg r29:V, reg c4:L, reg c6:V, reg order1:*, reg order2:V, reg r30:V, reg c7:L, reg c8:V, reg c10:L, reg numeric:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg numeric1:cls, reg r36:V, reg list1:cls, reg r37:V, reg pos3:*, reg pos4:V, reg c11:L, reg numeric2:cls, reg r38:V, reg l:*, reg c12:L, reg r40:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r42:V, reg dx5:V, reg r43:V, reg order3:*, reg order4:V, reg c13:L, reg numeric3:cls, reg r45:V, reg l3:*, reg c14:L, reg r47:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r49:V, reg dx7:V, reg r50:V, reg result:*, reg result1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg C_identify:*, reg C_identify1:V, reg x9:*, reg x10:V, reg y3:*, reg y4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg labels1:*, reg labels2:V, reg as_character:cls, reg r57:V, reg n1:*, reg n2:V, reg plot1:*, reg plot2:V, reg offset1:*, reg offset2:V, reg tolerance1:*, reg tolerance2:V, reg atpen1:*, reg atpen2:V, reg _External2:cls, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg z:*, reg z1:V, reg c15:L, reg z3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r61:V, reg seq_int:cls, reg r62:V, reg c16:L, reg r64:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg z4:*, reg z5:V, reg c17:L, reg r66:V, reg z7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg r68:V, reg dx13:V, reg __1:cls, reg r69:V, reg __2:cls, reg r70:V, reg pos5:*, reg pos6:V, reg r71:V, reg c18:L, reg c20:V, reg order5:*, reg order6:V, reg r72:V, reg c21:L, reg c22:V, reg c24:L, reg i:*, reg i1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg r74:V, reg i2:*, reg i3:V, reg list2:cls, reg r75:V, reg pos7:*, reg pos8:V, reg c25:L, reg z8:*, reg z9:V, reg c26:L, reg z11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r76:V, reg c27:L, reg dx17:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg z12:*, reg z13:V, reg c28:L, reg dx21:V, reg z15:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg dx25:V, reg __4:cls, reg r77:V, reg __5:cls, reg r78:V, reg l6:*, reg c29:L, reg dx27:V, reg l8:*, reg dr20:V, reg dc10:L, reg dx29:V, reg dx30:V, reg dx31:V, reg r79:V, reg order7:*, reg order8:V, reg c30:L, reg z16:*, reg z17:V, reg c31:L, reg z19:V, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg __6:cls, reg r80:V, reg c32:L, reg dx36:V, reg dr24:V, reg dc12:L, reg dx37:V, reg dx38:V, reg z20:*, reg z21:V, reg c33:L, reg dx40:V, reg z23:V, reg dr26:V, reg dc13:L, reg dx42:V, reg dx43:V, reg dx44:V, reg __7:cls, reg r81:V, reg __8:cls, reg r82:V, reg l9:*, reg c34:L, reg dx46:V, reg l11:*, reg dr28:V, reg dc14:L, reg dx48:V, reg dx49:V, reg dx50:V, reg r83:V, reg result2:*, reg result3:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L1() else L2(labels);
  L1():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r2 = seq_along(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L2(p);
  L2(labels_orDefault):
    st labels = labels_orDefault;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L3(FALSE) else L3(pos);
  L3(pos_orDefault):
    st pos = pos_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L4() else L5(n);
  L4():
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      length = ldf length in base;
      r6 = dyn length(x4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    goto L5(p1);
  L5(n_orDefault):
    st n = n_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L6(TRUE) else L6(plot);
  L6(plot_orDefault):
    st plot = plot_orDefault;
    atpen_isMissing = missing.0(atpen);
    if atpen_isMissing then L7(FALSE) else L7(atpen);
  L7(atpen_orDefault):
    st atpen = atpen_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L8(0.5) else L8(offset);
  L8(offset_orDefault):
    st offset = offset_orDefault;
    tolerance_isMissing = missing.0(tolerance);
    if tolerance_isMissing then L9(0.25) else L9(tolerance);
  L9(tolerance_orDefault):
    st tolerance = tolerance_orDefault;
    order_isMissing = missing.0(order);
    if order_isMissing then L10(FALSE) else L10(order);
  L10(order_orDefault):
    st order = order_orDefault;
    st `...` = ddd;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L11(r9):
    c = `as.logical`(r9);
    if c then L53() else L13();
  L46():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L47():
    r8 = dyn base2(<lang `<-`(extras, list(...))>);
    goto L11(r8);
  L12(r11):
    st extras = r11;
    length1 = ldf length in base;
    r13 = dyn length1(r11);
    check L52() else D2();
  L13():
    goto L15();
  L15():
    xy_coords = ldf `xy.coords`;
    check L59() else D5();
  L48():
    list = ldf list;
    check L50() else D0();
  L49():
    r10 = dyn base3(<sym ...>);
    goto L12(r10);
  L53():
    par = ldf par;
    check L54() else D3();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [r13];
  D3():
    deopt 11 [];
  D5():
    deopt 21 [];
  L50():
    ddd1 = ld `...`;
    r12 = dyn list[`...`](ddd1);
    check L51() else D1();
  L52():
    goto L11(r13);
  L54():
    p2 = prom<V +>{
      extras = ld extras;
      extras1 = force? extras;
      checkMissing(extras1);
      return extras1;
    };
    r15 = dyn par(p2);
    check L55() else D4();
  L59():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p4 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r22 = dyn xy_coords[, , setLab](p3, p4, FALSE);
    check L60() else D6();
  D1():
    deopt 6 [r12];
  D4():
    deopt 13 [r15];
  D6():
    deopt 26 [r22];
  L51():
    goto L12(r12);
  L55():
    st opar = r15;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L60():
    st xy = r22;
    xy = ld xy;
    check L61() else D7();
  D7():
    deopt 28 [xy];
  L14(r17):
    goto L15();
  L56():
    on_exit = ldf `on.exit` in base;
    r18 = dyn on_exit(<lang par(opar)>);
    goto L14(r18);
  L57():
    r16 = dyn base4(<lang par(opar)>);
    goto L14(r16);
  L61():
    xy1 = force? xy;
    checkMissing(xy1);
    c1 = `is.object`(xy1);
    if c1 then L63() else L64(xy1);
  L62(dx1):
    st x = dx1;
    xy4 = ld xy;
    check L66() else D8();
  L63():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(dr);
  L64(xy3):
    r23 = `$`(xy3, <sym x>);
    goto L62(r23);
  D8():
    deopt 32 [xy4];
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L62(dx);
  L66():
    xy5 = force? xy4;
    checkMissing(xy5);
    c2 = `is.object`(xy5);
    if c2 then L68() else L69(xy5);
  L67(dx3):
    st y = dx3;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L68():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(dr2);
  L69(xy7):
    r24 = `$`(xy7, <sym y>);
    goto L67(r24);
  L16(r26):
    r28 = `==`(r26, 0.0);
    c3 = `as.logical`(r28);
    if c3 then L75() else L17();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L67(dx2);
  L71():
    x7 = ld x;
    check L73() else D9();
  L72():
    r25 = dyn base5(<sym x>);
    goto L16(r25);
  D9():
    deopt 38 [x7];
  L17():
    sym7 = ldf `.External2`;
    base7 = ldf `.External2` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L111() else L112();
  L73():
    x8 = force? x7;
    checkMissing(x8);
    length2 = ldf length in base;
    r27 = dyn length2(x8);
    check L74() else D10();
  L75():
    pos1 = ld pos;
    check L76() else D11();
  D10():
    deopt 41 [r27];
  D11():
    deopt 44 [pos1];
  L27(r54):
    st z = r54;
    sym9 = ldf `seq.int`;
    base9 = ldf `seq.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L126() else L127();
  L74():
    goto L16(r27);
  L76():
    pos2 = force? pos1;
    checkMissing(pos2);
    r29 = `!`(pos2);
    c4 = `as.logical`(r29);
    if c4 then L77() else L18(c4);
  L111():
    C_identify = ld C_identify;
    check L113() else D25();
  L112():
    r53 = dyn base7(<sym C_identify>, <sym x>, <sym y>, <lang as.character(labels)>, <sym n>, <sym plot>, <sym offset>, <sym tolerance>, <sym atpen>);
    goto L27(r53);
  D25():
    deopt 91 [C_identify];
  L18(c6):
    c10 = `as.logical`(c6);
    if c10 then L80() else L19();
  L29(r60):
    c16 = `is.object`(r60);
    if c16 then L133() else L134(r60);
  L77():
    order1 = ld order;
    check L78() else D12();
  L113():
    C_identify1 = force? C_identify;
    checkMissing(C_identify1);
    x9 = ld x;
    check L114() else D26();
  L126():
    z = ld z;
    check L128() else D36();
  L127():
    r59 = dyn base9(<lang `[[`(z, 1)>);
    goto L29(r59);
  D12():
    deopt 47 [c4, order1];
  D26():
    deopt 93 [x9];
  D36():
    deopt 118 [z];
  L19():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L31(dx11):
    st i = dx11;
    pos5 = ld pos;
    check L140() else D39();
  L78():
    order2 = force? order1;
    checkMissing(order2);
    r30 = `!`(order2);
    c7 = `as.logical`(r30);
    c8 = `&&`(c4, c7);
    goto L18(c8);
  L80():
    numeric = ldf numeric;
    check L81() else D13();
  L114():
    x10 = force? x9;
    checkMissing(x10);
    y3 = ld y;
    check L115() else D27();
  L128():
    z1 = force? z;
    checkMissing(z1);
    c15 = `is.object`(z1);
    if c15 then L129() else L130(z1);
  L133():
    dr10 = tryDispatchBuiltin.1("[", r60);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L135() else L134(dr10);
  L134(r64):
    z4 = ld z;
    check L136() else D38();
  D13():
    deopt 52 [];
  D27():
    deopt 95 [y3];
  D38():
    deopt 125 [r64, z4];
  D39():
    deopt 132 [pos5];
  L21(r35):
    st result = r35;
    pos3 = ld pos;
    check L90() else D18();
  L30(dx9):
    seq_int = ldf `seq.int` in base;
    r62 = dyn seq_int(dx9);
    check L132() else D37();
  L81():
    r31 = dyn numeric();
    check L82() else D14();
  L85():
    numeric1 = ldf numeric;
    check L87() else D15();
  L86():
    r34 = dyn base6[ind](<lang numeric()>);
    goto L21(r34);
  L115():
    y4 = force? y3;
    checkMissing(y4);
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L116() else L117();
  L129():
    dr8 = tryDispatchBuiltin.1("[[", z1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L131() else L130(dr8);
  L130(z3):
    __ = ldf `[[` in base;
    r61 = dyn __(z3, 1);
    goto L30(r61);
  L135():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L31(dx10);
  L136():
    z5 = force? z4;
    checkMissing(z5);
    c17 = `is.object`(z5);
    if c17 then L137() else L138(r64, z5);
  L140():
    pos6 = force? pos5;
    checkMissing(pos6);
    r71 = `!`(pos6);
    c18 = `as.logical`(r71);
    if c18 then L141() else L33(c18);
  D14():
    deopt 53 [r31];
  D15():
    deopt 58 [];
  D18():
    deopt 64 [pos3];
  D37():
    deopt 124 [r62];
  L28(r56):
    n1 = ld n;
    check L120() else D30();
  L32(r68, dx13):
    __2 = ldf `[` in base;
    r70 = dyn __2(r68, dx13);
    goto L31(r70);
  L33(c20):
    c24 = `as.logical`(c20);
    if c24 then L144() else L34();
  L82():
    popenv;
    return r31;
  L87():
    r36 = dyn numeric1();
    check L88() else D16();
  L90():
    pos4 = force? pos3;
    checkMissing(pos4);
    c11 = `as.logical`(pos4);
    if c11 then L91() else L22();
  L116():
    labels1 = ld labels;
    check L118() else D28();
  L117():
    r55 = dyn base8(<sym labels>);
    goto L28(r55);
  L131():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(dx8);
  L132():
    goto L29(r62);
  L137():
    dr12 = tryDispatchBuiltin.1("[[", z5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L139() else L138(r64, dr12);
  L138(r66, z7):
    __1 = ldf `[[` in base;
    r69 = dyn __1(z7, 1);
    goto L32(r66, r69);
  L141():
    order5 = ld order;
    check L142() else D40();
  D16():
    deopt 59 [r36];
  D28():
    deopt 99 [labels1];
  D30():
    deopt 103 [n1];
  D40():
    deopt 135 [c18, order5];
  L22():
    goto L23();
  L23():
    order3 = ld order;
    check L99() else D21();
  L34():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L147() else L148();
  L88():
    list1 = ldf list in base;
    r37 = dyn list1(r36);
    check L89() else D17();
  L91():
    numeric2 = ldf numeric;
    check L92() else D19();
  L118():
    labels2 = force? labels1;
    checkMissing(labels2);
    as_character = ldf `as.character` in base;
    r57 = dyn as_character(labels2);
    check L119() else D29();
  L120():
    n2 = force? n1;
    checkMissing(n2);
    plot1 = ld plot;
    check L121() else D31();
  L139():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L32(r64, dx12);
  L142():
    order6 = force? order5;
    checkMissing(order6);
    r72 = `!`(order6);
    c21 = `as.logical`(r72);
    c22 = `&&`(c18, c21);
    goto L33(c22);
  L144():
    i = ld i;
    check L145() else D41();
  D17():
    deopt 62 [r37];
  D19():
    deopt 67 [];
  D21():
    deopt 74 [order3];
  D29():
    deopt 102 [r57];
  D31():
    deopt 105 [plot1];
  D41():
    deopt 139 [i];
  L35(r74):
    st result = r74;
    pos7 = ld pos;
    check L151() else D44();
  L89():
    goto L21(r37);
  L92():
    r38 = dyn numeric2();
    check L93() else D20();
  L99():
    order4 = force? order3;
    checkMissing(order4);
    c13 = `as.logical`(order4);
    if c13 then L100() else L24();
  L119():
    goto L28(r57);
  L121():
    plot2 = force? plot1;
    checkMissing(plot2);
    offset1 = ld offset;
    check L122() else D32();
  L145():
    i1 = force? i;
    checkMissing(i1);
    popenv;
    return i1;
  L147():
    i2 = ld i;
    check L149() else D42();
  L148():
    r73 = dyn base10[ind](<sym i>);
    goto L35(r73);
  D20():
    deopt 68 [r38];
  D32():
    deopt 107 [offset1];
  D42():
    deopt 143 [i2];
  D44():
    deopt 149 [pos7];
  L24():
    goto L25();
  L25():
    result = ld result;
    check L108() else D24();
  L93():
    l = ld result;
    c12 = `is.object`(l);
    if c12 then L95() else L96(r38, l);
  L100():
    numeric3 = ldf numeric;
    check L101() else D22();
  L122():
    offset2 = force? offset1;
    checkMissing(offset2);
    tolerance1 = ld tolerance;
    check L123() else D33();
  L149():
    i3 = force? i2;
    checkMissing(i3);
    list2 = ldf list in base;
    r75 = dyn list2(i3);
    check L150() else D43();
  L151():
    pos8 = force? pos7;
    checkMissing(pos8);
    c25 = `as.logical`(pos8);
    if c25 then L152() else L36();
  D22():
    deopt 77 [];
  D24():
    deopt 84 [result];
  D33():
    deopt 109 [tolerance1];
  D43():
    deopt 147 [r75];
  L36():
    goto L40();
  L40():
    order7 = ld order;
    check L169() else D47();
  L94(r42, dx5):
    st result = dx5;
    goto L23();
  L95():
    dr4 = tryDispatchBuiltin.0("$<-", l, r38);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L97() else L96(r38, dr4);
  L96(r40, l2):
    r43 = `$<-`(l2, <sym pos>, r38);
    goto L94(r40, r43);
  L101():
    r45 = dyn numeric3();
    check L102() else D23();
  L108():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  L123():
    tolerance2 = force? tolerance1;
    checkMissing(tolerance2);
    atpen1 = ld atpen;
    check L124() else D34();
  L150():
    goto L35(r75);
  L152():
    z8 = ld z;
    check L153() else D45();
  D23():
    deopt 78 [r45];
  D34():
    deopt 111 [atpen1];
  D45():
    deopt 151 [z8];
  D47():
    deopt 167 [order7];
  L97():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L94(r38, dx4);
  L102():
    l3 = ld result;
    c14 = `is.object`(l3);
    if c14 then L104() else L105(r45, l3);
  L124():
    atpen2 = force? atpen1;
    checkMissing(atpen2);
    _External2 = ldf `.External2` in base;
    r58 = dyn _External2(C_identify1, x10, y4, r56, n2, plot2, offset2, tolerance2, atpen2);
    check L125() else D35();
  L153():
    z9 = force? z8;
    checkMissing(z9);
    c26 = `is.object`(z9);
    if c26 then L154() else L155(z9);
  L169():
    order8 = force? order7;
    checkMissing(order8);
    c30 = `as.logical`(order8);
    if c30 then L170() else L41();
  D35():
    deopt 114 [r58];
  L37(dx15):
    c27 = `is.object`(dx15);
    if c27 then L157() else L158(dx15);
  L41():
    goto L45();
  L45():
    result2 = ld result;
    check L187() else D50();
  L103(r49, dx7):
    st result = dx7;
    goto L25();
  L104():
    dr6 = tryDispatchBuiltin.0("$<-", l3, r45);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L106() else L105(r45, dr6);
  L105(r47, l5):
    r50 = `$<-`(l5, <sym order>, r45);
    goto L103(r47, r50);
  L125():
    goto L27(r58);
  L154():
    dr14 = tryDispatchBuiltin.1("[[", z9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L156() else L155(dr14);
  L155(z11):
    __3 = ldf `[[` in base;
    r76 = dyn __3(z11, 2);
    goto L37(r76);
  L170():
    z16 = ld z;
    check L171() else D48();
  D48():
    deopt 169 [z16];
  D50():
    deopt 185 [result2];
  L38(dx19):
    l6 = ld result;
    c29 = `is.object`(l6);
    if c29 then L165() else L166(dx19, l6);
  L106():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L103(r45, dx6);
  L156():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L37(dx14);
  L157():
    dr16 = tryDispatchBuiltin.1("[", dx15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L159() else L158(dr16);
  L158(dx17):
    z12 = ld z;
    check L160() else D46();
  L171():
    z17 = force? z16;
    checkMissing(z17);
    c31 = `is.object`(z17);
    if c31 then L172() else L173(z17);
  L187():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D46():
    deopt 156 [dx17, z12];
  L42(dx34):
    c32 = `is.object`(dx34);
    if c32 then L175() else L176(dx34);
  L159():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L38(dx18);
  L160():
    z13 = force? z12;
    checkMissing(z13);
    c28 = `is.object`(z13);
    if c28 then L161() else L162(dx17, z13);
  L164(dx30, dx31):
    st result = dx31;
    goto L40();
  L165():
    dr20 = tryDispatchBuiltin.0("$<-", l6, dx19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L167() else L166(dx19, dr20);
  L166(dx27, l8):
    r79 = `$<-`(l8, <sym pos>, dx19);
    goto L164(dx27, r79);
  L172():
    dr22 = tryDispatchBuiltin.1("[[", z17);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L174() else L173(dr22);
  L173(z19):
    __6 = ldf `[[` in base;
    r80 = dyn __6(z19, 3);
    goto L42(r80);
  L39(dx24, dx25):
    __5 = ldf `[` in base;
    r78 = dyn __5(dx24, dx25);
    goto L38(r78);
  L43(dx38):
    l9 = ld result;
    c34 = `is.object`(l9);
    if c34 then L183() else L184(dx38, l9);
  L161():
    dr18 = tryDispatchBuiltin.1("[[", z13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L163() else L162(dx17, dr18);
  L162(dx21, z15):
    __4 = ldf `[[` in base;
    r77 = dyn __4(z15, 1);
    goto L39(dx21, r77);
  L167():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L164(dx19, dx29);
  L174():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L42(dx33);
  L175():
    dr24 = tryDispatchBuiltin.1("[", dx34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L177() else L176(dr24);
  L176(dx36):
    z20 = ld z;
    check L178() else D49();
  D49():
    deopt 174 [dx36, z20];
  L163():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L39(dx17, dx23);
  L177():
    dx37 = getTryDispatchBuiltinValue(dr24);
    goto L43(dx37);
  L178():
    z21 = force? z20;
    checkMissing(z21);
    c33 = `is.object`(z21);
    if c33 then L179() else L180(dx36, z21);
  L182(dx49, dx50):
    st result = dx50;
    goto L45();
  L183():
    dr28 = tryDispatchBuiltin.0("$<-", l9, dx38);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L185() else L184(dx38, dr28);
  L184(dx46, l11):
    r83 = `$<-`(l11, <sym order>, dx38);
    goto L182(dx46, r83);
  L44(dx43, dx44):
    __8 = ldf `[` in base;
    r82 = dyn __8(dx43, dx44);
    goto L43(r82);
  L179():
    dr26 = tryDispatchBuiltin.1("[[", z21);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L181() else L180(dx36, dr26);
  L180(dx40, z23):
    __7 = ldf `[[` in base;
    r81 = dyn __7(z23, 1);
    goto L44(dx40, r81);
  L185():
    dx48 = getTryDispatchBuiltinValue(dr28);
    goto L182(dx38, dx48);
  L181():
    dx42 = getTryDispatchBuiltinValue(dr26);
    goto L44(dx36, dx42);
  }
}