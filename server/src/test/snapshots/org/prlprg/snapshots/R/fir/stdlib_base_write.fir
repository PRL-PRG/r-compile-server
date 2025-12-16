fun main() {
  () -+> V { reg r:cls, reg write:cls, reg month_abb:*, reg month_abb1:V, reg p:p(V +), reg r2:V, reg write1:cls, reg stack_loss:*, reg stack_loss1:V, reg p1:p(V +), reg r4:V, reg tempfile:cls, reg r5:V, reg write2:cls, reg fil:*, reg fil1:V, reg p2:p(V +), reg r7:V, reg write3:cls, reg month_abb2:*, reg month_abb3:V, reg p3:p(V +), reg fil2:*, reg fil3:V, reg p4:p(V +), reg r10:V, reg write4:cls, reg fil4:*, reg fil5:V, reg p5:p(V +), reg r12:V, reg write5:cls, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg stack_loss2:*, reg stack_loss3:V, reg r15:V, reg p6:p(V +), reg fil6:*, reg fil7:V, reg p7:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg interactive:cls, reg r21:V, reg c:L, reg file_show:cls, reg fil8:*, reg fil9:V, reg p8:p(V +), reg r23:V, reg unlink:cls, reg fil10:*, reg fil11:V, reg p9:p(V +), reg r26:V |
    mkenv;
    r = clos `inner-1142238791`;
    st write = r;
    write = ldf write;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      month_abb = ld `month.abb`;
      month_abb1 = force? month_abb;
      checkMissing(month_abb1);
      return month_abb1;
    };
    r2 = dyn write(p, "");
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    write1 = ldf write;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    p1 = prom<V +>{
      stack_loss = ld `stack.loss`;
      stack_loss1 = force? stack_loss;
      checkMissing(stack_loss1);
      return stack_loss1;
    };
    r4 = dyn write1(p1, "");
    check L6() else D3();
  D3():
    deopt 12 [r4];
  L6():
    tempfile = ldf tempfile;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    r5 = dyn tempfile("data");
    check L8() else D5();
  D5():
    deopt 16 [r5];
  L8():
    st fil = r5;
    write2 = ldf write;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p2 = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r7 = dyn write2("# Model settings", p2);
    check L10() else D7();
  D7():
    deopt 22 [r7];
  L10():
    write3 = ldf write;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p3 = prom<V +>{
      month_abb2 = ld `month.abb`;
      month_abb3 = force? month_abb2;
      checkMissing(month_abb3);
      return month_abb3;
    };
    p4 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r10 = dyn write3[, , ncolumns, append](p3, p4, 6.0, TRUE);
    check L12() else D9();
  D9():
    deopt 31 [r10];
  L12():
    write4 = ldf write;
    check L13() else D10();
  D10():
    deopt 33 [];
  L13():
    p5 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r12 = dyn write4[, , append]("\n# Initial parameter values", p5, TRUE);
    check L14() else D11();
  D11():
    deopt 38 [r12];
  L14():
    write5 = ldf write;
    check L15() else D12();
  D12():
    deopt 40 [];
  L15():
    p6 = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r14):
      return r14;
    L1():
      stack_loss2 = ld `stack.loss`;
      stack_loss3 = force? stack_loss2;
      checkMissing(stack_loss3);
      r15 = sqrt(stack_loss3);
      goto L0(r15);
    L2():
      r13 = dyn base(<sym stack.loss>);
      goto L0(r13);
    };
    p7 = prom<V +>{
      fil6 = ld fil;
      fil7 = force? fil6;
      checkMissing(fil7);
      return fil7;
    };
    r18 = dyn write5[, , append](p6, p7, TRUE);
    check L16() else D13();
  D13():
    deopt 45 [r18];
  L16():
    sym1 = ldf interactive;
    base1 = ldf interactive in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L0(r20):
    c = `as.logical`(r20);
    if c then L20() else L1();
  L17():
    interactive = ldf interactive in base;
    r21 = dyn interactive();
    check L19() else D14();
  L18():
    r19 = dyn base1();
    goto L0(r19);
  D14():
    deopt 49 [r21];
  L1():
    goto L2();
  L2():
    unlink = ldf unlink;
    check L24() else D17();
  L19():
    goto L0(r21);
  L20():
    file_show = ldf `file.show`;
    check L21() else D15();
  D15():
    deopt 51 [];
  D17():
    deopt 57 [];
  L21():
    p8 = prom<V +>{
      fil8 = ld fil;
      fil9 = force? fil8;
      checkMissing(fil9);
      return fil9;
    };
    r23 = dyn file_show(p8);
    check L22() else D16();
  L24():
    p9 = prom<V +>{
      fil10 = ld fil;
      fil11 = force? fil10;
      checkMissing(fil11);
      return fil11;
    };
    r26 = dyn unlink(p9);
    check L25() else D18();
  D16():
    deopt 53 [r23];
  D18():
    deopt 59 [r26];
  L22():
    goto L2();
  L25():
    popenv;
    return r26;
  }
}
fun `inner-1142238791`(x, file, ncolumns, append, sep) {
  (reg x:*, reg file:*, reg ncolumns:*, reg append:*, reg sep:*) -+> V { var x:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var ncolumns:*, reg ncolumns_isMissing:L, reg ncolumns_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg p:p(V +), var append:*, reg append_isMissing:L, reg append_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg cat:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg file1:*, reg file2:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sep1:*, reg sep2:V, reg ncolumns1:*, reg ncolumns2:V, reg r9:V, reg rep_int:cls, reg r10:V, reg c2:cls, reg r11:V, reg p3:p(V +), reg append1:*, reg append2:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st x = x;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("data") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    ncolumns_isMissing = missing.0(ncolumns);
    if ncolumns_isMissing then L1() else L2(ncolumns);
  L1():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c1 = `as.logical`(r1);
      if c1 then L4() else L1();
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.character`(x2);
      goto L0(c);
    L3():
      r = dyn base(<sym x>);
      goto L0(r);
    L1():
      return 5.0;
    L4():
      return 1.0;
    };
    goto L2(p);
  L2(ncolumns_orDefault):
    st ncolumns = ncolumns_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L3(FALSE) else L3(append);
  L3(append_orDefault):
    st append = append_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L4(" ") else L4(sep);
  L4(sep_orDefault):
    st sep = sep_orDefault;
    cat = ldf cat;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r6):
      return r6;
    L2():
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r5 = dyn base1(<lang rep.int(sep, `-`(ncolumns, 1.0))>, "\n");
      goto L0(r5);
    L1(r8):
      c2 = ldf c in base;
      r11 = dyn c2(r8, "\n");
      goto L0(r11);
    L4():
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      ncolumns1 = ld ncolumns;
      ncolumns2 = force? ncolumns1;
      checkMissing(ncolumns2);
      r9 = `-`(ncolumns2, 1.0);
      rep_int = ldf `rep.int` in base;
      r10 = dyn rep_int(sep2, r9);
      goto L1(r10);
    L5():
      r7 = dyn base2(<sym sep>, <lang `-`(ncolumns, 1.0)>);
      goto L1(r7);
    };
    p4 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      return append2;
    };
    r14 = dyn cat[, file, sep, append](p1, p2, p3, p4);
    check L6() else D1();
  D1():
    deopt 9 [r14];
  L6():
    popenv;
    return r14;
  }
}