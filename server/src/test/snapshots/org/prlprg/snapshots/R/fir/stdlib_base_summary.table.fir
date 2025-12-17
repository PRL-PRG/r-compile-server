fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg object3:*, reg object4:V, reg sum:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg object5:*, reg object6:V, reg dim:cls, reg r17:V, reg length:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg n_vars:*, reg n_vars1:V, reg n_cases:*, reg n_cases1:V, reg list:cls, reg r21:V, reg n_vars2:*, reg n_vars3:V, reg r22:V, reg c1:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg n_vars4:*, reg n_vars5:V, reg vector:cls, reg r25:V, reg object7:*, reg object8:V, reg n_cases2:*, reg n_cases3:V, reg r26:V, reg n_vars6:*, reg n_vars7:V, reg r27:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg apply:cls, reg relFreqs:*, reg relFreqs1:V, reg p2:p(V +), reg k:*, reg k1:V, reg p3:p(V +), reg sum1:*, reg sum2:V, reg p4:p(V +), reg r31:V, reg l1:*, reg c3:L, reg i6:I, reg r33:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg k2:*, reg k3:V, reg ____:cls, reg r36:V, reg apply1:cls, reg do_call:cls, reg m:*, reg m1:V, reg p5:p(V +), reg r38:V, reg p6:p(V +), reg prod:*, reg prod1:V, reg p7:p(V +), reg r41:V, reg n_cases4:*, reg n_cases5:V, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg object9:*, reg object10:V, reg c4:cls, reg r47:V, reg expected:*, reg expected1:V, reg r48:V, reg r49:V, reg expected2:*, reg expected3:V, reg r50:V, reg sum3:cls, reg r51:V, reg lengths:cls, reg m2:*, reg m3:V, reg p8:p(V +), reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg lm:*, reg lm1:V, reg prod2:cls, reg r56:V, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg r62:V, reg lm2:*, reg lm3:V, reg r63:V, reg sum4:cls, reg r64:V, reg r65:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg y:*, reg y1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg statistic:*, reg statistic1:V, reg parameter:*, reg parameter1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg expected4:*, reg expected5:V, reg r72:V, reg all:cls, reg r73:V, reg __:cls, reg r74:V, reg r75:cls, reg statistic2:*, reg statistic3:V, reg p9:p(V +), reg parameter2:*, reg parameter3:V, reg p10:p(V +), reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg object11:*, reg object12:V, reg attr:cls, reg r81:V, reg list1:cls, reg r82:V, reg c5:cls, reg r83:V, reg l4:*, reg class__:cls, reg r85:V, reg y2:*, reg y3:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L25() else L1();
  L21():
    object1 = ld object;
    check L23() else D0();
  L22():
    r = dyn base(<sym object>, "table");
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    goto L2();
  L2():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L23():
    object2 = force? object1;
    checkMissing(object2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(object2, "table", FALSE);
    check L24() else D1();
  L25():
    stop = ldf stop;
    check L26() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  L3(r11):
    st `n.cases` = r11;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L24():
    goto L0(r2);
  L26():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r4 = dyn dQuote("table");
        return r4;
      };
      r6 = dyn gettextf("'object' must inherit from class %s", p);
      return r6;
    };
    r8 = dyn stop[, domain](p1, NA_LGL);
    check L27() else D3();
  L29():
    object3 = ld object;
    check L31() else D4();
  L30():
    r10 = dyn base1(<sym object>);
    goto L3(r10);
  D3():
    deopt 14 [r8];
  D4():
    deopt 19 [object3];
  L4(r14):
    st `n.vars` = r14;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L27():
    goto L2();
  L31():
    object4 = force? object3;
    checkMissing(object4);
    sum = ldf sum in base;
    r12 = dyn sum(object4);
    check L32() else D5();
  L33():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L34():
    r13 = dyn base2(<lang dim(object)>);
    goto L4(r13);
  D5():
    deopt 22 [r12];
  L5(r16):
    length = ldf length in base;
    r18 = dyn length(r16);
    check L39() else D8();
  L6(r20):
    st y = r20;
    n_vars2 = ld `n.vars`;
    check L45() else D12();
  L32():
    goto L3(r12);
  L35():
    object5 = ld object;
    check L37() else D6();
  L36():
    r15 = dyn base3(<sym object>);
    goto L5(r15);
  L40():
    n_vars = ld `n.vars`;
    check L42() else D9();
  L41():
    r19 = dyn base4[`n.vars`, `n.cases`](<sym n.vars>, <sym n.cases>);
    goto L6(r19);
  D6():
    deopt 28 [object5];
  D8():
    deopt 33 [r18];
  D9():
    deopt 37 [n_vars];
  D12():
    deopt 46 [n_vars2];
  L37():
    object6 = force? object5;
    checkMissing(object6);
    dim = ldf dim in base;
    r17 = dyn dim(object6);
    check L38() else D7();
  L39():
    goto L4(r18);
  L42():
    n_vars1 = force? n_vars;
    checkMissing(n_vars1);
    n_cases = ld `n.cases`;
    check L43() else D10();
  L45():
    n_vars3 = force? n_vars2;
    checkMissing(n_vars3);
    r22 = `>`(n_vars3, 1.0);
    c1 = `as.logical`(r22);
    if c1 then L46() else L7();
  D7():
    deopt 31 [r17];
  D10():
    deopt 40 [n_cases];
  L7():
    goto L20();
  L20():
    l4 = ld y;
    class__ = ldf `class<-`;
    check L104() else D47();
  L38():
    goto L5(r17);
  L43():
    n_cases1 = force? n_cases;
    checkMissing(n_cases1);
    list = ldf list in base;
    r21 = dyn list(n_vars1, n_cases1);
    check L44() else D11();
  L46():
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  D11():
    deopt 44 [r21];
  D47():
    deopt 180 ["summary.table", l4, "summary.table"];
  L8(r24):
    st m = r24;
    object7 = ld object;
    check L51() else D15();
  L44():
    goto L6(r21);
  L47():
    n_vars4 = ld `n.vars`;
    check L49() else D13();
  L48():
    r23 = dyn base5[, length]("list", <sym n.vars>);
    goto L8(r23);
  L104():
    r85 = dyn class__(l4, NULL, "summary.table");
    check L105() else D48();
  D13():
    deopt 53 [n_vars4];
  D15():
    deopt 58 [object7];
  D48():
    deopt 182 ["summary.table", r85];
  L49():
    n_vars5 = force? n_vars4;
    checkMissing(n_vars5);
    vector = ldf vector in base;
    r25 = dyn vector("list", n_vars5);
    check L50() else D14();
  L51():
    object8 = force? object7;
    checkMissing(object8);
    n_cases2 = ld `n.cases`;
    check L52() else D16();
  L105():
    st y = r85;
    y2 = ld y;
    check L106() else D49();
  D14():
    deopt 56 [r25];
  D16():
    deopt 59 [object8, n_cases2];
  D49():
    deopt 184 [y2];
  L50():
    goto L8(r25);
  L52():
    n_cases3 = force? n_cases2;
    checkMissing(n_cases3);
    r26 = `/`(object8, n_cases3);
    st relFreqs = r26;
    n_vars6 = ld `n.vars`;
    check L53() else D17();
  L106():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D17():
    deopt 64 [1, n_vars6];
  L53():
    n_vars7 = force? n_vars6;
    checkMissing(n_vars7);
    r27 = `:`(1, n_vars7);
    s = toForSeq(r27);
    l = length(s);
    i = 0;
    goto L9(i);
  L9(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L54() else L11();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    apply = ldf apply;
    check L55() else D18();
  L54():
    apply1 = ldf apply;
    check L61() else D21();
  D18():
    deopt 68 [i2];
  D21():
    deopt 82 [];
  L55():
    p2 = prom<V +>{
      relFreqs = ld relFreqs;
      relFreqs1 = force? relFreqs;
      checkMissing(relFreqs1);
      return relFreqs1;
    };
    p3 = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    p4 = prom<V +>{
      sum1 = ld sum;
      sum2 = force? sum1;
      checkMissing(sum2);
      return sum2;
    };
    r31 = dyn apply(p2, p3, p4);
    check L56() else D19();
  L61():
    p6 = prom<V +>{
      do_call = ldf `do.call`;
      p5 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r38 = dyn do_call("expand.grid", p5);
      return r38;
    };
    p7 = prom<V +>{
      prod = ld prod;
      prod1 = force? prod;
      checkMissing(prod1);
      return prod1;
    };
    r41 = dyn apply1(p6, 1, p7);
    check L62() else D22();
  D19():
    deopt 72 [i2, r31];
  D22():
    deopt 86 [r41];
  L56():
    l1 = ld m;
    c3 = `is.object`(l1);
    if c3 then L57() else L58(i2, r31, l1);
  L62():
    n_cases4 = ld `n.cases`;
    check L63() else D23();
  D23():
    deopt 86 [r41, n_cases4];
  L10(i8, dx1):
    st m = dx1;
    goto L9(i8);
  L57():
    dr = tryDispatchBuiltin.0("[[<-", l1, r31);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(i2, r31, dr);
  L58(i6, r33, l3):
    k2 = ld k;
    check L60() else D20();
  L63():
    n_cases5 = force? n_cases4;
    checkMissing(n_cases5);
    r42 = `*`(r41, n_cases5);
    st expected = r42;
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  D20():
    deopt 74 [i6, r33, l3, r31, k2];
  L12(r44):
    st statistic = r44;
    lengths = ldf lengths;
    check L73() else D29();
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(i2, dx);
  L60():
    k3 = force? k2;
    ____ = ldf `[[<-` in base;
    r36 = dyn ____(l3, r31, k3);
    goto L10(i6, r36);
  L64():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  L65():
    r43 = dyn base6(<lang `/`(`^`(`(`(`-`(c(object), expected)), 2.0), expected)>);
    goto L12(r43);
  D29():
    deopt 108 [];
  L13(r46):
    expected = ld expected;
    check L70() else D26();
  L66():
    object9 = ld object;
    check L68() else D24();
  L67():
    r45 = dyn base7(<sym object>);
    goto L13(r45);
  L73():
    p8 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r53 = dyn lengths(p8);
    check L74() else D30();
  D24():
    deopt 94 [object9];
  D26():
    deopt 97 [r46, expected];
  D30():
    deopt 110 [r53];
  L68():
    object10 = force? object9;
    checkMissing(object10);
    c4 = ldf c in base;
    r47 = dyn c4(object10);
    check L69() else D25();
  L70():
    expected1 = force? expected;
    checkMissing(expected1);
    r48 = `-`(r46, expected1);
    r49 = `^`(r48, 2.0);
    expected2 = ld expected;
    check L71() else D27();
  L74():
    st lm = r53;
    sym8 = ldf prod;
    base8 = ldf prod in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  D25():
    deopt 97 [r47];
  D27():
    deopt 101 [r49, expected2];
  L14(r55):
    r57 = `-`(r55, 1);
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  L69():
    goto L13(r47);
  L71():
    expected3 = force? expected2;
    checkMissing(expected3);
    r50 = `/`(r49, expected3);
    sum3 = ldf sum in base;
    r51 = dyn sum3(r50);
    check L72() else D28();
  L75():
    lm = ld lm;
    check L77() else D31();
  L76():
    r54 = dyn base8(<sym lm>);
    goto L14(r54);
  D28():
    deopt 105 [r51];
  D31():
    deopt 114 [lm];
  L15(r61, r62):
    r65 = `-`(r61, r62);
    st parameter = r65;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L83() else L84();
  L72():
    goto L12(r51);
  L77():
    lm1 = force? lm;
    checkMissing(lm1);
    prod2 = ldf prod in base;
    r56 = dyn prod2(lm1);
    check L78() else D32();
  L79():
    lm2 = ld lm;
    check L81() else D33();
  L80():
    r60 = dyn base9(<lang `-`(lm, 1)>);
    goto L15(r57, r60);
  D32():
    deopt 117 [r56];
  D33():
    deopt 121 [r57, lm2];
  L16(r67):
    st y = r67;
    goto L20();
  L78():
    goto L14(r56);
  L81():
    lm3 = force? lm2;
    checkMissing(lm3);
    r63 = `-`(lm3, 1);
    sum4 = ldf sum in base;
    r64 = dyn sum4(r63);
    check L82() else D34();
  L83():
    y = ld y;
    check L85() else D35();
  L84():
    r66 = dyn base10(<sym y>, <lang list(statistic=statistic, parameter=parameter, approx.ok=all(`>=`(expected, 5.0)), p.value=`::`(stats, pchisq)(statistic, parameter, lower.tail=FALSE), call=attr(object, "call"))>);
    goto L16(r66);
  D34():
    deopt 126 [r57, r64];
  D35():
    deopt 131 [y];
  L82():
    goto L15(r57, r64);
  L85():
    y1 = force? y;
    checkMissing(y1);
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L86() else L87();
  L17(r69):
    c5 = ldf c in base;
    r83 = dyn c5(y1, r69);
    check L102() else D46();
  L86():
    statistic = ld statistic;
    check L88() else D36();
  L87():
    r68 = dyn base11[statistic, parameter, `approx.ok`, `p.value`, call](<sym statistic>, <sym parameter>, <lang all(`>=`(expected, 5.0))>, <lang `::`(stats, pchisq)(statistic, parameter, lower.tail=FALSE)>, <lang attr(object, "call")>);
    goto L17(r68);
  D36():
    deopt 135 [statistic];
  D46():
    deopt 173 [r83];
  L88():
    statistic1 = force? statistic;
    checkMissing(statistic1);
    parameter = ld parameter;
    check L89() else D37();
  L102():
    goto L16(r83);
  D37():
    deopt 138 [parameter];
  L89():
    parameter1 = force? parameter;
    checkMissing(parameter1);
    sym12 = ldf all;
    base12 = ldf all in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L90() else L91();
  L18(r71):
    __ = ldf `::`;
    check L94() else D40();
  L90():
    expected4 = ld expected;
    check L92() else D38();
  L91():
    r70 = dyn base12(<lang `>=`(expected, 5.0)>);
    goto L18(r70);
  D38():
    deopt 143 [expected4];
  D40():
    deopt 151 [];
  L92():
    expected5 = force? expected4;
    checkMissing(expected5);
    r72 = `>=`(expected5, 5.0);
    all = ldf all in base;
    r73 = dyn all(r72);
    check L93() else D39();
  L94():
    r74 = dyn __("stats", "pchisq");
    check L95() else D41();
  D39():
    deopt 148 [r73];
  D41():
    deopt 154 [r74];
  L93():
    goto L18(r73);
  L95():
    checkFun.0(r74);
    r75 = r74 as cls;
    p9 = prom<V +>{
      statistic2 = ld statistic;
      statistic3 = force? statistic2;
      checkMissing(statistic3);
      return statistic3;
    };
    p10 = prom<V +>{
      parameter2 = ld parameter;
      parameter3 = force? parameter2;
      checkMissing(parameter3);
      return parameter3;
    };
    r78 = dyn r75[, , `lower.tail`](p9, p10, FALSE);
    check L96() else D42();
  D42():
    deopt 160 [r78];
  L96():
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L97() else L98();
  L19(r80):
    list1 = ldf list in base;
    r82 = dyn list1(statistic1, parameter1, r71, r78, r80);
    check L101() else D45();
  L97():
    object11 = ld object;
    check L99() else D43();
  L98():
    r79 = dyn base13(<sym object>, "call");
    goto L19(r79);
  D43():
    deopt 164 [object11];
  D45():
    deopt 171 [r82];
  L99():
    object12 = force? object11;
    checkMissing(object12);
    attr = ldf attr in base;
    r81 = dyn attr(object12, "call");
    check L100() else D44();
  L101():
    goto L17(r82);
  D44():
    deopt 168 [r81];
  L100():
    goto L19(r81);
  }
}