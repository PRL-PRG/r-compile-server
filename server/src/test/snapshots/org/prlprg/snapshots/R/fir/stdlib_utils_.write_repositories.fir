fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner407476990;
    st `.write_repositories` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner407476990(repos, file, `...`) {
  (reg repos:*, reg file:*, reg ddd:dots) -+> V { var repos:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, reg stdout:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg repos1:*, reg repos2:V, reg length:cls, reg r7:V, reg sprintf:cls, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg rep_int:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg repos3:*, reg repos4:V, reg names:cls, reg r16:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg repos5:*, reg repos6:V, reg names1:cls, reg r20:V, reg p4:p(V +), reg repos7:*, reg repos8:V, reg p5:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg ____:cls, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg p6:p(V +), reg r27:V, reg n:*, reg n1:V, reg rep_len:cls, reg r28:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg ____1:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r32:V, reg p8:p(V +), reg r34:V, reg n2:*, reg n3:V, reg rep_len1:cls, reg r35:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg ____2:cls, reg x8:*, reg x9:V, reg c2:L, reg x11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r39:V, reg p10:p(V +), reg r41:V, reg n4:*, reg n5:V, reg rep_len2:cls, reg r42:V, reg p11:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg ____3:cls, reg x12:*, reg x13:V, reg c3:L, reg x15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r46:V, reg p12:p(V +), reg r48:V, reg n6:*, reg n7:V, reg rep_len3:cls, reg r49:V, reg p13:p(V +), reg r51:V, reg writeLines:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg h:*, reg h1:V, reg s:*, reg s1:V, reg c4:cls, reg r54:V, reg p14:p(V +), reg file1:*, reg file2:V, reg p15:p(V +), reg r57:V |
    mkenv;
    st repos = repos;
    file_isMissing = missing.0(file);
    if file_isMissing then L0() else L1(file);
  L0():
    p = prom<V +>{
      stdout = ldf stdout;
      r = dyn stdout();
      return r;
    };
    goto L1(p);
  L1(file_orDefault):
    st file = file_orDefault;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r3):
    st x = r3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    list = ldf list;
    check L6() else D0();
  L5():
    r2 = dyn base(<sym ...>);
    goto L2(r2);
  D0():
    deopt 2 [];
  L3(r6):
    st n = r6;
    st h = "menu_name\tURL\tdefault\tsource\twin.binary\tmac.binary";
    sprintf = ldf sprintf;
    check L12() else D4();
  L6():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L7() else D1();
  L8():
    repos1 = ld repos;
    check L10() else D2();
  L9():
    r5 = dyn base1(<sym repos>);
    goto L3(r5);
  D1():
    deopt 4 [r4];
  D2():
    deopt 8 [repos1];
  D4():
    deopt 17 [];
  L7():
    goto L2(r4);
  L10():
    repos2 = force? repos1;
    checkMissing(repos2);
    length = ldf length in base;
    r7 = dyn length(repos2);
    check L11() else D3();
  L12():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        sym2 = ldf `rep.int`;
        base2 = ldf `rep.int` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        rep_int = ldf `rep.int` in base;
        r10 = dyn rep_int("%s", 7);
        goto L0(r10);
      L2():
        r8 = dyn base2("%s", 7);
        goto L0(r8);
      };
      r12 = dyn paste[, collapse](p1, "\t");
      return r12;
    };
    p3 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      repos3 = ld repos;
      repos4 = force? repos3;
      checkMissing(repos4);
      names = ldf names in base;
      r16 = dyn names(repos4);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym repos>);
      goto L0(r14);
    };
    p4 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      repos5 = ld repos;
      repos6 = force? repos5;
      checkMissing(repos6);
      names1 = ldf names in base;
      r20 = dyn names1(repos6);
      goto L0(r20);
    L2():
      r18 = dyn base4(<sym repos>);
      goto L0(r18);
    };
    p5 = prom<V +>{
      repos7 = ld repos;
      repos8 = force? repos7;
      checkMissing(repos8);
      return repos8;
    };
    p7 = prom<V +>{
      sym5 = ldf rep_len;
      base5 = ldf rep_len in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      ____ = ldf `%||%`;
      p6 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        c = `is.object`(x1);
        if c then L1() else L2(x1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x3):
        r25 = `$`(x3, <sym default>);
        goto L0(r25);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r27 = dyn ____(p6, "TRUE");
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      rep_len = ldf rep_len in base;
      r28 = dyn rep_len(r27, n1);
      goto L0(r28);
    L2():
      r23 = dyn base5(<lang `%||%`(`$`(x, default), "TRUE")>, <sym n>);
      goto L0(r23);
    };
    p9 = prom<V +>{
      sym6 = ldf rep_len;
      base6 = ldf rep_len in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      ____1 = ldf `%||%`;
      p8 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        c1 = `is.object`(x5);
        if c1 then L1() else L2(x5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x7):
        r32 = `$`(x7, <sym source>);
        goto L0(r32);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r34 = dyn ____1(p8, "NA");
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      rep_len1 = ldf rep_len in base;
      r35 = dyn rep_len1(r34, n3);
      goto L0(r35);
    L2():
      r30 = dyn base6(<lang `%||%`(`$`(x, source), "NA")>, <sym n>);
      goto L0(r30);
    };
    p11 = prom<V +>{
      sym7 = ldf rep_len;
      base7 = ldf rep_len in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      ____2 = ldf `%||%`;
      p10 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        c2 = `is.object`(x9);
        if c2 then L1() else L2(x9);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x9);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x11):
        r39 = `$`(x11, <sym win.binary>);
        goto L0(r39);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r41 = dyn ____2(p10, "NA");
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      rep_len2 = ldf rep_len in base;
      r42 = dyn rep_len2(r41, n5);
      goto L0(r42);
    L2():
      r37 = dyn base7(<lang `%||%`(`$`(x, win.binary), "NA")>, <sym n>);
      goto L0(r37);
    };
    p13 = prom<V +>{
      sym8 = ldf rep_len;
      base8 = ldf rep_len in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      ____3 = ldf `%||%`;
      p12 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        c3 = `is.object`(x13);
        if c3 then L1() else L2(x13);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x13);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x15):
        r46 = `$`(x15, <sym mac.binary>);
        goto L0(r46);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r48 = dyn ____3(p12, "NA");
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      rep_len3 = ldf rep_len in base;
      r49 = dyn rep_len3(r48, n7);
      goto L0(r49);
    L2():
      r44 = dyn base8(<lang `%||%`(`$`(x, mac.binary), "NA")>, <sym n>);
      goto L0(r44);
    };
    r51 = dyn sprintf(p2, p3, p4, p5, p7, p9, p11, p13);
    check L13() else D5();
  D3():
    deopt 11 [r7];
  D5():
    deopt 26 [r51];
  L11():
    goto L3(r7);
  L13():
    st s = r51;
    writeLines = ldf writeLines;
    check L14() else D6();
  D6():
    deopt 29 [];
  L14():
    p14 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      h = ld h;
      h1 = force? h;
      checkMissing(h1);
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      c4 = ldf c in base;
      r54 = dyn c4(h1, s1);
      goto L0(r54);
    L2():
      r52 = dyn base9(<sym h>, <sym s>);
      goto L0(r52);
    };
    p15 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r57 = dyn writeLines(p14, p15);
    check L15() else D7();
  D7():
    deopt 32 [r57];
  L15():
    popenv;
    return r57;
  }
}