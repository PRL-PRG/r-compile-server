fun main() {
  () -+> V { reg r:cls, reg person:cls, reg r1:V, reg as_person:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg p1:*, reg p2:V, reg p3:*, reg p4:V, reg c:cls, reg r5:V, reg p5:*, reg p6:V, reg c1:L, reg p8:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r6:V, reg p9:*, reg p10:V, reg c2:L, reg p12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg __1:cls, reg r7:V, reg p13:*, reg p14:V, reg c3:L, reg p16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r8:V, reg p17:*, reg p18:V, reg c4:L, reg p20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r9:V, reg p21:*, reg p22:V, reg c5:L, reg p24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r10:V, reg c6:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg person1:cls, reg r14:V, reg person2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c7:cls, reg r17:V, reg p25:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg c8:cls, reg r21:V, reg p26:p(V +), reg r23:V, reg c9:cls, reg r24:V, reg b:*, reg b1:V, reg format:cls, reg b2:*, reg b3:V, reg p27:p(V +), reg r26:V, reg format1:cls, reg b4:*, reg b5:V, reg p28:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg c10:cls, reg r30:V, reg p29:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg c11:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg c12:cls, reg r39:V, reg list:cls, reg r40:V, reg p30:p(V +), reg r42:V, reg paste:cls, reg format2:cls, reg b6:*, reg b7:V, reg p31:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg c13:cls, reg r46:V, reg p32:p(V +), reg r48:V, reg p33:p(V +), reg r50:V, reg toBibtex:cls, reg b8:*, reg b9:V, reg p34:p(V +), reg r52:V, reg person3:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg c14:cls, reg r55:V, reg p35:p(V +), reg r57:V |
    mkenv;
    r = clos inner1183492433;
    st person = r;
    person = ldf person;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    r1 = dyn person[, , email]("Karl", "Pearson", "pearson@stats.heaven");
    check L6() else D1();
  D1():
    deopt 9 [r1];
  L6():
    st p1 = r1;
    as_person = ldf `as.person`;
    check L7() else D2();
  D2():
    deopt 12 [];
  L7():
    r2 = dyn as_person("Ronald Aylmer Fisher");
    check L8() else D3();
  D3():
    deopt 14 [r2];
  L8():
    st p2 = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    st p = r4;
    p5 = ld p;
    check L14() else D7();
  L9():
    p1 = ld p1;
    check L11() else D4();
  L10():
    r3 = dyn base(<sym p1>, <sym p2>);
    goto L0(r3);
  D4():
    deopt 18 [p1];
  D7():
    deopt 25 [p5];
  L11():
    p2 = force? p1;
    checkMissing(p2);
    p3 = ld p2;
    check L12() else D5();
  L14():
    p6 = force? p5;
    checkMissing(p6);
    c1 = `is.object`(p6);
    if c1 then L15() else L16(p6);
  D5():
    deopt 20 [p3];
  L1():
    p9 = ld p;
    check L18() else D8();
  L12():
    p4 = force? p3;
    checkMissing(p4);
    c = ldf c in base;
    r5 = dyn c(p2, p4);
    check L13() else D6();
  L15():
    dr = tryDispatchBuiltin.1("[", p6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(p8):
    __ = ldf `[` in base;
    r6 = dyn __(p8, 1.0);
    goto L1();
  D6():
    deopt 23 [r5];
  D8():
    deopt 30 [p9];
  L13():
    goto L0(r5);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1();
  L18():
    p10 = force? p9;
    checkMissing(p10);
    c2 = `is.object`(p10);
    if c2 then L19() else L20(p10);
  L2():
    p13 = ld p;
    check L22() else D9();
  L19():
    dr2 = tryDispatchBuiltin.1("[", p10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(p12):
    __1 = ldf `[` in base;
    r7 = dyn __1(p12, -1.0);
    goto L2();
  D9():
    deopt 35 [p13];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2();
  L22():
    p14 = force? p13;
    checkMissing(p14);
    c3 = `is.object`(p14);
    if c3 then L24() else L25(p14);
  L23():
    p17 = ld p;
    check L27() else D10();
  L24():
    dr4 = tryDispatchBuiltin.1("$", p14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(p16):
    r8 = `$`(p16, <sym family>);
    goto L23();
  D10():
    deopt 38 [p17];
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23();
  L27():
    p18 = force? p17;
    checkMissing(p18);
    c4 = `is.object`(p18);
    if c4 then L29() else L30(p18);
  L28():
    p21 = ld p;
    check L32() else D11();
  L29():
    dr6 = tryDispatchBuiltin.1("$", p18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(dr6);
  L30(p20):
    r9 = `$`(p20, <sym email>);
    goto L28();
  D11():
    deopt 41 [p21];
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28();
  L32():
    p22 = force? p21;
    checkMissing(p22);
    c5 = `is.object`(p22);
    if c5 then L33() else L34(p22);
  L3(dx9):
    c6 = `is.object`(dx9);
    if c6 then L37() else L38(dx9);
  L33():
    dr8 = tryDispatchBuiltin.1("[", p22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L35() else L34(dr8);
  L34(p24):
    __2 = ldf `[` in base;
    r10 = dyn __2(p24, 1.0);
    goto L3(r10);
  L35():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L3(dx8);
  L36():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L37():
    dr10 = tryDispatchBuiltin.1("$", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L39() else L38(dr10);
  L38(dx11):
    r11 = `$`(dx11, <sym email>);
    goto L36();
  L4(r13):
    st b = r13;
    b = ld b;
    check L47() else D17();
  L39():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L36();
  L40():
    person1 = ldf person;
    check L42() else D12();
  L41():
    r12 = dyn base1(<lang person("Angelo", "Canty", role="aut", comment="S original, <http://statwww.epfl.ch/davison/BMA/library.html>")>, <lang person(c("Brian", "D."), "Ripley", role=c("aut", "trl", "cre"), comment="R port", email="ripley@stats.ox.ac.uk")>);
    goto L4(r12);
  D12():
    deopt 50 [];
  D17():
    deopt 72 [b];
  L42():
    r14 = dyn person1[, , role, comment]("Angelo", "Canty", "aut", "S original, <http://statwww.epfl.ch/davison/BMA/library.html>");
    check L43() else D13();
  L47():
    b1 = force? b;
    checkMissing(b1);
    format = ldf format;
    check L48() else D18();
  D13():
    deopt 57 [r14];
  D18():
    deopt 75 [];
  L43():
    person2 = ldf person;
    check L44() else D14();
  L48():
    p27 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    r26 = dyn format(p27);
    check L49() else D19();
  D14():
    deopt 59 [];
  D19():
    deopt 77 [r26];
  L44():
    p25 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c7 = ldf c in base;
      r17 = dyn c7("Brian", "D.");
      goto L0(r17);
    L2():
      r15 = dyn base2("Brian", "D.");
      goto L0(r15);
    };
    p26 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c8 = ldf c in base;
      r21 = dyn c8("aut", "trl", "cre");
      goto L0(r21);
    L2():
      r19 = dyn base3("aut", "trl", "cre");
      goto L0(r19);
    };
    r23 = dyn person2[, , role, comment, email](p25, "Ripley", p26, "R port", "ripley@stats.ox.ac.uk");
    check L45() else D15();
  L49():
    format1 = ldf format;
    check L50() else D20();
  D15():
    deopt 68 [r23];
  D20():
    deopt 79 [];
  L45():
    c9 = ldf c in base;
    r24 = dyn c9(r14, r23);
    check L46() else D16();
  L50():
    p28 = prom<V +>{
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    p29 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c10 = ldf c in base;
      r30 = dyn c10("family", "given", "role");
      goto L0(r30);
    L2():
      r28 = dyn base4("family", "given", "role");
      goto L0(r28);
    };
    p30 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r33):
      return r33;
    L3():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L4():
      r32 = dyn base5[family, role](<lang c("", ",")>, <lang c("(Role(s): ", ")")>);
      goto L0(r32);
    L1(r35):
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L7() else L8();
    L5():
      c11 = ldf c in base;
      r36 = dyn c11("", ",");
      goto L1(r36);
    L6():
      r34 = dyn base6("", ",");
      goto L1(r34);
    L2(r38):
      list = ldf list in base;
      r40 = dyn list(r35, r38);
      goto L0(r40);
    L7():
      c12 = ldf c in base;
      r39 = dyn c12("(Role(s): ", ")");
      goto L2(r39);
    L8():
      r37 = dyn base7("(Role(s): ", ")");
      goto L2(r37);
    };
    r42 = dyn format1[, include, braces](p28, p29, p30);
    check L51() else D21();
  D16():
    deopt 70 [r24];
  D21():
    deopt 85 [r42];
  L46():
    goto L4(r24);
  L51():
    paste = ldf paste;
    check L52() else D22();
  D22():
    deopt 87 [];
  L52():
    p33 = prom<V +>{
      format2 = ldf format;
      p31 = prom<V +>{
        b6 = ld b;
        b7 = force? b6;
        checkMissing(b7);
        return b7;
      };
      p32 = prom<V +>{
        sym8 = ldf c;
        base8 = ldf c in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        c13 = ldf c in base;
        r46 = dyn c13("given", "family");
        goto L0(r46);
      L2():
        r44 = dyn base8("given", "family");
        goto L0(r44);
      };
      r48 = dyn format2[, include](p31, p32);
      return r48;
    };
    r50 = dyn paste[, collapse](p33, " and ");
    check L53() else D23();
  D23():
    deopt 91 [r50];
  L53():
    toBibtex = ldf toBibtex;
    check L54() else D24();
  D24():
    deopt 93 [];
  L54():
    p34 = prom<V +>{
      b8 = ld b;
      b9 = force? b8;
      checkMissing(b9);
      return b9;
    };
    r52 = dyn toBibtex(p34);
    check L55() else D25();
  D25():
    deopt 95 [r52];
  L55():
    person3 = ldf person;
    check L56() else D26();
  D26():
    deopt 97 [];
  L56():
    p35 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      c14 = ldf c in base;
      r55 = dyn c14("0000-0003-0918-3766");
      goto L0(r55);
    L2():
      r53 = dyn base9[ORCID]("0000-0003-0918-3766");
      goto L0(r53);
    };
    r57 = dyn person3[, , comment]("Achim", "Zeileis", p35);
    check L57() else D27();
  D27():
    deopt 102 [r57];
  L57():
    st p3 = r57;
    visible.0();
    popenv;
    return r57;
  }
}
fun inner1183492433(given, family, middle, email, role, comment, first, last) {
  (reg given:*, reg family:*, reg middle:*, reg email:*, reg role:*, reg comment:*, reg first:*, reg last:*) -+> V { var given:*, reg given_isMissing:L, reg given_orDefault:*, var family:*, reg family_isMissing:L, reg family_orDefault:*, var middle:*, reg middle_isMissing:L, reg middle_orDefault:*, var email:*, reg email_isMissing:L, reg email_orDefault:*, var role:*, reg role_isMissing:L, reg role_orDefault:*, var comment:*, reg comment_isMissing:L, reg comment_orDefault:*, var first:*, reg first_isMissing:L, reg first_orDefault:*, var last:*, reg last_isMissing:L, reg last_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg given1:*, reg given2:V, reg family1:*, reg family2:V, reg middle1:*, reg middle2:V, reg email1:*, reg email2:V, reg role1:*, reg role2:V, reg comment1:*, reg comment2:V, reg first1:*, reg first2:V, reg last1:*, reg last2:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vapply:cls, reg args:*, reg args1:V, reg p:p(V +), reg is_null:*, reg is_null1:V, reg p1:p(V +), reg r7:V, reg all:cls, reg r8:V, reg c:L, reg _person:cls, reg r9:V, reg lapply:cls, reg args2:*, reg args3:V, reg p2:p(V +), reg _listify:*, reg _listify1:V, reg p3:p(V +), reg r14:V, reg lengths:cls, reg args4:*, reg args5:V, reg p4:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg _in_:cls, reg args_length:*, reg args_length1:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg args_length2:*, reg args_length3:V, reg max:cls, reg r24:V, reg c1:cls, reg r25:V, reg p6:p(V +), reg r27:V, reg all1:cls, reg r28:V, reg r29:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg args6:*, reg args7:V, reg names:cls, reg r32:V, reg c3:L, reg r34:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg args_length_ok:*, reg args_length_ok1:V, reg r35:V, reg __:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg lapply1:cls, reg args8:*, reg args9:V, reg p10:p(V +), reg rep_len:*, reg rep_len1:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg args_length4:*, reg args_length5:V, reg max1:cls, reg r48:V, reg p12:p(V +), reg r50:V, reg r51:cls, reg force:cls, reg person1:*, reg person2:V, reg p13:p(V +), reg r53:V, reg lapply2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg args10:*, reg args11:V, reg c4:L, reg args13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r56:V, reg r57:I, reg p14:p(V +), reg r59:cls, reg p15:p(V +), reg r61:V, reg _person1:cls, reg rval:*, reg rval1:V, reg c5:L, reg rval3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg vapply1:cls, reg rval4:*, reg rval5:V, reg p16:p(V +), reg is_null2:*, reg is_null3:V, reg p17:p(V +), reg r64:V, reg r65:V, reg __1:cls, reg r66:V, reg p18:p(V +), reg r68:V |
    mkenv;
    given_isMissing = missing.0(given);
    if given_isMissing then L0(NULL) else L0(given);
  L0(given_orDefault):
    st given = given_orDefault;
    family_isMissing = missing.0(family);
    if family_isMissing then L1(NULL) else L1(family);
  L1(family_orDefault):
    st family = family_orDefault;
    middle_isMissing = missing.0(middle);
    if middle_isMissing then L2(NULL) else L2(middle);
  L2(middle_orDefault):
    st middle = middle_orDefault;
    email_isMissing = missing.0(email);
    if email_isMissing then L3(NULL) else L3(email);
  L3(email_orDefault):
    st email = email_orDefault;
    role_isMissing = missing.0(role);
    if role_isMissing then L4(NULL) else L4(role);
  L4(role_orDefault):
    st role = role_orDefault;
    comment_isMissing = missing.0(comment);
    if comment_isMissing then L5(NULL) else L5(comment);
  L5(comment_orDefault):
    st comment = comment_orDefault;
    first_isMissing = missing.0(first);
    if first_isMissing then L6(NULL) else L6(first);
  L6(first_orDefault):
    st first = first_orDefault;
    last_isMissing = missing.0(last);
    if last_isMissing then L7(NULL) else L7(last);
  L7(last_orDefault):
    st last = last_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L8(r1):
    st args = r1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L15():
    given1 = ld given;
    check L17() else D0();
  L16():
    r = dyn base[given, family, middle, email, role, comment, first, last](<sym given>, <sym family>, <sym middle>, <sym email>, <sym role>, <sym comment>, <sym first>, <sym last>);
    goto L8(r);
  D0():
    deopt 2 [given1];
  L9(r4):
    c = `as.logical`(r4);
    if c then L31() else L10();
  L17():
    given2 = force? given1;
    checkMissing(given2);
    family1 = ld family;
    check L18() else D1();
  L26():
    vapply = ldf vapply;
    check L28() else D9();
  L27():
    r3 = dyn base1(<lang vapply(args, is.null, NA_LGL)>);
    goto L9(r3);
  D1():
    deopt 5 [family1];
  D9():
    deopt 32 [];
  L10():
    lapply = ldf lapply;
    check L36() else D14();
  L18():
    family2 = force? family1;
    checkMissing(family2);
    middle1 = ld middle;
    check L19() else D2();
  L28():
    p = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p1 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r7 = dyn vapply(p, p1, NA_LGL);
    check L29() else D10();
  L31():
    _person = ldf `.person`;
    check L32() else D12();
  D2():
    deopt 8 [middle1];
  D10():
    deopt 36 [r7];
  D12():
    deopt 40 [];
  D14():
    deopt 46 [];
  L19():
    middle2 = force? middle1;
    checkMissing(middle2);
    email1 = ld email;
    check L20() else D3();
  L29():
    all = ldf all in base;
    r8 = dyn all(r7);
    check L30() else D11();
  L32():
    r9 = dyn _person();
    check L33() else D13();
  L36():
    p2 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p3 = prom<V +>{
      _listify = ld `.listify`;
      _listify1 = force? _listify;
      checkMissing(_listify1);
      return _listify1;
    };
    r14 = dyn lapply(p2, p3);
    check L37() else D15();
  D3():
    deopt 11 [email1];
  D11():
    deopt 38 [r8];
  D13():
    deopt 41 [r9];
  D15():
    deopt 49 [r14];
  L20():
    email2 = force? email1;
    checkMissing(email2);
    role1 = ld role;
    check L21() else D4();
  L30():
    goto L9(r8);
  L33():
    popenv;
    return r9;
  L37():
    st args = r14;
    lengths = ldf lengths;
    check L38() else D16();
  D4():
    deopt 14 [role1];
  D16():
    deopt 52 [];
  L21():
    role2 = force? role1;
    checkMissing(role2);
    comment1 = ld comment;
    check L22() else D5();
  L38():
    p4 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    r16 = dyn lengths(p4);
    check L39() else D17();
  D5():
    deopt 17 [comment1];
  D17():
    deopt 54 [r16];
  L22():
    comment2 = force? comment1;
    checkMissing(comment2);
    first1 = ld first;
    check L23() else D6();
  L39():
    st args_length = r16;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  D6():
    deopt 20 [first1];
  L12(r18):
    r29 = `!`(r18);
    c2 = `as.logical`(r29);
    if c2 then L45() else L13();
  L23():
    first2 = force? first1;
    checkMissing(first2);
    last1 = ld last;
    check L24() else D7();
  L40():
    _in_ = ldf `%in%`;
    check L42() else D18();
  L41():
    r17 = dyn base2(<lang `<-`(args_length_ok, `%in%`(args_length, c(1, max(args_length))))>);
    goto L12(r17);
  D7():
    deopt 23 [last1];
  D18():
    deopt 59 [];
  L13():
    goto L14();
  L14():
    lapply1 = ldf lapply;
    check L49() else D23();
  L24():
    last2 = force? last1;
    checkMissing(last2);
    list = ldf list in base;
    r2 = dyn list(given2, family2, middle2, email2, role2, comment2, first2, last2);
    check L25() else D8();
  L42():
    p5 = prom<V +>{
      args_length = ld args_length;
      args_length1 = force? args_length;
      checkMissing(args_length1);
      return args_length1;
    };
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r21):
      return r21;
    L2():
      sym4 = ldf max;
      base4 = ldf max in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r20 = dyn base3(1, <lang max(args_length)>);
      goto L0(r20);
    L1(r23):
      c1 = ldf c in base;
      r25 = dyn c1(1, r23);
      goto L0(r25);
    L4():
      args_length2 = ld args_length;
      args_length3 = force? args_length2;
      checkMissing(args_length3);
      max = ldf max in base;
      r24 = dyn max(args_length3);
      goto L1(r24);
    L5():
      r22 = dyn base4(<sym args_length>);
      goto L1(r22);
    };
    r27 = dyn _in_(p5, p6);
    check L43() else D19();
  L45():
    warning = ldf warning;
    check L46() else D21();
  D8():
    deopt 27 [r2];
  D19():
    deopt 62 [r27];
  D21():
    deopt 68 [];
  D23():
    deopt 76 [];
  L25():
    goto L8(r2);
  L43():
    st args_length_ok = r27;
    all1 = ldf all in base;
    r28 = dyn all1(r27);
    check L44() else D20();
  L46():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          sym5 = ldf names;
          base5 = ldf names in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L2() else L3();
        L0(r31):
          c3 = `is.object`(r31);
          if c3 then L4() else L5(r31);
        L2():
          args6 = ld args;
          args7 = force? args6;
          checkMissing(args7);
          names = ldf names in base;
          r32 = dyn names(args7);
          goto L0(r32);
        L3():
          r30 = dyn base5(<sym args>);
          goto L0(r30);
        L1(dx1):
          return dx1;
        L4():
          dr = tryDispatchBuiltin.1("[", r31);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L6() else L5(dr);
        L5(r34):
          args_length_ok = ld args_length_ok;
          args_length_ok1 = force? args_length_ok;
          checkMissing(args_length_ok1);
          r35 = `!`(args_length_ok1);
          __ = ldf `[` in base;
          r36 = dyn __(r34, r35);
          goto L1(r36);
        L6():
          dx = getTryDispatchBuiltinValue(dr);
          goto L1(dx);
        };
        r38 = dyn paste[, collapse](p7, ", ");
        return r38;
      };
      r40 = dyn gettextf("Not all arguments are of the same length, the following need to be recycled: %s", p8);
      return r40;
    };
    r42 = dyn warning[, domain](p9, NA_LGL);
    check L47() else D22();
  L49():
    p10 = prom<V +>{
      args8 = ld args;
      args9 = force? args8;
      checkMissing(args9);
      return args9;
    };
    p11 = prom<V +>{
      rep_len = ld rep_len;
      rep_len1 = force? rep_len;
      checkMissing(rep_len1);
      return rep_len1;
    };
    p12 = prom<V +>{
      sym6 = ldf max;
      base6 = ldf max in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      args_length4 = ld args_length;
      args_length5 = force? args_length4;
      checkMissing(args_length5);
      max1 = ldf max in base;
      r48 = dyn max1(args_length5);
      goto L0(r48);
    L2():
      r46 = dyn base6(<sym args_length>);
      goto L0(r46);
    };
    r50 = dyn lapply1(p10, p11, p12);
    check L50() else D24();
  D20():
    deopt 65 [r28];
  D22():
    deopt 72 [r42];
  D24():
    deopt 80 [r50];
  L44():
    goto L12(r28);
  L47():
    goto L14();
  L50():
    st args = r50;
    r51 = clos inner1183492433;
    st person1 = r51;
    force = ldf force;
    check L51() else D25();
  D25():
    deopt 86 [];
  L51():
    p13 = prom<V +>{
      person1 = ld person1;
      person2 = force? person1;
      checkMissing(person2);
      return person2;
    };
    r53 = dyn force(p13);
    check L52() else D26();
  D26():
    deopt 88 [r53];
  L52():
    lapply2 = ldf lapply;
    check L53() else D27();
  D27():
    deopt 90 [];
  L53():
    p14 = prom<V +>{
      sym7 = ldf seq_along;
      base7 = ldf seq_along in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      args10 = ld args;
      args11 = force? args10;
      checkMissing(args11);
      c4 = `is.object`(args11);
      if c4 then L4() else L5(args11);
    L2():
      r54 = dyn base7(<lang `$`(args, given)>);
      goto L0(r54);
    L3(dx3):
      r57 = seq_along(dx3);
      goto L0(r57);
    L4():
      dr2 = tryDispatchBuiltin.1("$", args11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(args13):
      r56 = `$`(args13, <sym given>);
      goto L3(r56);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    p15 = prom<V +>{
      r59 = clos inner3002224933;
      return r59;
    };
    r61 = dyn lapply2(p14, p15);
    check L54() else D28();
  D28():
    deopt 93 [r61];
  L54():
    st rval = r61;
    _person1 = ldf `.person`;
    check L55() else D29();
  D29():
    deopt 96 [];
  L55():
    p18 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      c5 = `is.object`(rval1);
      if c5 then L1() else L2(rval1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", rval1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(rval3):
      vapply1 = ldf vapply;
      p16 = prom<V +>{
        rval4 = ld rval;
        rval5 = force? rval4;
        checkMissing(rval5);
        return rval5;
      };
      p17 = prom<V +>{
        is_null2 = ld `is.null`;
        is_null3 = force? is_null2;
        checkMissing(is_null3);
        return is_null3;
      };
      r64 = dyn vapply1(p16, p17, NA_LGL);
      r65 = `!`(r64);
      __1 = ldf `[` in base;
      r66 = dyn __1(rval3, r65);
      goto L0(r66);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r68 = dyn _person1(p18);
    check L56() else D30();
  D30():
    deopt 98 [r68];
  L56():
    popenv;
    return r68;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg with:cls, reg args:*, reg args1:V, reg p:p(V +), reg person1:cls, reg given:*, reg given1:V, reg c:L, reg given3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r3:V, reg p1:p(V +), reg family:*, reg family1:V, reg c1:L, reg family3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r5:V, reg p2:p(V +), reg middle:*, reg middle1:V, reg c2:L, reg middle3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r7:V, reg p3:p(V +), reg email:*, reg email1:V, reg c3:L, reg email3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i7:*, reg i8:V, reg __3:cls, reg r9:V, reg p4:p(V +), reg role:*, reg role1:V, reg c4:L, reg role3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i9:*, reg i10:V, reg __4:cls, reg r11:V, reg p5:p(V +), reg comment:*, reg comment1:V, reg c5:L, reg comment3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i11:*, reg i12:V, reg __5:cls, reg r13:V, reg p6:p(V +), reg first:*, reg first1:V, reg c6:L, reg first3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i13:*, reg i14:V, reg __6:cls, reg r15:V, reg p7:p(V +), reg last:*, reg last1:V, reg c7:L, reg last3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i15:*, reg i16:V, reg __7:cls, reg r17:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V |
    mkenv;
    st i = i;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    with = ldf with;
    check L3() else D0();
  L2():
    r = dyn base(<sym args>, <lang person1(given=`[[`(given, i), family=`[[`(family, i), middle=`[[`(middle, i), email=`[[`(email, i), role=`[[`(role, i), comment=`[[`(comment, i), first=`[[`(first, i), last=`[[`(last, i))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p9 = prom<V +>{
      person1 = ldf person1;
      p1 = prom<V +>{
        given = ld given;
        given1 = force? given;
        checkMissing(given1);
        c = `is.object`(given1);
        if c then L1() else L2(given1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", given1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(given3):
        i1 = ld i;
        i2 = force? i1;
        __ = ldf `[[` in base;
        r3 = dyn __(given3, i2);
        goto L0(r3);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        family = ld family;
        family1 = force? family;
        checkMissing(family1);
        c1 = `is.object`(family1);
        if c1 then L1() else L2(family1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", family1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(family3):
        i3 = ld i;
        i4 = force? i3;
        __1 = ldf `[[` in base;
        r5 = dyn __1(family3, i4);
        goto L0(r5);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p3 = prom<V +>{
        middle = ld middle;
        middle1 = force? middle;
        checkMissing(middle1);
        c2 = `is.object`(middle1);
        if c2 then L1() else L2(middle1);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", middle1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(middle3):
        i5 = ld i;
        i6 = force? i5;
        __2 = ldf `[[` in base;
        r7 = dyn __2(middle3, i6);
        goto L0(r7);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p4 = prom<V +>{
        email = ld email;
        email1 = force? email;
        checkMissing(email1);
        c3 = `is.object`(email1);
        if c3 then L1() else L2(email1);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", email1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(email3):
        i7 = ld i;
        i8 = force? i7;
        __3 = ldf `[[` in base;
        r9 = dyn __3(email3, i8);
        goto L0(r9);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p5 = prom<V +>{
        role = ld role;
        role1 = force? role;
        checkMissing(role1);
        c4 = `is.object`(role1);
        if c4 then L1() else L2(role1);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", role1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(role3):
        i9 = ld i;
        i10 = force? i9;
        __4 = ldf `[[` in base;
        r11 = dyn __4(role3, i10);
        goto L0(r11);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      p6 = prom<V +>{
        comment = ld comment;
        comment1 = force? comment;
        checkMissing(comment1);
        c5 = `is.object`(comment1);
        if c5 then L1() else L2(comment1);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[[", comment1);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(comment3):
        i11 = ld i;
        i12 = force? i11;
        __5 = ldf `[[` in base;
        r13 = dyn __5(comment3, i12);
        goto L0(r13);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p7 = prom<V +>{
        first = ld first;
        first1 = force? first;
        checkMissing(first1);
        c6 = `is.object`(first1);
        if c6 then L1() else L2(first1);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("[[", first1);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(first3):
        i13 = ld i;
        i14 = force? i13;
        __6 = ldf `[[` in base;
        r15 = dyn __6(first3, i14);
        goto L0(r15);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      p8 = prom<V +>{
        last = ld last;
        last1 = force? last;
        checkMissing(last1);
        c7 = `is.object`(last1);
        if c7 then L1() else L2(last1);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[[", last1);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(last3):
        i15 = ld i;
        i16 = force? i15;
        __7 = ldf `[[` in base;
        r17 = dyn __7(last3, i16);
        goto L0(r17);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r19 = dyn person1[given, family, middle, email, role, comment, first, last](p1, p2, p3, p4, p5, p6, p7, p8);
      return r19;
    };
    r21 = dyn with(p, p9);
    check L4() else D1();
  D1():
    deopt 5 [r21];
  L4():
    goto L0(r21);
  }
}