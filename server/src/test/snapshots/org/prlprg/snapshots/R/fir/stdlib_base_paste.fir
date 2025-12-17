fun main() {
  () -+> V { reg r:cls, reg paste0:cls, reg r1:V, reg p:p(V +), reg r3:V, reg paste1:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r9:V, reg as_character:cls, reg r10:V, reg paste2:cls, reg r11:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg rep:cls, reg r17:V, reg c:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg paste3:cls, reg month_abb:*, reg month_abb1:V, reg p4:p(V +), reg nth:*, reg nth1:V, reg p5:p(V +), reg r23:V, reg paste4:cls, reg month_abb2:*, reg month_abb3:V, reg p6:p(V +), reg letters:*, reg letters1:V, reg p7:p(V +), reg r26:V, reg paste5:cls, reg month_abb4:*, reg month_abb5:V, reg p8:p(V +), reg nth2:*, reg nth3:V, reg p9:p(V +), reg r29:V, reg paste6:cls, reg nth4:*, reg nth5:V, reg p10:p(V +), reg r31:V, reg paste7:cls, reg r32:V, reg paste8:cls, reg r33:V, reg paste9:cls, reg month_abb6:*, reg month_abb7:V, reg p11:p(V +), reg nth6:*, reg nth7:V, reg p12:p(V +), reg r36:V, reg paste10:cls, reg strwrap:cls, reg r37:V, reg p13:p(V +), reg r39:V, reg plot:cls, reg __:cls, reg r40:V, reg p14:p(V +), reg cars:*, reg cars1:V, reg p15:p(V +), reg title:*, reg title1:V, reg p16:p(V +), reg r44:V, reg paste11:cls, reg p17:p(V +), reg p18:p(V +), reg r47:V, reg paste12:cls, reg val:*, reg val1:V, reg c1:L, reg val3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg valid:*, reg valid1:V, reg __1:cls, reg r48:V, reg p19:p(V +), reg r50:V, reg paste13:cls, reg val4:*, reg val5:V, reg c2:L, reg val7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg valid2:*, reg valid3:V, reg __2:cls, reg r51:V, reg p20:p(V +), reg r53:V, reg paste14:cls, reg p21:p(V +), reg r55:V, reg paste15:cls, reg p22:p(V +), reg r57:V, reg paste16:cls, reg r58:V, reg paste17:cls, reg r59:V, reg paste18:cls, reg p23:p(V +), reg r61:V, reg paste19:cls, reg p24:p(V +), reg r63:V |
    mkenv;
    r = clos inner3837407667;
    st paste = r;
    paste0 = ldf paste0;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      r1 = `:`(1.0, 12.0);
      return r1;
    };
    r3 = dyn paste0(p);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    paste1 = ldf paste;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    p1 = prom<V +>{
      r4 = `:`(1.0, 12.0);
      return r4;
    };
    r6 = dyn paste1(p1);
    check L4() else D3();
  D3():
    deopt 10 [r6];
  L4():
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    paste2 = ldf paste0;
    check L8() else D5();
  L5():
    r9 = `:`(1.0, 12.0);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(r9);
    check L7() else D4();
  L6():
    r7 = dyn base(<lang `:`(1.0, 12.0)>);
    goto L0();
  D4():
    deopt 18 [r10];
  D5():
    deopt 20 [];
  L7():
    goto L0();
  L8():
    p2 = prom<V +>{
      r11 = `:`(1.0, 12.0);
      return r11;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r14):
      return r14;
    L2():
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r13 = dyn base1("st", "nd", "rd", <lang rep("th", 9.0)>);
      goto L0(r13);
    L1(r16):
      c = ldf c in base;
      r18 = dyn c("st", "nd", "rd", r16);
      goto L0(r18);
    L4():
      rep = ldf rep in base;
      r17 = dyn rep("th", 9.0);
      goto L1(r17);
    L5():
      r15 = dyn base2("th", 9.0);
      goto L1(r15);
    };
    r20 = dyn paste2(p2, p3);
    check L9() else D6();
  D6():
    deopt 23 [r20];
  L9():
    st nth = r20;
    paste3 = ldf paste;
    check L10() else D7();
  D7():
    deopt 26 [];
  L10():
    p4 = prom<V +>{
      month_abb = ld `month.abb`;
      month_abb1 = force? month_abb;
      checkMissing(month_abb1);
      return month_abb1;
    };
    p5 = prom<V +>{
      nth = ld nth;
      nth1 = force? nth;
      checkMissing(nth1);
      return nth1;
    };
    r23 = dyn paste3(p4, "is the", p5, "month of the year.");
    check L11() else D8();
  D8():
    deopt 31 [r23];
  L11():
    paste4 = ldf paste;
    check L12() else D9();
  D9():
    deopt 33 [];
  L12():
    p6 = prom<V +>{
      month_abb2 = ld `month.abb`;
      month_abb3 = force? month_abb2;
      checkMissing(month_abb3);
      return month_abb3;
    };
    p7 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r26 = dyn paste4(p6, p7);
    check L13() else D10();
  D10():
    deopt 36 [r26];
  L13():
    paste5 = ldf paste;
    check L14() else D11();
  D11():
    deopt 38 [];
  L14():
    p8 = prom<V +>{
      month_abb4 = ld `month.abb`;
      month_abb5 = force? month_abb4;
      checkMissing(month_abb5);
      return month_abb5;
    };
    p9 = prom<V +>{
      nth2 = ld nth;
      nth3 = force? nth2;
      checkMissing(nth3);
      return nth3;
    };
    r29 = dyn paste5[, , , , sep](p8, "is the", p9, "month of the year.", "_*_");
    check L15() else D12();
  D12():
    deopt 45 [r29];
  L15():
    paste6 = ldf paste0;
    check L16() else D13();
  D13():
    deopt 47 [];
  L16():
    p10 = prom<V +>{
      nth4 = ld nth;
      nth5 = force? nth4;
      checkMissing(nth5);
      return nth5;
    };
    r31 = dyn paste6[, collapse](p10, ", ");
    check L17() else D14();
  D14():
    deopt 51 [r31];
  L17():
    paste7 = ldf paste;
    check L18() else D15();
  D15():
    deopt 53 [];
  L18():
    r32 = dyn paste7[, , , collapse]("1st", "2nd", "3rd", ", ");
    check L19() else D16();
  D16():
    deopt 59 [r32];
  L19():
    paste8 = ldf paste;
    check L20() else D17();
  D17():
    deopt 61 [];
  L20():
    r33 = dyn paste8[, , , sep]("1st", "2nd", "3rd", ", ");
    check L21() else D18();
  D18():
    deopt 67 [r33];
  L21():
    paste9 = ldf paste;
    check L22() else D19();
  D19():
    deopt 69 [];
  L22():
    p11 = prom<V +>{
      month_abb6 = ld `month.abb`;
      month_abb7 = force? month_abb6;
      checkMissing(month_abb7);
      return month_abb7;
    };
    p12 = prom<V +>{
      nth6 = ld nth;
      nth7 = force? nth6;
      checkMissing(nth7);
      return nth7;
    };
    r36 = dyn paste9[, , sep, collapse](p11, p12, ": ", "; ");
    check L23() else D20();
  D20():
    deopt 76 [r36];
  L23():
    paste10 = ldf paste;
    check L24() else D21();
  D21():
    deopt 78 [];
  L24():
    p13 = prom<V +>{
      strwrap = ldf strwrap;
      r37 = dyn strwrap[, width]("Stopping distance of cars (ft) vs. speed (mph) from Ezekiel (1930)", 30.0);
      return r37;
    };
    r39 = dyn paste10[, collapse](p13, "\n");
    check L25() else D22();
  D22():
    deopt 82 [r39];
  L25():
    st title = r39;
    plot = ldf plot;
    check L26() else D23();
  D23():
    deopt 85 [];
  L26():
    p14 = prom<V +>{
      __ = ldf `~` in base;
      r40 = dyn __(<sym dist>, <sym speed>);
      return r40;
    };
    p15 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    p16 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    r44 = dyn plot[, , main](p14, p15, p16);
    check L27() else D24();
  D24():
    deopt 90 [r44];
  L27():
    paste11 = ldf paste;
    check L28() else D25();
  D25():
    deopt 92 [];
  L28():
    p17 = prom<V +>{
      return NULL;
    };
    p18 = prom<V +>{
      return <int 1, 2>;
    };
    r47 = dyn paste11(p17, p18);
    check L29() else D26();
  D26():
    deopt 95 [r47];
  L29():
    st valid = FALSE;
    st val = 3.141592653589793;
    paste12 = ldf paste;
    check L30() else D27();
  D27():
    deopt 103 [];
  L30():
    p19 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      c1 = `is.object`(val1);
      if c1 then L1() else L2(val1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", val1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(val3):
      valid = ld valid;
      valid1 = force? valid;
      __1 = ldf `[` in base;
      r48 = dyn __1(val3, valid1);
      goto L0(r48);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r50 = dyn paste12("The value is", p19, "-- not so good!");
    check L31() else D28();
  D28():
    deopt 107 [r50];
  L31():
    paste13 = ldf paste;
    check L32() else D29();
  D29():
    deopt 109 [];
  L32():
    p20 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c2 = `is.object`(val5);
      if c2 then L1() else L2(val5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", val5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(val7):
      valid2 = ld valid;
      valid3 = force? valid2;
      __2 = ldf `[` in base;
      r51 = dyn __2(val7, valid3);
      goto L0(r51);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r53 = dyn paste13[, , , recycle0]("The value is", p20, "-- good: empty!", TRUE);
    check L33() else D30();
  D30():
    deopt 115 [r53];
  L33():
    paste14 = ldf paste;
    check L34() else D31();
  D31():
    deopt 117 [];
  L34():
    p21 = prom<V +>{
      return NULL;
    };
    r55 = dyn paste14[, , , collapse]("foo", p21, "bar", "|");
    check L35() else D32();
  D32():
    deopt 123 [r55];
  L35():
    paste15 = ldf paste;
    check L36() else D33();
  D33():
    deopt 125 [];
  L36():
    p22 = prom<V +>{
      return NULL;
    };
    r57 = dyn paste15[, , collapse, recycle0]("foo", p22, "|", TRUE);
    check L37() else D34();
  D34():
    deopt 132 [r57];
  L37():
    paste16 = ldf paste;
    check L38() else D35();
  D35():
    deopt 134 [];
  L38():
    r58 = dyn paste16[collapse]("|");
    check L39() else D36();
  D36():
    deopt 137 [r58];
  L39():
    paste17 = ldf paste;
    check L40() else D37();
  D37():
    deopt 139 [];
  L40():
    r59 = dyn paste17[collapse, recycle0]("|", TRUE);
    check L41() else D38();
  D38():
    deopt 144 [r59];
  L41():
    paste18 = ldf paste;
    check L42() else D39();
  D39():
    deopt 146 [];
  L42():
    p23 = prom<V +>{
      return NULL;
    };
    r61 = dyn paste18[, collapse](p23, "|");
    check L43() else D40();
  D40():
    deopt 150 [r61];
  L43():
    paste19 = ldf paste;
    check L44() else D41();
  D41():
    deopt 152 [];
  L44():
    p24 = prom<V +>{
      return NULL;
    };
    r63 = dyn paste19[, collapse, recycle0](p24, "|", TRUE);
    check L45() else D42();
  D42():
    deopt 158 [r63];
  L45():
    popenv;
    return r63;
  }
}
fun inner3837407667(`...`, sep, collapse, recycle0) {
  (reg ddd:dots, reg sep:*, reg collapse:*, reg recycle0:*) -+> V { var `...`:dots?, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, var recycle0:*, reg recycle0_isMissing:L, reg recycle0_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg sep1:*, reg sep2:V, reg collapse1:*, reg collapse2:V, reg recycle1:*, reg recycle2:V, reg paste:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0(" ") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L1(NULL) else L1(collapse);
  L1(collapse_orDefault):
    st collapse = collapse_orDefault;
    recycle0_isMissing = missing.0(recycle0);
    if recycle0_isMissing then L2(FALSE) else L2(recycle0);
  L2(recycle0_orDefault):
    st recycle0 = recycle0_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L3(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang paste(list(...), sep, collapse, recycle0)>);
    goto L3(r);
  L4(r3):
    sep1 = ld sep;
    check L11() else D2();
  L7():
    list = ldf list;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym ...>);
    goto L4(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 7 [sep1];
  L9():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L10() else D1();
  L11():
    sep2 = force? sep1;
    checkMissing(sep2);
    collapse1 = ld collapse;
    check L12() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 9 [collapse1];
  L10():
    goto L4(r4);
  L12():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    recycle1 = ld recycle0;
    check L13() else D4();
  D4():
    deopt 11 [recycle1];
  L13():
    recycle2 = force? recycle1;
    checkMissing(recycle2);
    paste = ldf paste in base;
    r5 = dyn paste(r3, sep2, collapse2, recycle2);
    check L14() else D5();
  D5():
    deopt 14 [r5];
  L14():
    goto L3(r5);
  }
}