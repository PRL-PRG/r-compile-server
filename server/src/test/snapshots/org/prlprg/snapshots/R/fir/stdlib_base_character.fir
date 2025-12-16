fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg form:*, reg form1:V, reg as_character:cls, reg r4:V, reg deparse:cls, reg form2:*, reg form3:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg a0:*, reg a1:V, reg as_character1:cls, reg r9:V, reg format:cls, reg a2:*, reg a3:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg a4:*, reg a5:V, reg as_numeric:cls, reg r14:V, reg a6:*, reg a7:V, reg a8:*, reg a9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg a10:*, reg a11:V, reg as_character2:cls, reg r18:V, reg print:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg a12:*, reg a13:V, reg a14:*, reg a15:V, reg c:cls, reg r21:V, reg p2:p(V +), reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg c1:cls, reg r30:V, reg list:cls, reg r31:V, reg as_character3:cls, reg r32:V |
    mkenv;
    r = clos `inner-497502118`;
    st character = r;
    __ = ldf `~` in base;
    r1 = dyn __(<sym y>, <lang `+`(`+`(a, b), c)>);
    st form = r1;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0():
    deparse = ldf deparse;
    check L11() else D2();
  L7():
    form = ld form;
    check L9() else D0();
  L8():
    r2 = dyn base(<sym form>);
    goto L0();
  D0():
    deopt 8 [form];
  D2():
    deopt 13 [];
  L9():
    form1 = force? form;
    checkMissing(form1);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(form1);
    check L10() else D1();
  L11():
    p = prom<V +>{
      form2 = ld form;
      form3 = force? form2;
      checkMissing(form3);
      return form3;
    };
    r6 = dyn deparse(p);
    check L12() else D3();
  D1():
    deopt 11 [r4];
  D3():
    deopt 15 [r6];
  L10():
    goto L0();
  L12():
    st a0 = 0.011011011011011011;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L1(r8):
    st a1 = r8;
    format = ldf format;
    check L17() else D6();
  L13():
    a0 = ld a0;
    check L15() else D4();
  L14():
    r7 = dyn base1(<sym a0>);
    goto L1(r7);
  D4():
    deopt 21 [a0];
  D6():
    deopt 27 [];
  L15():
    a1 = force? a0;
    checkMissing(a1);
    as_character1 = ldf `as.character` in base;
    r9 = dyn as_character1(a1);
    check L16() else D5();
  L17():
    p1 = prom<V +>{
      a2 = ld a0;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    r11 = dyn format[, digits](p1, 16.0);
    check L18() else D7();
  D5():
    deopt 24 [r9];
  D7():
    deopt 31 [r11];
  L16():
    goto L1(r9);
  L18():
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r13):
    st a2 = r13;
    a6 = ld a2;
    check L23() else D10();
  L19():
    a4 = ld a1;
    check L21() else D8();
  L20():
    r12 = dyn base2(<sym a1>);
    goto L2(r12);
  D8():
    deopt 34 [a4];
  D10():
    deopt 39 [a6];
  L21():
    a5 = force? a4;
    checkMissing(a5);
    as_numeric = ldf `as.numeric` in base;
    r14 = dyn as_numeric(a5);
    check L22() else D9();
  L23():
    a7 = force? a6;
    checkMissing(a7);
    a8 = ld a0;
    check L24() else D11();
  D9():
    deopt 37 [r14];
  D11():
    deopt 40 [a7, a8];
  L22():
    goto L2(r14);
  L24():
    a9 = force? a8;
    checkMissing(a9);
    `-`(a7, a9);
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L3():
    print = ldf print;
    check L29() else D14();
  L25():
    a10 = ld a2;
    check L27() else D12();
  L26():
    r16 = dyn base3(<sym a2>);
    goto L3();
  D12():
    deopt 45 [a10];
  D14():
    deopt 50 [];
  L27():
    a11 = force? a10;
    checkMissing(a11);
    as_character2 = ldf `as.character` in base;
    r18 = dyn as_character2(a11);
    check L28() else D13();
  L29():
    p2 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      a12 = ld a0;
      a13 = force? a12;
      checkMissing(a13);
      a14 = ld a2;
      a15 = force? a14;
      checkMissing(a15);
      c = ldf c in base;
      r21 = dyn c(a13, a15);
      goto L0(r21);
    L2():
      r19 = dyn base4(<sym a0>, <sym a2>);
      goto L0(r19);
    };
    r23 = dyn print[, digits](p2, 16.0);
    check L30() else D15();
  D13():
    deopt 48 [r18];
  D15():
    deopt 54 [r23];
  L28():
    goto L3();
  L30():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L31() else L32();
  L4(r25):
    popenv;
    return r25;
  L31():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L33() else L34();
  L32():
    r24 = dyn base5(<lang list(A="Abc", xy=c("x", "y"))>);
    goto L4(r24);
  L5(r27):
    as_character3 = ldf `as.character` in base;
    r32 = dyn as_character3(r27);
    check L39() else D18();
  L33():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L35() else L36();
  L34():
    r26 = dyn base6[A, xy]("Abc", <lang c("x", "y")>);
    goto L5(r26);
  D18():
    deopt 71 [r32];
  L6(r29):
    list = ldf list in base;
    r31 = dyn list("Abc", r29);
    check L38() else D17();
  L35():
    c1 = ldf c in base;
    r30 = dyn c1("x", "y");
    check L37() else D16();
  L36():
    r28 = dyn base7("x", "y");
    goto L6(r28);
  L39():
    goto L4(r32);
  D16():
    deopt 66 [r30];
  D17():
    deopt 69 [r31];
  L37():
    goto L6(r30);
  L38():
    goto L5(r31);
  }
}
fun `inner-497502118`(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("character", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("character", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}