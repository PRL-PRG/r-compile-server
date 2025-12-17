fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st revert_install_time_patches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg WINDOWS:*, reg WINDOWS1:V, reg c1:L, reg c3:V, reg dir_exists:cls, reg r2:V, reg c4:L, reg c5:V, reg c7:L, reg sort:cls, reg list_files:cls, reg r3:V, reg p:p(V +), reg r5:V, reg patches:*, reg patches1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg paste0:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r7:V, reg system2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg c9:cls, reg r10:V, reg p4:p(V +), reg fname:*, reg fname1:V, reg p5:p(V +), reg r13:V, reg r14:V, reg c10:L, reg message:cls, reg p6:*, reg p7:V, reg p8:p(V +), reg r16:V, reg i7:I, reg message1:cls, reg p9:*, reg p10:V, reg p11:p(V +), reg r19:V, reg unlink:cls, reg r20:V |
    mkenv;
    _Platform = ld `.Platform`;
    check L6() else D0();
  D0():
    deopt 0 [_Platform];
  L6():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L8() else L9(_Platform1);
  L7(dx1):
    r1 = `==`(dx1, "windows");
    st WINDOWS = r1;
    WINDOWS = ld WINDOWS;
    check L11() else D1();
  L8():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L7(r);
  D1():
    deopt 6 [WINDOWS];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c1 = `as.logical`(WINDOWS1);
    if c1 then L12() else L0(c1);
  L0(c3):
    c7 = `as.logical`(c3);
    if c7 then L16() else L1();
  L12():
    dir_exists = ldf `dir.exists`;
    check L13() else D2();
  D2():
    deopt 9 [c1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L13():
    r2 = dyn dir_exists("install_time_patches");
    check L14() else D3();
  L16():
    sort = ldf sort;
    check L17() else D4();
  D3():
    deopt 11 [c1, r2];
  D4():
    deopt 14 [];
  L14():
    c4 = `as.logical`(r2);
    c5 = `&&`(c1, c4);
    goto L0(c5);
  L17():
    p = prom<V +>{
      list_files = ldf `list.files`;
      r3 = dyn list_files("install_time_patches");
      return r3;
    };
    r5 = dyn sort[, decreasing](p, TRUE);
    check L18() else D5();
  D5():
    deopt 18 [r5];
  L18():
    st patches = r5;
    patches = ld patches;
    check L19() else D6();
  D6():
    deopt 20 [patches];
  L19():
    patches1 = force? patches;
    checkMissing(patches1);
    s = toForSeq(patches1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L20() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    paste0 = ldf paste0;
    check L21() else D7();
  L20():
    unlink = ldf unlink;
    check L31() else D15();
  D7():
    deopt 23 [i2];
  D15():
    deopt 54 [];
  L21():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r7 = dyn paste0("install_time_patches/", p3);
    check L22() else D8();
  L31():
    r20 = dyn unlink[, recursive]("install_time_patches", TRUE);
    check L32() else D16();
  D8():
    deopt 26 [i2, r7];
  D16():
    deopt 58 [r20];
  L22():
    st fname = r7;
    system2 = ldf system2;
    check L23() else D9();
  L32():
    popenv;
    return r20;
  D9():
    deopt 29 [i2];
  L23():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c9 = ldf c in base;
      r10 = dyn c9("-p2", "--binary", "--force", "--reverse");
      goto L0(r10);
    L2():
      r8 = dyn base("-p2", "--binary", "--force", "--reverse");
      goto L0(r8);
    };
    p5 = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      return fname1;
    };
    r13 = dyn system2[, args, stdin]("patch", p4, p5);
    check L24() else D10();
  D10():
    deopt 35 [i2, r13];
  L24():
    r14 = `!=`(r13, 0.0);
    c10 = `as.logical`(r14);
    if c10 then L25() else L3();
  L3():
    message1 = ldf message;
    check L29() else D13();
  L4(i7):
    goto L2(i7);
  L25():
    message = ldf message;
    check L26() else D11();
  D11():
    deopt 39 [i2];
  D13():
    deopt 45 [i2];
  L26():
    p8 = prom<V +>{
      p6 = ld p;
      p7 = force? p6;
      checkMissing(p7);
      return p7;
    };
    r16 = dyn message("WARNING: failed to revert patch ", p8, "\n");
    check L27() else D12();
  L29():
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      return p10;
    };
    r19 = dyn message1("Reverted installation-time patch ", p11, " in package installation\n");
    check L30() else D14();
  D12():
    deopt 43 [i2, r16];
  D14():
    deopt 49 [i2, r19];
  L27():
    goto L4(i2);
  L30():
    goto L4(i2);
  }
}