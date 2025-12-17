fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner796660176;
    st `loess.smooth` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner796660176(x, y, span, degree, family, evaluation, `...`) {
  (reg x:*, reg y:*, reg span:*, reg degree:*, reg family:*, reg evaluation:*, reg ddd:dots) -+> V { var x:*, var y:*, var span:*, reg span_isMissing:L, reg span_orDefault:*, reg p:p(V +), var degree:*, reg degree_isMissing:L, reg degree_orDefault:*, var family:*, reg family_isMissing:L, reg family_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), var evaluation:*, reg evaluation_isMissing:L, reg evaluation_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg is_na:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg r12:V, reg y1:*, reg y2:V, reg is_na1:cls, reg r13:V, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg notna:*, reg notna1:V, reg __:cls, reg r16:V, reg y3:*, reg y4:V, reg c2:L, reg y6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg notna2:*, reg notna3:V, reg __1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg min:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg x9:*, reg x10:V, reg max:cls, reg r25:V, reg evaluation1:*, reg evaluation2:V, reg seq_int:cls, reg r26:V, reg loess_control:cls, reg ddd1:dots?, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg y7:*, reg y8:V, reg length:cls, reg r32:V, reg rep_len:cls, reg r33:V, reg match_arg:cls, reg family1:*, reg family2:V, reg p2:p(V +), reg r35:V, reg family3:*, reg family4:V, reg r36:V, reg c3:L, reg r37:V, reg control:*, reg control1:V, reg c4:L, reg control3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg simpleLoess:cls, reg y9:*, reg y10:V, reg p3:p(V +), reg x11:*, reg x12:V, reg p4:p(V +), reg w:*, reg w1:V, reg p5:p(V +), reg span1:*, reg span2:V, reg p6:p(V +), reg degree1:*, reg degree2:V, reg p7:p(V +), reg control4:*, reg control5:V, reg c5:L, reg control7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r44:V, reg p8:p(V +), reg iterations:*, reg iterations1:V, reg p9:p(V +), reg control8:*, reg control9:V, reg c6:L, reg control11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r47:V, reg p10:p(V +), reg control12:*, reg control13:V, reg c7:L, reg control15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r49:V, reg p11:p(V +), reg r51:V, reg c8:L, reg r53:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg C_loess_ifit:*, reg C_loess_ifit1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg kd:*, reg kd1:V, reg c9:L, reg kd3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r59:V, reg as_integer:cls, reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg kd4:*, reg kd5:V, reg c10:L, reg kd7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r63:V, reg as_integer1:cls, reg r64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg kd8:*, reg kd9:V, reg c11:L, reg kd11:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r67:V, reg as_double:cls, reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg kd12:*, reg kd13:V, reg c12:L, reg kd15:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r71:V, reg as_double1:cls, reg r72:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg kd16:*, reg kd17:V, reg c13:L, reg kd19:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r75:V, reg as_double2:cls, reg r76:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg evaluation3:*, reg evaluation4:V, reg as_integer2:cls, reg r79:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg new_x:*, reg new_x1:V, reg as_double3:cls, reg r82:V, reg double:cls, reg evaluation5:*, reg evaluation6:V, reg p12:p(V +), reg r84:V, reg _C:cls, reg r85:V, reg c14:L, reg r87:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r88:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg new_x2:*, reg new_x3:V, reg z:*, reg z1:V, reg list:cls, reg r91:V |
    mkenv;
    st x = x;
    st y = y;
    span_isMissing = missing.0(span);
    if span_isMissing then L0() else L1(span);
  L0():
    p = prom<V +>{
      return 0.6666666666666666;
    };
    goto L1(p);
  L1(span_orDefault):
    st span = span_orDefault;
    degree_isMissing = missing.0(degree);
    if degree_isMissing then L2(1.0) else L2(degree);
  L2(degree_orDefault):
    st degree = degree_orDefault;
    family_isMissing = missing.0(family);
    if family_isMissing then L3() else L4(family);
  L3():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("symmetric", "gaussian");
      goto L0(r3);
    L2():
      r1 = dyn base("symmetric", "gaussian");
      goto L0(r1);
    };
    goto L4(p1);
  L4(family_orDefault):
    st family = family_orDefault;
    evaluation_isMissing = missing.0(evaluation);
    if evaluation_isMissing then L5(50.0) else L5(evaluation);
  L5(evaluation_orDefault):
    st evaluation = evaluation_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L6(r6):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L26():
    x1 = ld x;
    check L28() else D0();
  L27():
    r5 = dyn base1(<sym x>);
    goto L6(r5);
  D0():
    deopt 2 [x1];
  L7(r11, r12):
    r14 = `||`(r11, r12);
    r15 = `!`(r14);
    st notna = r15;
    x3 = ld x;
    check L34() else D4();
  L28():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(x2);
    check L29() else D1();
  L30():
    y1 = ld y;
    check L32() else D2();
  L31():
    r10 = dyn base2(<sym y>);
    goto L7(r6, r10);
  D1():
    deopt 5 [r7];
  D2():
    deopt 7 [r6, y1];
  D4():
    deopt 14 [x3];
  L29():
    goto L6(r7);
  L32():
    y2 = force? y1;
    checkMissing(y2);
    is_na1 = ldf `is.na` in base;
    r13 = dyn is_na1(y2);
    check L33() else D3();
  L34():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L35() else L36(x4);
  D3():
    deopt 10 [r6, r13];
  L8(dx1):
    st x = dx1;
    y3 = ld y;
    check L39() else D6();
  L33():
    goto L7(r6, r13);
  L35():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(x6):
    notna = ld notna;
    check L38() else D5();
  D5():
    deopt 16 [x6, notna];
  D6():
    deopt 20 [y3];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L38():
    notna1 = force? notna;
    __ = ldf `[` in base;
    r16 = dyn __(x6, notna1);
    goto L8(r16);
  L39():
    y4 = force? y3;
    checkMissing(y4);
    c2 = `is.object`(y4);
    if c2 then L40() else L41(y4);
  L9(dx3):
    st y = dx3;
    sym3 = ldf `seq.int`;
    base3 = ldf `seq.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L40():
    dr2 = tryDispatchBuiltin.1("[", y4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(y6):
    notna2 = ld notna;
    check L43() else D7();
  D7():
    deopt 22 [y6, notna2];
  L10(r19):
    st `new.x` = r19;
    loess_control = ldf `loess.control`;
    check L56() else D14();
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L43():
    notna3 = force? notna2;
    __1 = ldf `[` in base;
    r17 = dyn __1(y6, notna3);
    goto L9(r17);
  L44():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L45():
    r18 = dyn base3[, , `length.out`](<lang min(x)>, <lang max(x)>, <sym evaluation>);
    goto L10(r18);
  D14():
    deopt 47 [];
  L11(r21):
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L46():
    x7 = ld x;
    check L48() else D8();
  L47():
    r20 = dyn base4(<sym x>);
    goto L11(r20);
  L56():
    ddd1 = ld `...`;
    r27 = dyn loess_control[`...`](ddd1);
    check L57() else D15();
  D8():
    deopt 30 [x7];
  D15():
    deopt 49 [r27];
  L12(r24):
    evaluation1 = ld evaluation;
    check L54() else D12();
  L48():
    x8 = force? x7;
    checkMissing(x8);
    min = ldf min in base;
    r22 = dyn min(x8);
    check L49() else D9();
  L50():
    x9 = ld x;
    check L52() else D10();
  L51():
    r23 = dyn base5(<sym x>);
    goto L12(r23);
  L57():
    st control = r27;
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  D9():
    deopt 33 [r22];
  D10():
    deopt 36 [x9];
  D12():
    deopt 40 [evaluation1];
  L13(r29):
    st w = r29;
    match_arg = ldf `match.arg`;
    check L65() else D19();
  L49():
    goto L11(r22);
  L52():
    x10 = force? x9;
    checkMissing(x10);
    max = ldf max in base;
    r25 = dyn max(x10);
    check L53() else D11();
  L54():
    evaluation2 = force? evaluation1;
    checkMissing(evaluation2);
    seq_int = ldf `seq.int` in base;
    r26 = dyn seq_int(r21, r24, evaluation2);
    check L55() else D13();
  L58():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L59():
    r28 = dyn base6(1.0, <lang length(y)>);
    goto L13(r28);
  D11():
    deopt 39 [r25];
  D13():
    deopt 44 [r26];
  D19():
    deopt 64 [];
  L14(r31):
    rep_len = ldf rep_len in base;
    r33 = dyn rep_len(1.0, r31);
    check L64() else D18();
  L53():
    goto L12(r25);
  L55():
    goto L10(r26);
  L60():
    y7 = ld y;
    check L62() else D16();
  L61():
    r30 = dyn base7(<sym y>);
    goto L14(r30);
  L65():
    p2 = prom<V +>{
      family1 = ld family;
      family2 = force? family1;
      checkMissing(family2);
      return family2;
    };
    r35 = dyn match_arg(p2);
    check L66() else D20();
  D16():
    deopt 56 [y7];
  D18():
    deopt 61 [r33];
  D20():
    deopt 66 [r35];
  L62():
    y8 = force? y7;
    checkMissing(y8);
    length = ldf length in base;
    r32 = dyn length(y8);
    check L63() else D17();
  L64():
    goto L13(r33);
  L66():
    st family = r35;
    family3 = ld family;
    check L67() else D21();
  D17():
    deopt 59 [r32];
  D21():
    deopt 68 [family3];
  L63():
    goto L14(r32);
  L67():
    family4 = force? family3;
    checkMissing(family4);
    r36 = `==`(family4, "gaussian");
    c3 = `as.logical`(r36);
    if c3 then L68() else L15();
  L15():
    control = ld control;
    check L70() else D22();
  L16(r37):
    st iterations = r37;
    simpleLoess = ldf simpleLoess;
    check L75() else D23();
  L68():
    goto L16(1);
  D22():
    deopt 74 [control];
  D23():
    deopt 79 [];
  L70():
    control1 = force? control;
    checkMissing(control1);
    c4 = `is.object`(control1);
    if c4 then L72() else L73(control1);
  L75():
    p3 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p5 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    p6 = prom<V +>{
      span1 = ld span;
      span2 = force? span1;
      checkMissing(span2);
      return span2;
    };
    p7 = prom<V +>{
      degree1 = ld degree;
      degree2 = force? degree1;
      checkMissing(degree2);
      return degree2;
    };
    p8 = prom<V +>{
      control4 = ld control;
      control5 = force? control4;
      checkMissing(control5);
      c5 = `is.object`(control5);
      if c5 then L1() else L2(control5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", control5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(control7):
      r44 = `$`(control7, <sym cell>);
      goto L0(r44);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p9 = prom<V +>{
      iterations = ld iterations;
      iterations1 = force? iterations;
      checkMissing(iterations1);
      return iterations1;
    };
    p10 = prom<V +>{
      control8 = ld control;
      control9 = force? control8;
      checkMissing(control9);
      c6 = `is.object`(control9);
      if c6 then L1() else L2(control9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", control9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(control11):
      r47 = `$`(control11, <sym iterTrace>);
      goto L0(r47);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p11 = prom<V +>{
      control12 = ld control;
      control13 = force? control12;
      checkMissing(control13);
      c7 = `is.object`(control13);
      if c7 then L1() else L2(control13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", control13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(control15):
      r49 = `$`(control15, <sym trace.hat>);
      goto L0(r49);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r51 = dyn simpleLoess[, , , , degree, parametric, `drop.square`, normalize, statistics, surface, cell, iterations, iterTrace, `trace.hat`](p3, p4, p5, p6, p7, FALSE, FALSE, FALSE, "none", "interpolate", p8, p9, p10, p11);
    check L76() else D24();
  D24():
    deopt 104 [r51];
  L71(dx5):
    goto L16(dx5);
  L72():
    dr4 = tryDispatchBuiltin.1("$", control1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(dr4);
  L73(control3):
    r38 = `$`(control3, <sym iterations>);
    goto L71(r38);
  L76():
    c8 = `is.object`(r51);
    if c8 then L78() else L79(r51);
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L71(dx4);
  L77(dx13):
    st kd = dx13;
    sym8 = ldf `.C`;
    base8 = ldf `.C` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L78():
    dr12 = tryDispatchBuiltin.1("$", r51);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L80() else L79(dr12);
  L79(r53):
    r54 = `$`(r53, <sym kd>);
    goto L77(r54);
  L17(r56):
    c14 = `is.object`(r56);
    if c14 then L136() else L137(r56);
  L80():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L77(dx12);
  L81():
    C_loess_ifit = ld C_loess_ifit;
    check L83() else D25();
  L82():
    r55 = dyn base8[, , , , , , , , fit](<sym C_loess_ifit>, <lang as.integer(`$`(kd, parameter))>, <lang as.integer(`$`(kd, a))>, <lang as.double(`$`(kd, xi))>, <lang as.double(`$`(kd, vert))>, <lang as.double(`$`(kd, vval))>, <lang as.integer(evaluation)>, <lang as.double(new.x)>, <lang double(evaluation)>);
    goto L17(r55);
  D25():
    deopt 109 [C_loess_ifit];
  L83():
    C_loess_ifit1 = force? C_loess_ifit;
    checkMissing(C_loess_ifit1);
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L135(dx25):
    st z = dx25;
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L139() else L140();
  L136():
    dr24 = tryDispatchBuiltin.1("$", r56);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L138() else L137(dr24);
  L137(r87):
    r88 = `$`(r87, <sym fit>);
    goto L135(r88);
  L18(r58):
    sym10 = ldf `as.integer`;
    base10 = ldf `as.integer` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L92() else L93();
  L25(r90):
    popenv;
    return r90;
  L84():
    kd = ld kd;
    check L86() else D26();
  L85():
    r57 = dyn base9(<lang `$`(kd, parameter)>);
    goto L18(r57);
  L138():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L135(dx24);
  L139():
    new_x2 = ld `new.x`;
    check L141() else D43();
  L140():
    r89 = dyn base16[x, y](<sym new.x>, <sym z>);
    goto L25(r89);
  D26():
    deopt 113 [kd];
  D43():
    deopt 169 [new_x2];
  L19(r62):
    sym11 = ldf `as.double`;
    base11 = ldf `as.double` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L100() else L101();
  L86():
    kd1 = force? kd;
    checkMissing(kd1);
    c9 = `is.object`(kd1);
    if c9 then L88() else L89(kd1);
  L92():
    kd4 = ld kd;
    check L94() else D28();
  L93():
    r61 = dyn base10(<lang `$`(kd, a)>);
    goto L19(r61);
  L141():
    new_x3 = force? new_x2;
    checkMissing(new_x3);
    z = ld z;
    check L142() else D44();
  D28():
    deopt 120 [kd4];
  D44():
    deopt 172 [z];
  L20(r66):
    sym12 = ldf `as.double`;
    base12 = ldf `as.double` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L108() else L109();
  L87(dx15):
    as_integer = ldf `as.integer` in base;
    r60 = dyn as_integer(dx15);
    check L91() else D27();
  L88():
    dr14 = tryDispatchBuiltin.1("$", kd1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L90() else L89(dr14);
  L89(kd3):
    r59 = `$`(kd3, <sym parameter>);
    goto L87(r59);
  L94():
    kd5 = force? kd4;
    checkMissing(kd5);
    c10 = `is.object`(kd5);
    if c10 then L96() else L97(kd5);
  L100():
    kd8 = ld kd;
    check L102() else D30();
  L101():
    r65 = dyn base11(<lang `$`(kd, xi)>);
    goto L20(r65);
  L142():
    z1 = force? z;
    checkMissing(z1);
    list = ldf list in base;
    r91 = dyn list(new_x3, z1);
    check L143() else D45();
  D27():
    deopt 117 [r60];
  D30():
    deopt 127 [kd8];
  D45():
    deopt 176 [r91];
  L21(r70):
    sym13 = ldf `as.double`;
    base13 = ldf `as.double` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L90():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L87(dx14);
  L91():
    goto L18(r60);
  L95(dx17):
    as_integer1 = ldf `as.integer` in base;
    r64 = dyn as_integer1(dx17);
    check L99() else D29();
  L96():
    dr16 = tryDispatchBuiltin.1("$", kd5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L98() else L97(dr16);
  L97(kd7):
    r63 = `$`(kd7, <sym a>);
    goto L95(r63);
  L102():
    kd9 = force? kd8;
    checkMissing(kd9);
    c11 = `is.object`(kd9);
    if c11 then L104() else L105(kd9);
  L108():
    kd12 = ld kd;
    check L110() else D32();
  L109():
    r69 = dyn base12(<lang `$`(kd, vert)>);
    goto L21(r69);
  L143():
    goto L25(r91);
  D29():
    deopt 124 [r64];
  D32():
    deopt 134 [kd12];
  L22(r74):
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L124() else L125();
  L98():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L95(dx16);
  L99():
    goto L19(r64);
  L103(dx19):
    as_double = ldf `as.double` in base;
    r68 = dyn as_double(dx19);
    check L107() else D31();
  L104():
    dr18 = tryDispatchBuiltin.1("$", kd9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L106() else L105(dr18);
  L105(kd11):
    r67 = `$`(kd11, <sym xi>);
    goto L103(r67);
  L110():
    kd13 = force? kd12;
    checkMissing(kd13);
    c12 = `is.object`(kd13);
    if c12 then L112() else L113(kd13);
  L116():
    kd16 = ld kd;
    check L118() else D34();
  L117():
    r73 = dyn base13(<lang `$`(kd, vval)>);
    goto L22(r73);
  D31():
    deopt 131 [r68];
  D34():
    deopt 141 [kd16];
  L23(r78):
    sym15 = ldf `as.double`;
    base15 = ldf `as.double` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L128() else L129();
  L106():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L103(dx18);
  L107():
    goto L20(r68);
  L111(dx21):
    as_double1 = ldf `as.double` in base;
    r72 = dyn as_double1(dx21);
    check L115() else D33();
  L112():
    dr20 = tryDispatchBuiltin.1("$", kd13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L114() else L113(dr20);
  L113(kd15):
    r71 = `$`(kd15, <sym vert>);
    goto L111(r71);
  L118():
    kd17 = force? kd16;
    checkMissing(kd17);
    c13 = `is.object`(kd17);
    if c13 then L120() else L121(kd17);
  L124():
    evaluation3 = ld evaluation;
    check L126() else D36();
  L125():
    r77 = dyn base14(<sym evaluation>);
    goto L23(r77);
  D33():
    deopt 138 [r72];
  D36():
    deopt 148 [evaluation3];
  L24(r81):
    double = ldf double;
    check L132() else D40();
  L114():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L111(dx20);
  L115():
    goto L21(r72);
  L119(dx23):
    as_double2 = ldf `as.double` in base;
    r76 = dyn as_double2(dx23);
    check L123() else D35();
  L120():
    dr22 = tryDispatchBuiltin.1("$", kd17);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L122() else L121(dr22);
  L121(kd19):
    r75 = `$`(kd19, <sym vval>);
    goto L119(r75);
  L126():
    evaluation4 = force? evaluation3;
    checkMissing(evaluation4);
    as_integer2 = ldf `as.integer` in base;
    r79 = dyn as_integer2(evaluation4);
    check L127() else D37();
  L128():
    new_x = ld `new.x`;
    check L130() else D38();
  L129():
    r80 = dyn base15(<sym new.x>);
    goto L24(r80);
  D35():
    deopt 145 [r76];
  D37():
    deopt 151 [r79];
  D38():
    deopt 154 [new_x];
  D40():
    deopt 159 [];
  L122():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L119(dx22);
  L123():
    goto L22(r76);
  L127():
    goto L23(r79);
  L130():
    new_x1 = force? new_x;
    checkMissing(new_x1);
    as_double3 = ldf `as.double` in base;
    r82 = dyn as_double3(new_x1);
    check L131() else D39();
  L132():
    p12 = prom<V +>{
      evaluation5 = ld evaluation;
      evaluation6 = force? evaluation5;
      checkMissing(evaluation6);
      return evaluation6;
    };
    r84 = dyn double(p12);
    check L133() else D41();
  D39():
    deopt 157 [r82];
  D41():
    deopt 161 [r84];
  L131():
    goto L24(r82);
  L133():
    _C = ldf `.C` in base;
    r85 = dyn _C(C_loess_ifit1, r58, r62, r66, r70, r74, r78, r81, r84);
    check L134() else D42();
  D42():
    deopt 164 [r85];
  L134():
    goto L17(r85);
  }
}