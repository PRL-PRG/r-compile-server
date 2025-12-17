fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3940039668;
    st `.getAllGroups` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3940039668(funs) {
  (reg funs:*) -+> V { var funs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg funs1:*, reg funs2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg funs3:*, reg funs4:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg i7:I, reg r8:V, reg funs5:*, reg funs6:V, reg lapply:cls, reg groups:*, reg groups1:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V, reg c1:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg funs7:*, reg funs8:V, reg length1:cls, reg r16:V, reg start:*, reg start1:V, reg r17:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg funs9:*, reg funs10:V, reg length2:cls, reg r20:V, reg start2:*, reg start3:V, reg r21:V, reg Recall:cls, reg funs11:*, reg funs12:V, reg c3:L, reg funs14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg start4:*, reg start5:V, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg funs17:V, reg r26:V, reg r27:V, reg funs18:*, reg funs19:V, reg length3:cls, reg r28:V, reg r29:V, reg __1:cls, reg r30:V, reg p2:p(V +), reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg more:*, reg more1:V, reg length4:cls, reg r35:V, reg nmore:*, reg nmore1:V, reg r36:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg funs20:*, reg funs21:V, reg more2:*, reg more3:V, reg c5:L, reg more5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nmore2:*, reg nmore3:V, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg more8:V, reg r43:V, reg r44:V, reg more9:*, reg more10:V, reg length5:cls, reg r45:V, reg r46:V, reg __2:cls, reg r47:V, reg c6:cls, reg r48:V, reg r49:V, reg funs22:*, reg funs23:V |
    mkenv;
    st funs = funs;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    st start = r1;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    funs1 = ld funs;
    check L17() else D0();
  L16():
    r = dyn base(<sym funs>);
    goto L0(r);
  D0():
    deopt 2 [funs1];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L17():
    funs2 = force? funs1;
    checkMissing(funs2);
    length = ldf length in base;
    r2 = dyn length(funs2);
    check L18() else D1();
  L19():
    funs3 = ld funs;
    check L21() else D2();
  L20():
    r3 = dyn base1(<sym funs>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [funs3];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L22() else L4();
  L18():
    goto L0(r2);
  L21():
    funs4 = force? funs3;
    checkMissing(funs4);
    r5 = seq_along(funs4);
    goto L1(r5);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    __ = ldf `@` in base;
    r6 = dyn __(<lang `[[`(funs, i)>, <sym group>);
    st groups = r6;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L3(i7, r8):
    st funs = r8;
    goto L2(i7);
  L5(r15):
    start = ld start;
    check L33() else D9();
  L23():
    funs5 = ld funs;
    check L25() else D3();
  L24():
    r7 = dyn base2(<sym funs>, <lang lapply(groups, function((what=), {
          `<-`(f, getGeneric(what));
          if(`!`(is.function(f)), stop("failed to find expected group generic function: ", what));
          f
        }, NULL))>);
    goto L3(i2, r7);
  L29():
    funs7 = ld funs;
    check L31() else D7();
  L30():
    r14 = dyn base3(<sym funs>);
    goto L5(r14);
  D3():
    deopt 16 [i2, funs5];
  D7():
    deopt 31 [funs7];
  D9():
    deopt 34 [r15, start];
  L25():
    funs6 = force? funs5;
    checkMissing(funs6);
    lapply = ldf lapply;
    check L26() else D4();
  L31():
    funs8 = force? funs7;
    checkMissing(funs8);
    length1 = ldf length in base;
    r16 = dyn length1(funs8);
    check L32() else D8();
  L33():
    start1 = force? start;
    checkMissing(start1);
    r17 = `>`(r15, start1);
    c2 = `as.logical`(r17);
    if c2 then L34() else L6();
  D4():
    deopt 19 [i2];
  D8():
    deopt 34 [r16];
  L6():
    goto L14();
  L14():
    funs22 = ld funs;
    check L63() else D24();
  L26():
    p = prom<V +>{
      groups = ld groups;
      groups1 = force? groups;
      checkMissing(groups1);
      return groups1;
    };
    p1 = prom<V +>{
      r10 = clos inner2203017188;
      return r10;
    };
    r12 = dyn lapply(p, p1);
    check L27() else D5();
  L32():
    goto L5(r16);
  L34():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  D5():
    deopt 22 [i2, r12];
  D24():
    deopt 83 [funs22];
  L7(r19):
    start2 = ld start;
    check L39() else D12();
  L27():
    c1 = ldf c in base;
    r13 = dyn c1(funs6, r12);
    check L28() else D6();
  L35():
    funs9 = ld funs;
    check L37() else D10();
  L36():
    r18 = dyn base4(<sym funs>);
    goto L7(r18);
  L63():
    funs23 = force? funs22;
    checkMissing(funs23);
    popenv;
    return funs23;
  D6():
    deopt 24 [i2, r13];
  D10():
    deopt 39 [funs9];
  D12():
    deopt 42 [r19, start2];
  L28():
    goto L3(i2, r13);
  L37():
    funs10 = force? funs9;
    checkMissing(funs10);
    length2 = ldf length in base;
    r20 = dyn length2(funs10);
    check L38() else D11();
  L39():
    start3 = force? start2;
    checkMissing(start3);
    r21 = `-`(r19, start3);
    st nmore = r21;
    Recall = ldf Recall;
    check L40() else D13();
  D11():
    deopt 42 [r20];
  D13():
    deopt 47 [];
  L38():
    goto L7(r20);
  L40():
    p2 = prom<V +>{
      funs11 = ld funs;
      funs12 = force? funs11;
      checkMissing(funs12);
      c3 = `is.object`(funs12);
      if c3 then L2() else L3(funs12);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", funs12);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(funs14):
      start4 = ld start;
      start5 = force? start4;
      checkMissing(start5);
      r22 = `+`(start5, 1.0);
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(funs17, r26, r27):
      r29 = `:`(r26, r27);
      __1 = ldf `[` in base;
      r30 = dyn __1(funs17, r29);
      goto L0(r30);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      funs18 = ld funs;
      funs19 = force? funs18;
      checkMissing(funs19);
      length3 = ldf length in base;
      r28 = dyn length3(funs19);
      goto L1(funs14, r22, r28);
    L6():
      r25 = dyn base5(<sym funs>);
      goto L1(funs14, r22, r25);
    };
    r32 = dyn Recall(p2);
    check L41() else D14();
  D14():
    deopt 49 [r32];
  L41():
    st more = r32;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L8(r34):
    nmore = ld nmore;
    check L46() else D17();
  L42():
    more = ld more;
    check L44() else D15();
  L43():
    r33 = dyn base6(<sym more>);
    goto L8(r33);
  D15():
    deopt 53 [more];
  D17():
    deopt 56 [r34, nmore];
  L44():
    more1 = force? more;
    checkMissing(more1);
    length4 = ldf length in base;
    r35 = dyn length4(more1);
    check L45() else D16();
  L46():
    nmore1 = force? nmore;
    checkMissing(nmore1);
    r36 = `>`(r34, nmore1);
    c4 = `as.logical`(r36);
    if c4 then L47() else L9();
  D16():
    deopt 56 [r35];
  L9():
    goto L13(NULL);
  L13(r49):
    goto L14();
  L45():
    goto L8(r35);
  L47():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L48() else L49();
  L10(r38):
    st funs = r38;
    goto L13(r38);
  L48():
    funs20 = ld funs;
    check L50() else D18();
  L49():
    r37 = dyn base7(<sym funs>, <lang `[`(more, `:`(`(`(`+`(nmore, 1.0)), length(more)))>);
    goto L10(r37);
  D18():
    deopt 61 [funs20];
  L50():
    funs21 = force? funs20;
    checkMissing(funs21);
    more2 = ld more;
    check L51() else D19();
  D19():
    deopt 63 [more2];
  L51():
    more3 = force? more2;
    checkMissing(more3);
    c5 = `is.object`(more3);
    if c5 then L52() else L53(more3);
  L11(dx3):
    c6 = ldf c in base;
    r48 = dyn c6(funs21, dx3);
    check L60() else D23();
  L52():
    dr2 = tryDispatchBuiltin.1("[", more3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(more5):
    nmore2 = ld nmore;
    check L55() else D20();
  D20():
    deopt 65 [more5, nmore2];
  D23():
    deopt 77 [r48];
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L55():
    nmore3 = force? nmore2;
    checkMissing(nmore3);
    r39 = `+`(nmore3, 1.0);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L56() else L57();
  L60():
    goto L10(r48);
  L12(more8, r43, r44):
    r46 = `:`(r43, r44);
    __2 = ldf `[` in base;
    r47 = dyn __2(more8, r46);
    goto L11(r47);
  L56():
    more9 = ld more;
    check L58() else D21();
  L57():
    r42 = dyn base8(<sym more>);
    goto L12(more5, r39, r42);
  D21():
    deopt 70 [more5, r39, more9];
  L58():
    more10 = force? more9;
    checkMissing(more10);
    length5 = ldf length in base;
    r45 = dyn length5(more10);
    check L59() else D22();
  D22():
    deopt 73 [more5, r39, r45];
  L59():
    goto L12(more5, r39, r45);
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg getGeneric:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg f:*, reg f1:V, reg is_function:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg what3:*, reg what4:V, reg p1:p(V +), reg r7:V, reg f2:*, reg f3:V |
    mkenv;
    st what = what;
    getGeneric = ldf getGeneric;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r1 = dyn getGeneric(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st f = r1;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L9() else L1();
  L5():
    f = ld f;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym f>);
    goto L0(r2);
  D2():
    deopt 7 [f];
  L1():
    goto L2();
  L2():
    f2 = ld f;
    check L13() else D6();
  L7():
    f1 = force? f;
    checkMissing(f1);
    is_function = ldf `is.function` in base;
    r4 = dyn is_function(f1);
    check L8() else D3();
  L9():
    stop = ldf stop;
    check L10() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 13 [];
  D6():
    deopt 19 [f2];
  L8():
    goto L0(r4);
  L10():
    p1 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    r7 = dyn stop("failed to find expected group generic function: ", p1);
    check L11() else D5();
  L13():
    f3 = force? f2;
    checkMissing(f3);
    popenv;
    return f3;
  D5():
    deopt 16 [r7];
  L11():
    goto L2();
  }
}