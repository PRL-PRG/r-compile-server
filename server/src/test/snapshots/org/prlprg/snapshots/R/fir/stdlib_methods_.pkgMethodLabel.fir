fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner815072961;
    st `.pkgMethodLabel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg __:cls, reg r:V, reg packageSlot:cls, reg sig:*, reg sig1:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pkgs:*, reg pkgs1:V, reg length:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg r15:V, reg sig2:*, reg sig3:V, reg as_character:cls, reg r16:V, reg length1:cls, reg r17:V, reg r18:V, reg c:L, reg c1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c5:L, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c8:L, reg r22:V, reg pkgs2:*, reg pkgs3:V, reg nzchar:cls, reg r23:V, reg r24:V, reg any:cls, reg r25:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg sQuote:cls, reg __1:cls, reg r26:V, reg p1:p(V +), reg r28:V, reg p2:p(V +), reg paste:cls, reg sig4:*, reg sig5:V, reg p3:p(V +), reg r31:V, reg p4:p(V +), reg r33:V, reg paste1:cls, reg pkgs4:*, reg pkgs5:V, reg p5:p(V +), reg r36:V |
    mkenv;
    st method = method;
    __ = ldf `@` in base;
    r = dyn __(<sym method>, <sym target>);
    st sig = r;
    packageSlot = ldf packageSlot;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    p = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    r2 = dyn packageSlot(p);
    check L9() else D1();
  D1():
    deopt 6 [r2];
  L9():
    st pkgs = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r4):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L10():
    pkgs = ld pkgs;
    check L12() else D2();
  L11():
    r3 = dyn base(<sym pkgs>);
    goto L0(r3);
  D2():
    deopt 10 [pkgs];
  L1(r9, r10):
    r18 = `<`(r9, r10);
    c = `as.logical`(r18);
    if c then L3(c) else L21();
  L12():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    length = ldf length in base;
    r5 = dyn length(pkgs1);
    check L13() else D3();
  L14():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r8 = dyn base1(<lang as.character(sig)>);
    goto L1(r4, r8);
  D3():
    deopt 13 [r5];
  L2(r14, r15):
    length1 = ldf length in base;
    r17 = dyn length1(r15);
    check L20() else D6();
  L3(c1):
    c12 = `as.logical`(c1);
    if c12 then L30() else L6();
  L13():
    goto L0(r5);
  L16():
    sig2 = ld sig;
    check L18() else D4();
  L17():
    r13 = dyn base2(<sym sig>);
    goto L2(r4, r13);
  L21():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  D4():
    deopt 17 [r4, sig2];
  D6():
    deopt 22 [r14, r17];
  L4(c5, r20):
    c9 = `as.logical`(r20);
    c10 = `||`(c5, c9);
    goto L3(c10);
  L6():
    goto L7();
  L7():
    paste1 = ldf paste;
    check L34() else D12();
  L18():
    sig3 = force? sig2;
    checkMissing(sig3);
    as_character = ldf `as.character` in base;
    r16 = dyn as_character(sig3);
    check L19() else D5();
  L20():
    goto L1(r14, r17);
  L22():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L23():
    r19 = dyn base3(<lang `!`(nzchar(pkgs))>);
    goto L4(c, r19);
  L30():
    stop = ldf stop;
    check L31() else D10();
  D5():
    deopt 20 [r4, r16];
  D10():
    deopt 37 [];
  D12():
    deopt 53 [];
  L5(c8, r22):
    r24 = `!`(r22);
    any = ldf any in base;
    r25 = dyn any(r24);
    check L28() else D9();
  L19():
    goto L2(r4, r16);
  L24():
    pkgs2 = ld pkgs;
    check L26() else D7();
  L25():
    r21 = dyn base4(<sym pkgs>);
    goto L5(c, r21);
  L31():
    p2 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        __1 = ldf `@` in base;
        r26 = dyn __1(<sym method>, <sym generic>);
        return r26;
      };
      r28 = dyn sQuote(p1);
      return r28;
    };
    p4 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        sig4 = ld sig;
        sig5 = force? sig4;
        checkMissing(sig5);
        return sig5;
      };
      r31 = dyn paste[, collapse](p3, ", ");
      return r31;
    };
    r33 = dyn stop[, , , , , , , `call.`, domain]("package slot missing from signature for generic ", p2, "\n", "and classes ", p4, "\n", "cannot use with duplicate class names (the package may need to be re-installed)", FALSE, NA_LGL);
    check L32() else D11();
  L34():
    p5 = prom<V +>{
      pkgs4 = ld pkgs;
      pkgs5 = force? pkgs4;
      checkMissing(pkgs5);
      return pkgs5;
    };
    r36 = dyn paste1[, collapse](p5, "#");
    check L35() else D13();
  D7():
    deopt 28 [c, pkgs2];
  D9():
    deopt 34 [c8, r25];
  D11():
    deopt 49 [r33];
  D13():
    deopt 57 [r36];
  L26():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    nzchar = ldf nzchar in base;
    r23 = dyn nzchar(pkgs3);
    check L27() else D8();
  L28():
    goto L4(c8, r25);
  L32():
    goto L7();
  L35():
    popenv;
    return r36;
  D8():
    deopt 31 [c, r23];
  L27():
    goto L5(c, r23);
  }
}