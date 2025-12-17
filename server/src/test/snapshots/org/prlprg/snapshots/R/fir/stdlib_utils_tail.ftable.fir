fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner774037749;
    st `tail.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner774037749(x, n, keepnums, addrownums, `...`) {
  (reg x:*, reg n:*, reg keepnums:*, reg addrownums:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var keepnums:*, reg keepnums_isMissing:L, reg keepnums_orDefault:*, var addrownums:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg _Deprecated:cls, reg gettext:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg missing1:cls, reg r9:V, reg c1:L, reg addrownums1:*, reg addrownums2:V, reg addrownums3:V, reg format:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg keepnums1:*, reg keepnums2:V, reg r14:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg nrow:cls, reg r17:*, reg r18:V, reg p2:p(V +), reg r20:V, reg rep_int:cls, reg r21:V, reg r22:V, reg keepnums3:*, reg keepnums4:V, reg r23:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg ncol:cls, reg r26:*, reg r27:V, reg p3:p(V +), reg r29:V, reg rep_int1:cls, reg r30:V, reg r31:V, reg list:cls, reg r32:V, reg l:*, reg dimnames__:cls, reg r33:V, reg noquote:cls, reg tail_matrix:cls, reg r34:*, reg r35:V, reg p4:p(V +), reg n1:*, reg n2:V, reg p5:p(V +), reg keepnums5:*, reg keepnums6:V, reg p6:p(V +), reg ddd1:dots?, reg r39:V, reg p7:p(V +), reg r41:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    keepnums_isMissing = missing.0(keepnums);
    if keepnums_isMissing then L1(FALSE) else L1(keepnums);
  L1(keepnums_orDefault):
    st keepnums = keepnums_orDefault;
    st addrownums = addrownums;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L3();
  L15():
    missing = ldf missing in base;
    r2 = dyn missing(<sym addrownums>);
    goto L2(r2);
  L16():
    r = dyn base(<sym addrownums>);
    goto L2(r);
  L3():
    goto L7();
  L7():
    format = ldf format;
    check L26() else D3();
  L17():
    _Deprecated = ldf `.Deprecated`;
    check L18() else D0();
  D0():
    deopt 5 [];
  D3():
    deopt 20 [];
  L18():
    p = prom<V +>{
      gettext = ldf gettext;
      r4 = dyn gettext("tail(., addrownums=.) is", " deprecated.\nUse ", "tail(., keepnums=.) instead.\n");
      return r4;
    };
    r6 = dyn _Deprecated[msg](p);
    check L19() else D1();
  L26():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r11 = dyn format(p1);
    check L27() else D4();
  D1():
    deopt 8 [r6];
  D4():
    deopt 22 [r11];
  L19():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L27():
    st r = r11;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L4(r8):
    c1 = `as.logical`(r8);
    if c1 then L22() else L5();
  L8(r13):
    l = ld r;
    dimnames__ = ldf `dimnames<-`;
    check L47() else D14();
  L20():
    missing1 = ldf missing in base;
    r9 = dyn missing1(<sym keepnums>);
    goto L4(r9);
  L21():
    r7 = dyn base1(<sym keepnums>);
    goto L4(r7);
  L28():
    keepnums1 = ld keepnums;
    check L30() else D5();
  L29():
    r12 = dyn base2(<lang if(`!`(keepnums), rep.int("", nrow(r)))>, <lang if(`!`(keepnums), rep.int("", ncol(r)))>);
    goto L8(r12);
  D5():
    deopt 26 [keepnums1];
  D14():
    deopt 57 [r13, l, r13];
  L5():
    goto L6(NULL);
  L6(addrownums3):
    goto L7();
  L22():
    addrownums1 = ld addrownums;
    check L23() else D2();
  L30():
    keepnums2 = force? keepnums1;
    checkMissing(keepnums2);
    r14 = `!`(keepnums2);
    c2 = `as.logical`(r14);
    if c2 then L31() else L9();
  L47():
    r33 = dyn dimnames__(l, NULL, r13);
    check L48() else D15();
  D2():
    deopt 12 [addrownums1];
  D15():
    deopt 59 [r13, r33];
  L9():
    goto L11(NULL);
  L11(r22):
    keepnums3 = ld keepnums;
    check L38() else D9();
  L23():
    addrownums2 = force? addrownums1;
    checkMissing(addrownums2);
    st keepnums = addrownums2;
    goto L6(addrownums2);
  L31():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L48():
    st r = r33;
    noquote = ldf noquote;
    check L49() else D16();
  D9():
    deopt 40 [keepnums3];
  D16():
    deopt 62 [];
  L10(r16):
    goto L11(r16);
  L32():
    nrow = ldf nrow;
    check L34() else D6();
  L33():
    r15 = dyn base3("", <lang nrow(r)>);
    goto L10(r15);
  L38():
    keepnums4 = force? keepnums3;
    checkMissing(keepnums4);
    r23 = `!`(keepnums4);
    c3 = `as.logical`(r23);
    if c3 then L39() else L12();
  L49():
    p7 = prom<V +>{
      tail_matrix = ldf `tail.matrix`;
      p4 = prom<V +>{
        r34 = ld r;
        r35 = force? r34;
        checkMissing(r35);
        return r35;
      };
      p5 = prom<V +>{
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        return n2;
      };
      p6 = prom<V +>{
        keepnums5 = ld keepnums;
        keepnums6 = force? keepnums5;
        checkMissing(keepnums6);
        return keepnums6;
      };
      ddd1 = ld `...`;
      r39 = dyn tail_matrix[, n, keepnums, `...`](p4, p5, p6, ddd1);
      return r39;
    };
    r41 = dyn noquote(p7);
    check L50() else D17();
  D6():
    deopt 33 [];
  D17():
    deopt 64 [r41];
  L12():
    goto L14(NULL);
  L14(r31):
    list = ldf list in base;
    r32 = dyn list(r22, r31);
    check L46() else D13();
  L34():
    p2 = prom<V +>{
      r17 = ld r;
      r18 = force? r17;
      checkMissing(r18);
      return r18;
    };
    r20 = dyn nrow(p2);
    check L35() else D7();
  L39():
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L50():
    popenv;
    return r41;
  D7():
    deopt 35 [r20];
  D13():
    deopt 55 [r32];
  L13(r25):
    goto L14(r25);
  L35():
    rep_int = ldf `rep.int` in base;
    r21 = dyn rep_int("", r20);
    check L36() else D8();
  L40():
    ncol = ldf ncol;
    check L42() else D10();
  L41():
    r24 = dyn base4("", <lang ncol(r)>);
    goto L13(r24);
  L46():
    goto L8(r32);
  D8():
    deopt 37 [r21];
  D10():
    deopt 47 [];
  L36():
    goto L10(r21);
  L42():
    p3 = prom<V +>{
      r26 = ld r;
      r27 = force? r26;
      checkMissing(r27);
      return r27;
    };
    r29 = dyn ncol(p3);
    check L43() else D11();
  D11():
    deopt 49 [r29];
  L43():
    rep_int1 = ldf `rep.int` in base;
    r30 = dyn rep_int1("", r29);
    check L44() else D12();
  D12():
    deopt 51 [r30];
  L44():
    goto L13(r30);
  }
}