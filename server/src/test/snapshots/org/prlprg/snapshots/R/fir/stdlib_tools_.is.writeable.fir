fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.is.writeable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg paste0:cls, reg Sys_getpid:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg try:cls, reg dir_create:cls, reg fn:*, reg fn1:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg res:*, reg res1:V, reg inherits:cls, reg r12:V, reg c:L, reg c1:V, reg res2:*, reg res3:V, reg r13:V, reg c3:L, reg c4:V, reg c6:L, reg unlink:cls, reg fn2:*, reg fn3:V, reg p5:p(V +), reg r16:V, reg ok:*, reg ok1:V, reg c7:L, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg paste1:cls, reg Sys_getpid1:cls, reg r18:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg try1:cls, reg file_create:cls, reg fn4:*, reg fn5:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg res4:*, reg res5:V, reg inherits1:cls, reg r29:V, reg c8:L, reg c9:V, reg res6:*, reg res7:V, reg r30:V, reg c11:L, reg c12:V, reg c14:L, reg r31:V, reg unlink1:cls, reg fn6:*, reg fn7:V, reg p11:p(V +), reg r33:V, reg ok2:*, reg ok3:V |
    mkenv;
    st dir = dir;
    st ok = TRUE;
    file_path = ldf `file.path`;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        Sys_getpid = ldf `Sys.getpid`;
        r1 = dyn Sys_getpid();
        return r1;
      };
      r3 = dyn paste0("_test_dir_", p1);
      return r3;
    };
    r5 = dyn file_path(p, p2);
    check L11() else D1();
  D1():
    deopt 7 [r5];
  L11():
    st fn = r5;
    try = ldf try;
    check L12() else D2();
  D2():
    deopt 10 [];
  L12():
    p4 = prom<V +>{
      dir_create = ldf `dir.create`;
      p3 = prom<V +>{
        fn = ld fn;
        fn1 = force? fn;
        checkMissing(fn1);
        return fn1;
      };
      r7 = dyn dir_create[, showWarnings](p3, FALSE);
      return r7;
    };
    r9 = dyn try(p4);
    check L13() else D3();
  D3():
    deopt 12 [r9];
  L13():
    st res = r9;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r11):
    c = `as.logical`(r11);
    if c then L1(c) else L18();
  L14():
    res = ld res;
    check L16() else D4();
  L15():
    r10 = dyn base(<sym res>, "try-error");
    goto L0(r10);
  D4():
    deopt 16 [res];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L21() else L2();
  L16():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r12 = dyn inherits(res1, "try-error", FALSE);
    check L17() else D5();
  L18():
    res2 = ld res;
    check L19() else D6();
  D5():
    deopt 21 [r12];
  D6():
    deopt 22 [c, res2];
  L2():
    unlink = ldf unlink;
    check L23() else D7();
  L3():
    ok = ld ok;
    check L25() else D9();
  L17():
    goto L0(r12);
  L19():
    res3 = force? res2;
    checkMissing(res3);
    r13 = `!`(res3);
    c3 = `as.logical`(r13);
    c4 = `||`(c, c3);
    goto L1(c4);
  L21():
    st ok = FALSE;
    goto L3();
  D7():
    deopt 30 [];
  D9():
    deopt 35 [ok];
  L23():
    p5 = prom<V +>{
      fn2 = ld fn;
      fn3 = force? fn2;
      checkMissing(fn3);
      return fn3;
    };
    r16 = dyn unlink[, recursive](p5, TRUE);
    check L24() else D8();
  L25():
    ok1 = force? ok;
    checkMissing(ok1);
    c7 = `as.logical`(ok1);
    if c7 then L26() else L4();
  D8():
    deopt 34 [r16];
  L4():
    goto L9();
  L9():
    ok2 = ld ok;
    check L43() else D19();
  L24():
    goto L3();
  L26():
    file_path1 = ldf `file.path`;
    check L27() else D10();
  D10():
    deopt 38 [];
  D19():
    deopt 69 [ok2];
  L27():
    p6 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p8 = prom<V +>{
      paste1 = ldf paste0;
      p7 = prom<V +>{
        Sys_getpid1 = ldf `Sys.getpid`;
        r18 = dyn Sys_getpid1();
        return r18;
      };
      r20 = dyn paste1("_test_file_", p7);
      return r20;
    };
    r22 = dyn file_path1(p6, p8);
    check L28() else D11();
  L43():
    ok3 = force? ok2;
    checkMissing(ok3);
    popenv;
    return ok3;
  D11():
    deopt 41 [r22];
  L28():
    st fn = r22;
    try1 = ldf try;
    check L29() else D12();
  D12():
    deopt 44 [];
  L29():
    p10 = prom<V +>{
      file_create = ldf `file.create`;
      p9 = prom<V +>{
        fn4 = ld fn;
        fn5 = force? fn4;
        checkMissing(fn5);
        return fn5;
      };
      r24 = dyn file_create[, showWarnings](p9, FALSE);
      return r24;
    };
    r26 = dyn try1(p10);
    check L30() else D13();
  D13():
    deopt 46 [r26];
  L30():
    st res = r26;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L5(r28):
    c8 = `as.logical`(r28);
    if c8 then L6(c8) else L35();
  L31():
    res4 = ld res;
    check L33() else D14();
  L32():
    r27 = dyn base1(<sym res>, "try-error");
    goto L5(r27);
  D14():
    deopt 50 [res4];
  L6(c9):
    c14 = `as.logical`(c9);
    if c14 then L38() else L7();
  L33():
    res5 = force? res4;
    checkMissing(res5);
    inherits1 = ldf inherits in base;
    r29 = dyn inherits1(res5, "try-error", FALSE);
    check L34() else D15();
  L35():
    res6 = ld res;
    check L36() else D16();
  D15():
    deopt 55 [r29];
  D16():
    deopt 56 [c8, res6];
  L7():
    unlink1 = ldf unlink;
    check L40() else D17();
  L8(r31):
    goto L9();
  L34():
    goto L5(r29);
  L36():
    res7 = force? res6;
    checkMissing(res7);
    r30 = `!`(res7);
    c11 = `as.logical`(r30);
    c12 = `||`(c8, c11);
    goto L6(c12);
  L38():
    st ok = FALSE;
    goto L8(FALSE);
  D17():
    deopt 64 [];
  L40():
    p11 = prom<V +>{
      fn6 = ld fn;
      fn7 = force? fn6;
      checkMissing(fn7);
      return fn7;
    };
    r33 = dyn unlink1(p11);
    check L41() else D18();
  D18():
    deopt 66 [r33];
  L41():
    goto L8(r33);
  }
}