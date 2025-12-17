fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501665066;
    st `.ts` = r;
    st window = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501665066(x, start, end, frequency, deltat, `...`, value) {
  (reg x:*, reg start:*, reg end:*, reg frequency:*, reg deltat:*, reg ddd:dots, reg value:*) -+> V { var x:*, var start:*, var end:*, var frequency:*, var deltat:*, var `...`:dots?, var value:*, reg tsp:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg match_call:cls, reg r2:V, reg l:*, reg c:L, reg r4:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg l3:*, reg c1:L, reg r9:L, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg x3:*, reg x4:V, reg l6:*, reg c2:L, reg x6:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg quote:cls, reg r16:V, reg l9:*, reg c3:L, reg r18:V, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r21:V, reg eval_parent:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r23:V, reg tsp1:cls, reg xx:*, reg xx1:V, reg p2:p(V +), reg r25:V, reg xxtsp:*, reg xxtsp1:V, reg c4:L, reg xxtsp3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r26:V, reg xxtsp4:*, reg xxtsp5:V, reg c5:L, reg xxtsp7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r27:V, reg start1:*, reg start2:V, reg end1:*, reg end2:V, reg r28:V, reg c6:L, reg stop:cls, reg r29:V, reg start3:*, reg start4:V, reg xtsp:*, reg xtsp1:V, reg c7:L, reg start6:V, reg xtsp3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg start8:V, reg dx13:V, reg __2:cls, reg r31:V, reg r32:V, reg c8:L, reg c9:V, reg end3:*, reg end4:V, reg xtsp4:*, reg xtsp5:V, reg c11:L, reg c13:L, reg end6:V, reg xtsp7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c15:L, reg end8:V, reg dx15:V, reg __3:cls, reg r33:V, reg r34:V, reg c16:L, reg c17:V, reg c19:L, reg warning:cls, reg r35:V, reg window:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r37:V, reg r38:V, reg start9:*, reg start10:V, reg xtsp8:*, reg xtsp9:V, reg c20:L, reg xtsp11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r39:V, reg min:cls, reg r40:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg end9:*, reg end10:V, reg xtsp12:*, reg xtsp13:V, reg c21:L, reg xtsp15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __5:cls, reg r44:V, reg max:cls, reg r45:V, reg p5:p(V +), reg r47:V, reg xtsp16:*, reg xtsp17:V, reg c22:L, reg xtsp19:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __6:cls, reg r49:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg round:cls, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg round1:cls, reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg xxtimes:*, reg xxtimes1:V, reg xtimes:*, reg xtimes1:V, reg match:cls, reg r58:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:V, reg ind:*, reg ind1:V, reg anyNA:cls, reg r61:V, reg c23:L, reg stop1:cls, reg r62:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg ind2:*, reg ind3:V, reg length:cls, reg r66:V, reg NROW:cls, reg value1:*, reg value2:V, reg p6:p(V +), reg r68:V, reg val_len:*, reg val_len1:V, reg r69:V, reg c24:L, reg stop2:cls, reg r70:V, reg val_len2:*, reg val_len3:V, reg len:*, reg len1:V, reg r72:V, reg c25:L, reg stop3:cls, reg r73:V, reg val_len4:*, reg val_len5:V, reg r75:V, reg c26:L, reg c28:V, reg len2:*, reg len3:V, reg val_len6:*, reg val_len7:V, reg __7:cls, reg r76:V, reg c29:L, reg c30:V, reg c32:L, reg stop4:cls, reg r77:V, reg NCOL:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg r80:V, reg r81:V, reg c33:L, reg value3:*, reg value4:V, reg l12:*, reg c34:L, reg value6:V, reg l14:*, reg dr22:V, reg dc11:L, reg dx22:V, reg value8:V, reg dx23:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r82:V, reg value10:*, reg value11:V, reg l15:*, reg c35:L, reg value13:V, reg l17:*, reg dr24:V, reg dc12:L, reg dx24:V, reg value15:V, reg dx25:V, reg ind6:*, reg ind7:V, reg ___1:cls, reg r83:V, reg x13:*, reg x14:V |
    mkenv;
    st x = x;
    st start = start;
    st end = end;
    st frequency = frequency;
    st deltat = deltat;
    st `...` = ddd;
    st value = value;
    tsp = ldf tsp;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn tsp(p);
    check L31() else D1();
  D1():
    deopt 3 [r1];
  L31():
    st xtsp = r1;
    match_call = ldf `match.call`;
    check L32() else D2();
  D2():
    deopt 6 [];
  L32():
    r2 = dyn match_call[`expand.dots`](FALSE);
    check L33() else D3();
  D3():
    deopt 9 [r2];
  L33():
    st m = r2;
    l = ld m;
    c = `is.object`(l);
    if c then L35() else L36(NULL, l);
  L34(dx1):
    st m = dx1;
    l3 = ld m;
    c1 = `is.object`(l3);
    if c1 then L39() else L40(TRUE, l3);
  L35():
    dr = tryDispatchBuiltin.0("$<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(NULL, dr);
  L36(r4, l2):
    r7 = `$<-`(l2, <sym value>, NULL);
    goto L34(r7);
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L38(dx3):
    st m = dx3;
    x3 = ld x;
    check L42() else D4();
  L39():
    dr2 = tryDispatchBuiltin.0("$<-", l3, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(TRUE, dr2);
  L40(r9, l5):
    r12 = `$<-`(l5, <sym extend>, TRUE);
    goto L38(r12);
  D4():
    deopt 21 [x3];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L38(dx2);
  L42():
    x4 = force? x3;
    checkMissing(x4);
    l6 = ld m;
    c2 = `is.object`(l6);
    if c2 then L44() else L45(x4, l6);
  L43(dx5):
    st m = dx5;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L44():
    dr4 = tryDispatchBuiltin.0("$<-", l6, x4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(x4, dr4);
  L45(x6, l8):
    r13 = `$<-`(l8, <sym x>, x4);
    goto L43(r13);
  L0(r15):
    l9 = ld m;
    c3 = `is.object`(l9);
    if c3 then L49() else L50(r15, l9);
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L47():
    quote = ldf quote in base;
    r16 = dyn quote(<lang `::`(stats, window)>);
    goto L0(r16);
  L48():
    r14 = dyn base(<lang `::`(stats, window)>);
    goto L0(r14);
  L1(dx7):
    st m = dx7;
    eval_parent = ldf `eval.parent`;
    check L52() else D5();
  L49():
    dr6 = tryDispatchBuiltin.0("[[<-", l9, r15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L51() else L50(r15, dr6);
  L50(r18, l11):
    ____ = ldf `[[<-` in base;
    r21 = dyn ____(l11, r15, 1);
    goto L1(r21);
  D5():
    deopt 35 [];
  L51():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx6);
  L52():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r23 = dyn eval_parent(p1);
    check L53() else D6();
  D6():
    deopt 37 [r23];
  L53():
    st xx = r23;
    tsp1 = ldf tsp;
    check L54() else D7();
  D7():
    deopt 40 [];
  L54():
    p2 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r25 = dyn tsp1(p2);
    check L55() else D8();
  D8():
    deopt 42 [r25];
  L55():
    st xxtsp = r25;
    xxtsp = ld xxtsp;
    check L56() else D9();
  D9():
    deopt 44 [xxtsp];
  L56():
    xxtsp1 = force? xxtsp;
    checkMissing(xxtsp1);
    c4 = `is.object`(xxtsp1);
    if c4 then L57() else L58(xxtsp1);
  L2(dx9):
    st start = dx9;
    xxtsp4 = ld xxtsp;
    check L60() else D10();
  L57():
    dr8 = tryDispatchBuiltin.1("[", xxtsp1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(dr8);
  L58(xxtsp3):
    __ = ldf `[` in base;
    r26 = dyn __(xxtsp3, 1);
    goto L2(r26);
  D10():
    deopt 50 [xxtsp4];
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L2(dx8);
  L60():
    xxtsp5 = force? xxtsp4;
    checkMissing(xxtsp5);
    c5 = `is.object`(xxtsp5);
    if c5 then L61() else L62(xxtsp5);
  L3(dx11):
    st end = dx11;
    start1 = ld start;
    check L64() else D11();
  L61():
    dr10 = tryDispatchBuiltin.1("[", xxtsp5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62(dr10);
  L62(xxtsp7):
    __1 = ldf `[` in base;
    r27 = dyn __1(xxtsp7, 2);
    goto L3(r27);
  D11():
    deopt 56 [start1];
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L3(dx10);
  L64():
    start2 = force? start1;
    checkMissing(start2);
    end1 = ld end;
    check L65() else D12();
  D12():
    deopt 57 [start2, end1];
  L65():
    end2 = force? end1;
    checkMissing(end2);
    r28 = `>`(start2, end2);
    c6 = `as.logical`(r28);
    if c6 then L66() else L4();
  L4():
    goto L5();
  L5():
    start3 = ld start;
    check L70() else D15();
  L66():
    stop = ldf stop;
    check L67() else D13();
  D13():
    deopt 61 [];
  D15():
    deopt 66 [start3];
  L67():
    r29 = dyn stop("'start' > 'end'");
    check L68() else D14();
  L70():
    start4 = force? start3;
    checkMissing(start4);
    xtsp = ld xtsp;
    check L71() else D16();
  D14():
    deopt 63 [r29];
  D16():
    deopt 67 [start4, xtsp];
  L68():
    goto L5();
  L71():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    c7 = `is.object`(xtsp1);
    if c7 then L72() else L73(start4, xtsp1);
  L6(start8, dx13):
    r32 = `<`(start8, dx13);
    c8 = `as.logical`(r32);
    if c8 then L7(c8) else L75();
  L72():
    dr12 = tryDispatchBuiltin.1("[", xtsp1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L74() else L73(start4, dr12);
  L73(start6, xtsp3):
    __2 = ldf `[` in base;
    r31 = dyn __2(xtsp3, 1);
    goto L6(start6, r31);
  L7(c9):
    c19 = `as.logical`(c9);
    if c19 then L82() else L9();
  L74():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L6(start4, dx12);
  L75():
    end3 = ld end;
    check L76() else D17();
  D17():
    deopt 73 [c8, end3];
  L9():
    goto L10();
  L10():
    xtsp16 = ld xtsp;
    check L88() else D23();
  L76():
    end4 = force? end3;
    checkMissing(end4);
    xtsp4 = ld xtsp;
    check L77() else D18();
  L82():
    warning = ldf warning;
    check L83() else D19();
  D18():
    deopt 74 [c8, end4, xtsp4];
  D19():
    deopt 82 [];
  D23():
    deopt 98 [xtsp16];
  L77():
    xtsp5 = force? xtsp4;
    checkMissing(xtsp5);
    c11 = `is.object`(xtsp5);
    if c11 then L78() else L79(c8, end4, xtsp5);
  L83():
    r35 = dyn warning[, `call.`]("extending time series when replacing values", FALSE);
    check L84() else D20();
  L88():
    xtsp17 = force? xtsp16;
    checkMissing(xtsp17);
    c22 = `is.object`(xtsp17);
    if c22 then L89() else L90(xtsp17);
  D20():
    deopt 86 [r35];
  L8(c15, end8, dx15):
    r34 = `>`(end8, dx15);
    c16 = `as.logical`(r34);
    c17 = `||`(c15, c16);
    goto L7(c17);
  L11(dx21):
    st xfreq = dx21;
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L92() else L93();
  L78():
    dr14 = tryDispatchBuiltin.1("[", xtsp5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L80() else L79(c8, end4, dr14);
  L79(c13, end6, xtsp7):
    __3 = ldf `[` in base;
    r33 = dyn __3(xtsp7, 2);
    goto L8(c13, end6, r33);
  L84():
    window = ldf window;
    check L85() else D21();
  L89():
    dr20 = tryDispatchBuiltin.1("[", xtsp17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L91() else L90(dr20);
  L90(xtsp19):
    __6 = ldf `[` in base;
    r49 = dyn __6(xtsp19, 3);
    goto L11(r49);
  D21():
    deopt 88 [];
  L12(r51):
    st xtimes = r51;
    sym4 = ldf round;
    base4 = ldf round in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L94() else L95();
  L80():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L8(c8, end4, dx14);
  L85():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p4 = prom<V +>{
      sym1 = ldf min;
      base1 = ldf min in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r38):
      return r38;
    L2():
      start9 = ld start;
      start10 = force? start9;
      checkMissing(start10);
      xtsp8 = ld xtsp;
      xtsp9 = force? xtsp8;
      checkMissing(xtsp9);
      c20 = `is.object`(xtsp9);
      if c20 then L4() else L5(xtsp9);
    L3():
      r37 = dyn base1(<sym start>, <lang `[`(xtsp, 1)>);
      goto L0(r37);
    L1(dx17):
      min = ldf min in base;
      r40 = dyn min(start10, dx17);
      goto L0(r40);
    L4():
      dr16 = tryDispatchBuiltin.1("[", xtsp9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L6() else L5(dr16);
    L5(xtsp11):
      __4 = ldf `[` in base;
      r39 = dyn __4(xtsp11, 1);
      goto L1(r39);
    L6():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    };
    p5 = prom<V +>{
      sym2 = ldf max;
      base2 = ldf max in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r43):
      return r43;
    L2():
      end9 = ld end;
      end10 = force? end9;
      checkMissing(end10);
      xtsp12 = ld xtsp;
      xtsp13 = force? xtsp12;
      checkMissing(xtsp13);
      c21 = `is.object`(xtsp13);
      if c21 then L4() else L5(xtsp13);
    L3():
      r42 = dyn base2(<sym end>, <lang `[`(xtsp, 2)>);
      goto L0(r42);
    L1(dx19):
      max = ldf max in base;
      r45 = dyn max(end10, dx19);
      goto L0(r45);
    L4():
      dr18 = tryDispatchBuiltin.1("[", xtsp13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(xtsp15):
      __5 = ldf `[` in base;
      r44 = dyn __5(xtsp15, 2);
      goto L1(r44);
    L6():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx18);
    };
    r47 = dyn window[, , , extend](p3, p4, p5, TRUE);
    check L86() else D22();
  L91():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L11(dx20);
  L92():
    round = ldf round in base;
    r52 = dyn round(<lang `*`(xfreq, time(x))>);
    goto L12(r52);
  L93():
    r50 = dyn base3(<lang `*`(xfreq, time(x))>);
    goto L12(r50);
  D22():
    deopt 94 [r47];
  L13(r54):
    st xxtimes = r54;
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  L86():
    st x = r47;
    goto L10();
  L94():
    round1 = ldf round in base;
    r55 = dyn round1(<lang `*`(xfreq, time(xx))>);
    goto L13(r55);
  L95():
    r53 = dyn base4(<lang `*`(xfreq, time(xx))>);
    goto L13(r53);
  L14(r57):
    st ind = r57;
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L96():
    xxtimes = ld xxtimes;
    check L98() else D24();
  L97():
    r56 = dyn base5(<sym xxtimes>, <sym xtimes>);
    goto L14(r56);
  D24():
    deopt 114 [xxtimes];
  L15(r60):
    c23 = `as.logical`(r60);
    if c23 then L105() else L16();
  L98():
    xxtimes1 = force? xxtimes;
    checkMissing(xxtimes1);
    xtimes = ld xtimes;
    check L99() else D25();
  L101():
    ind = ld ind;
    check L103() else D27();
  L102():
    r59 = dyn base6(<sym ind>);
    goto L15(r59);
  D25():
    deopt 116 [xtimes];
  D27():
    deopt 125 [ind];
  L16():
    goto L17();
  L17():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  L99():
    xtimes1 = force? xtimes;
    checkMissing(xtimes1);
    match = ldf match in base;
    r58 = dyn match(xxtimes1, xtimes1, NA_INT, NULL);
    check L100() else D26();
  L103():
    ind1 = force? ind;
    checkMissing(ind1);
    anyNA = ldf anyNA in base;
    r61 = dyn anyNA(ind1);
    check L104() else D28();
  L105():
    stop1 = ldf stop;
    check L106() else D29();
  D26():
    deopt 121 [r58];
  D28():
    deopt 128 [r61];
  D29():
    deopt 130 [];
  L18(r65):
    st len = r65;
    NROW = ldf NROW;
    check L113() else D33();
  L100():
    goto L14(r58);
  L104():
    goto L15(r61);
  L106():
    r62 = dyn stop1("times to be replaced do not match");
    check L107() else D30();
  L109():
    ind2 = ld ind;
    check L111() else D31();
  L110():
    r64 = dyn base7(<sym ind>);
    goto L18(r64);
  D30():
    deopt 132 [r62];
  D31():
    deopt 137 [ind2];
  D33():
    deopt 143 [];
  L107():
    goto L17();
  L111():
    ind3 = force? ind2;
    checkMissing(ind3);
    length = ldf length in base;
    r66 = dyn length(ind3);
    check L112() else D32();
  L113():
    p6 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r68 = dyn NROW(p6);
    check L114() else D34();
  D32():
    deopt 140 [r66];
  D34():
    deopt 145 [r68];
  L112():
    goto L18(r66);
  L114():
    st val_len = r68;
    val_len = ld val_len;
    check L115() else D35();
  D35():
    deopt 147 [val_len];
  L115():
    val_len1 = force? val_len;
    checkMissing(val_len1);
    r69 = `!`(val_len1);
    c24 = `as.logical`(r69);
    if c24 then L116() else L19();
  L19():
    goto L20();
  L20():
    val_len2 = ld val_len;
    check L120() else D38();
  L116():
    stop2 = ldf stop;
    check L117() else D36();
  D36():
    deopt 151 [];
  D38():
    deopt 156 [val_len2];
  L117():
    r70 = dyn stop2("no replacement values supplied");
    check L118() else D37();
  L120():
    val_len3 = force? val_len2;
    checkMissing(val_len3);
    len = ld len;
    check L121() else D39();
  D37():
    deopt 153 [r70];
  D39():
    deopt 157 [val_len3, len];
  L118():
    goto L20();
  L121():
    len1 = force? len;
    checkMissing(len1);
    r72 = `>`(val_len3, len1);
    c25 = `as.logical`(r72);
    if c25 then L122() else L21();
  L21():
    goto L22();
  L22():
    val_len4 = ld val_len;
    check L126() else D42();
  L122():
    stop3 = ldf stop;
    check L123() else D40();
  D40():
    deopt 161 [];
  D42():
    deopt 166 [val_len4];
  L123():
    r73 = dyn stop3("too many replacement values supplied");
    check L124() else D41();
  L126():
    val_len5 = force? val_len4;
    checkMissing(val_len5);
    r75 = `>`(val_len5, 1);
    c26 = `as.logical`(r75);
    if c26 then L127() else L23(c26);
  D41():
    deopt 163 [r73];
  L23(c28):
    c32 = `as.logical`(c28);
    if c32 then L132() else L24();
  L124():
    goto L22();
  L127():
    len2 = ld len;
    check L128() else D43();
  D43():
    deopt 171 [c26, len2];
  L24():
    goto L25();
  L25():
    NCOL = ldf NCOL;
    check L136() else D48();
  L128():
    len3 = force? len2;
    checkMissing(len3);
    val_len6 = ld val_len;
    check L129() else D44();
  L132():
    stop4 = ldf stop;
    check L133() else D46();
  D44():
    deopt 173 [c26, val_len6];
  D46():
    deopt 179 [];
  D48():
    deopt 185 [];
  L129():
    val_len7 = force? val_len6;
    checkMissing(val_len7);
    __7 = ldf `%%` in base;
    r76 = dyn __7(len3, val_len7);
    check L130() else D45();
  L133():
    r77 = dyn stop4("number of values supplied is not a sub-multiple of the number of values to be replaced");
    check L134() else D47();
  L136():
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r80 = dyn NCOL(p7);
    check L137() else D49();
  D45():
    deopt 176 [c26, r76];
  D47():
    deopt 181 [r77];
  D49():
    deopt 187 [r80];
  L130():
    c29 = `as.logical`(r76);
    c30 = `&&`(c26, c29);
    goto L23(c30);
  L134():
    goto L25();
  L137():
    r81 = `==`(r80, 1);
    c33 = `as.logical`(r81);
    if c33 then L138() else L26();
  L26():
    value10 = ld value;
    check L145() else D52();
  L28():
    x13 = ld x;
    check L150() else D54();
  L138():
    value3 = ld value;
    check L139() else D50();
  D50():
    deopt 190 [value3];
  D52():
    deopt 197 [value10];
  D54():
    deopt 206 [x13];
  L139():
    value4 = force? value3;
    checkMissing(value4);
    l12 = ld x;
    c34 = `is.object`(l12);
    if c34 then L140() else L141(value4, l12);
  L145():
    value11 = force? value10;
    checkMissing(value11);
    l15 = ld x;
    c35 = `is.object`(l15);
    if c35 then L146() else L147(value11, l15);
  L150():
    x14 = force? x13;
    checkMissing(x14);
    popenv;
    return x14;
  L27(value8, dx23):
    st x = dx23;
    goto L28();
  L29(value15, dx25):
    st x = dx25;
    goto L28();
  L140():
    dr22 = tryDispatchBuiltin.0("[<-", l12, value4);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L142() else L141(value4, dr22);
  L141(value6, l14):
    ind4 = ld ind;
    check L143() else D51();
  L146():
    dr24 = tryDispatchBuiltin.0("[<-", l15, value11);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L148() else L147(value11, dr24);
  L147(value13, l17):
    ind6 = ld ind;
    check L149() else D53();
  D51():
    deopt 193 [value6, l14, value4, ind4];
  D53():
    deopt 200 [value13, l17, value11, ind6];
  L142():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L27(value4, dx22);
  L143():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r82 = dyn ___(l14, value4, ind5);
    goto L27(value6, r82);
  L148():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L29(value11, dx24);
  L149():
    ind7 = force? ind6;
    ___1 = ldf `[<-` in base;
    r83 = dyn ___1(l15, ind7, <missing>, value11);
    goto L29(value13, r83);
  }
}