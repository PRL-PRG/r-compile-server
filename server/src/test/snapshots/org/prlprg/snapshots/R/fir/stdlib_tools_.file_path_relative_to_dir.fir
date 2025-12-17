fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1167382798;
    st `.file_path_relative_to_dir` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1167382798(x, dir, add) {
  (reg x:*, reg dir:*, reg add:*) -+> V { var x:*, var dir:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg startsWith:cls, reg x1:*, reg x2:V, reg p:p(V +), reg dir1:*, reg dir2:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V, reg c:L, reg add1:*, reg add2:V, reg c1:L, reg file_path:cls, reg basename:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg substring:cls, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r9:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg dir5:*, reg dir6:V, reg nchar:cls, reg r13:V, reg r14:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg r19:V, reg substring1:cls, reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r20:V, reg p7:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg dir7:*, reg dir8:V, reg nchar1:cls, reg r24:V, reg r25:V, reg p8:p(V +), reg r27:V, reg l:*, reg c4:L, reg r29:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r31:V, reg dx5:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r32:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    st dir = dir;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(FALSE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c = `as.logical`(r1);
    if c then L12() else L2();
  L7():
    startsWith = ldf startsWith;
    check L9() else D0();
  L8():
    r = dyn base(<lang `<-`(ind, startsWith(x, dir))>);
    goto L1(r);
  D0():
    deopt 3 [];
  L2():
    goto L6();
  L6():
    x11 = ld x;
    check L25() else D9();
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r4 = dyn startsWith(p, p1);
    check L10() else D1();
  L12():
    add1 = ld add;
    check L13() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 10 [add1];
  D9():
    deopt 29 [x11];
  L10():
    st ind = r4;
    any = ldf any in base;
    r5 = dyn any(r4);
    check L11() else D2();
  L13():
    add2 = force? add1;
    checkMissing(add2);
    c1 = `as.logical`(add2);
    if c1 then L14() else L3();
  L25():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  D2():
    deopt 9 [r5];
  L3():
    substring1 = ldf substring;
    check L18() else D6();
  L4(r19):
    l = ld x;
    c4 = `is.object`(l);
    if c4 then L20() else L21(r19, l);
  L11():
    goto L1(r5);
  L14():
    file_path = ldf `file.path`;
    check L15() else D4();
  D4():
    deopt 13 [];
  D6():
    deopt 18 [];
  L5(r31, dx5):
    st x = dx5;
    goto L6();
  L15():
    p3 = prom<V +>{
      basename = ldf basename;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r7 = dyn basename(p2);
      return r7;
    };
    p6 = prom<V +>{
      substring = ldf substring;
      p4 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c2 = `is.object`(x4);
        if c2 then L1() else L2(x4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x6):
        ind = ld ind;
        ind1 = force? ind;
        __ = ldf `[` in base;
        r9 = dyn __(x6, ind1);
        goto L0(r9);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p5 = prom<V +>{
        sym1 = ldf nchar;
        base1 = ldf nchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r12):
        r14 = `+`(r12, 2);
        return r14;
      L1():
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        nchar = ldf nchar in base;
        r13 = dyn nchar(dir6, "chars", FALSE, NA_LGL);
        goto L0(r13);
      L2():
        r11 = dyn base1(<sym dir>);
        goto L0(r11);
      };
      r16 = dyn substring(p4, p5);
      return r16;
    };
    r18 = dyn file_path(p3, p6);
    check L16() else D5();
  L18():
    p7 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c3 = `is.object`(x8);
      if c3 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      ind2 = ld ind;
      ind3 = force? ind2;
      __1 = ldf `[` in base;
      r20 = dyn __1(x10, ind3);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p8 = prom<V +>{
      sym2 = ldf nchar;
      base2 = ldf nchar in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      r25 = `+`(r23, 2);
      return r25;
    L1():
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      nchar1 = ldf nchar in base;
      r24 = dyn nchar1(dir8, "chars", FALSE, NA_LGL);
      goto L0(r24);
    L2():
      r22 = dyn base2(<sym dir>);
      goto L0(r22);
    };
    r27 = dyn substring1(p7, p8);
    check L19() else D7();
  L20():
    dr4 = tryDispatchBuiltin.0("[<-", l, r19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(r19, dr4);
  L21(r29, l2):
    ind4 = ld ind;
    check L23() else D8();
  D5():
    deopt 16 [r18];
  D7():
    deopt 21 [r27];
  D8():
    deopt 23 [r29, l2, r19, ind4];
  L16():
    goto L4(r18);
  L19():
    goto L4(r27);
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(r19, dx4);
  L23():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l2, r19, ind5);
    goto L5(r29, r32);
  }
}