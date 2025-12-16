fun main() {
  () -+> V { reg r:cls, reg letters:*, reg letters1:V, reg noquote:cls, reg letters2:*, reg letters3:V, reg p:p(V +), reg r2:V, reg nql:*, reg nql1:V, reg l:*, reg c:L, reg r4:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r7:V, reg nql2:*, reg nql3:V, reg c1:L, reg nql5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r8:V, reg __:cls, reg r9:V, reg r10:cls, reg cmp_logical:cls, reg __1:cls, reg r11:V, reg r12:cls, reg r13:V, reg r14:V, reg p1:p(V +), reg r16:V, reg as_matrix:cls, reg format:cls, reg stackloss:*, reg stackloss1:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg noquote1:cls, reg chmat:*, reg chmat1:V, reg p4:p(V +), reg r22:V, reg chmat2:*, reg chmat3:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg capture_output:cls, reg stackloss2:*, reg stackloss3:V, reg p5:p(V +), reg r26:V, reg capture_output1:cls, reg chmat4:*, reg chmat5:V, reg p6:p(V +), reg r28:V, reg identical:cls, reg r29:V, reg p7:p(V +), reg r31:V |
    mkenv;
    r = clos inner236436312;
    st noquote = r;
    letters = ld letters;
    check L2() else D0();
  D0():
    deopt 3 [letters];
  L2():
    letters1 = force? letters;
    checkMissing(letters1);
    noquote = ldf noquote;
    check L3() else D1();
  D1():
    deopt 6 [];
  L3():
    p = prom<V +>{
      letters2 = ld letters;
      letters3 = force? letters2;
      checkMissing(letters3);
      return letters3;
    };
    r2 = dyn noquote(p);
    check L4() else D2();
  D2():
    deopt 8 [r2];
  L4():
    st nql = r2;
    nql = ld nql;
    check L5() else D3();
  D3():
    deopt 10 [nql];
  L5():
    nql1 = force? nql;
    checkMissing(nql1);
    l = ld nql;
    c = `is.object`(l);
    if c then L6() else L7("oh", l);
  L0(dx1):
    st nql = dx1;
    nql2 = ld nql;
    check L9() else D4();
  L6():
    dr = tryDispatchBuiltin.0("[<-", l, "oh");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7("oh", dr);
  L7(r4, l2):
    ___ = ldf `[<-` in base;
    r7 = dyn ___(l2, "oh", <int 1, 2, 3, 4>);
    goto L0(r7);
  D4():
    deopt 19 [nql2];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    nql3 = force? nql2;
    checkMissing(nql3);
    c1 = `is.object`(nql3);
    if c1 then L10() else L11(nql3);
  L1():
    r10 = clos inner1760349385;
    st `cmp.logical` = r10;
    cmp_logical = ldf `cmp.logical`;
    check L13() else D5();
  L10():
    dr2 = tryDispatchBuiltin.1("[", nql3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(nql5):
    r8 = `:`(1.0, 12.0);
    __ = ldf `[` in base;
    r9 = dyn __(nql5, r8);
    goto L1();
  D5():
    deopt 30 [];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1();
  L13():
    p1 = prom<V +>{
      __1 = ldf `::`;
      r11 = dyn __1("stats", "runif");
      checkFun.0(r11);
      r12 = r11 as cls;
      r13 = dyn r12(20.0);
      r14 = `>`(r13, 0.8);
      return r14;
    };
    r16 = dyn cmp_logical(p1);
    check L14() else D6();
  D6():
    deopt 32 [r16];
  L14():
    as_matrix = ldf `as.matrix`;
    check L15() else D7();
  D7():
    deopt 34 [];
  L15():
    p3 = prom<V +>{
      format = ldf format;
      p2 = prom<V +>{
        stackloss = ld stackloss;
        stackloss1 = force? stackloss;
        checkMissing(stackloss1);
        return stackloss1;
      };
      r18 = dyn format(p2);
      return r18;
    };
    r20 = dyn as_matrix(p3);
    check L16() else D8();
  D8():
    deopt 36 [r20];
  L16():
    st chmat = r20;
    noquote1 = ldf noquote;
    check L17() else D9();
  D9():
    deopt 39 [];
  L17():
    p4 = prom<V +>{
      chmat = ld chmat;
      chmat1 = force? chmat;
      checkMissing(chmat1);
      return chmat1;
    };
    r22 = dyn noquote1[, right](p4, TRUE);
    check L18() else D10();
  D10():
    deopt 43 [r22];
  L18():
    st chmat = r22;
    chmat2 = ld chmat;
    check L19() else D11();
  D11():
    deopt 45 [chmat2];
  L19():
    chmat3 = force? chmat2;
    checkMissing(chmat3);
    stopifnot = ldf stopifnot;
    check L20() else D12();
  D12():
    deopt 48 [];
  L20():
    p7 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r24):
      return r24;
    L1():
      capture_output = ldf `capture.output`;
      p5 = prom<V +>{
        stackloss2 = ld stackloss;
        stackloss3 = force? stackloss2;
        checkMissing(stackloss3);
        return stackloss3;
      };
      r26 = dyn capture_output(p5);
      capture_output1 = ldf `capture.output`;
      p6 = prom<V +>{
        chmat4 = ld chmat;
        chmat5 = force? chmat4;
        checkMissing(chmat5);
        return chmat5;
      };
      r28 = dyn capture_output1(p6);
      identical = ldf identical in base;
      r29 = dyn identical(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r29);
    L2():
      r23 = dyn base(<lang capture.output(stackloss)>, <lang capture.output(chmat)>);
      goto L0(r23);
    };
    r31 = dyn stopifnot(p7);
    check L21() else D13();
  D13():
    deopt 50 [r31];
  L21():
    popenv;
    return r31;
  }
}
fun inner236436312(obj, right) {
  (reg obj:*, reg right:*) -+> V { var obj:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg obj1:*, reg obj2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg obj3:*, reg obj4:V, reg attr:cls, reg r8:V, reg right1:*, reg right2:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg r12:V, reg c3:cls, reg r13:V, reg l:*, reg class__:cls, reg r14:V, reg obj5:*, reg obj6:V |
    mkenv;
    st obj = obj;
    right_isMissing = missing.0(right);
    if right_isMissing then L0(FALSE) else L0(right);
  L0(right_orDefault):
    st right = right_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L13() else L2();
  L9():
    obj1 = ld obj;
    check L11() else D0();
  L10():
    r = dyn base(<sym obj>, "noquote");
    goto L1(r);
  D0():
    deopt 2 [obj1];
  L2():
    goto L8();
  L8():
    obj5 = ld obj;
    check L30() else D9();
  L11():
    obj2 = force? obj1;
    checkMissing(obj2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(obj2, "noquote", FALSE);
    check L12() else D1();
  L13():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 7 [r2];
  D9():
    deopt 37 [obj5];
  L3(r5):
    l = ld obj;
    class__ = ldf `class<-`;
    check L27() else D7();
  L12():
    goto L1(r2);
  L14():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r4 = dyn base1(<lang attr(obj, "class")>, <lang if(right, c(right="noquote"), "noquote")>);
    goto L3(r4);
  L30():
    obj6 = force? obj5;
    checkMissing(obj6);
    popenv;
    return obj6;
  D7():
    deopt 31 [r5, l, r5];
  L4(r7):
    right1 = ld right;
    check L20() else D4();
  L16():
    obj3 = ld obj;
    check L18() else D2();
  L17():
    r6 = dyn base2(<sym obj>, "class");
    goto L4(r6);
  L27():
    r14 = dyn class__(l, NULL, r5);
    check L28() else D8();
  D2():
    deopt 13 [obj3];
  D4():
    deopt 18 [right1];
  D8():
    deopt 33 [r5, r14];
  L18():
    obj4 = force? obj3;
    checkMissing(obj4);
    attr = ldf attr in base;
    r8 = dyn attr(obj4, "class");
    check L19() else D3();
  L20():
    right2 = force? right1;
    checkMissing(right2);
    c1 = `as.logical`(right2);
    if c1 then L21() else L5();
  L28():
    st obj = r14;
    goto L8();
  D3():
    deopt 17 [r8];
  L5():
    goto L7("noquote");
  L7(r12):
    c3 = ldf c in base;
    r13 = dyn c3(r7, r12);
    check L26() else D6();
  L19():
    goto L4(r8);
  L21():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  D6():
    deopt 29 [r13];
  L6(r10):
    goto L7(r10);
  L22():
    c2 = ldf c in base;
    r11 = dyn c2("noquote");
    check L24() else D5();
  L23():
    r9 = dyn base3[right]("noquote");
    goto L6(r9);
  L26():
    goto L3(r13);
  D5():
    deopt 25 [r11];
  L24():
    goto L6(r11);
  }
}
fun inner1760349385(`log.v`) {
  (reg log_v:*) -+> V { var `log.v`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg log_v1:*, reg log_v2:V, reg as_logical:cls, reg r2:V, reg noquote:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg log_v3:*, reg log_v4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg c2:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg log_v5:*, reg log_v6:V, reg r12:V, reg __:cls, reg r13:V, reg p:p(V +), reg r15:V |
    mkenv;
    st `log.v` = log_v;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st `log.v` = r1;
    noquote = ldf noquote;
    check L5() else D2();
  L1():
    log_v1 = ld `log.v`;
    check L3() else D0();
  L2():
    r = dyn base(<sym log.v>);
    goto L0(r);
  D0():
    deopt 2 [log_v1];
  D2():
    deopt 8 [];
  L3():
    log_v2 = force? log_v1;
    checkMissing(log_v2);
    as_logical = ldf `as.logical` in base;
    r2 = dyn as_logical(log_v2);
    check L4() else D1();
  L5():
    p = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L0(r4):
      r6 = `==`(r4, 0.0);
      c = `as.logical`(r6);
      if c then L6() else L1();
    L4():
      log_v3 = ld `log.v`;
      log_v4 = force? log_v3;
      checkMissing(log_v4);
      length = ldf length in base;
      r5 = dyn length(log_v4);
      goto L0(r5);
    L5():
      r3 = dyn base1(<sym log.v>);
      goto L0(r3);
    L1():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L6():
      return "()";
    L2(r8):
      c2 = `is.object`(r8);
      if c2 then L10() else L11(r8);
    L8():
      c1 = ldf c in base;
      r9 = dyn c1(".", "|");
      goto L2(r9);
    L9():
      r7 = dyn base2(".", "|");
      goto L2(r7);
    L3(dx1):
      return dx1;
    L10():
      dr = tryDispatchBuiltin.1("[", r8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L12() else L11(dr);
    L11(r11):
      log_v5 = ld `log.v`;
      log_v6 = force? log_v5;
      checkMissing(log_v6);
      r12 = `+`(1.0, log_v6);
      __ = ldf `[` in base;
      r13 = dyn __(r11, r12);
      goto L3(r13);
    L12():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r15 = dyn noquote(p);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r15];
  L4():
    goto L0(r2);
  L6():
    popenv;
    return r15;
  }
}