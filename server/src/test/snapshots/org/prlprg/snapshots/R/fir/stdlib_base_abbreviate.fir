fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg abbreviate:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg abbreviate1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V, reg abbreviate2:cls, reg state_name:*, reg state_name1:V, reg p2:p(V +), reg r9:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg unname:cls, reg st_abb:*, reg st_abb1:V, reg p3:p(V +), reg r13:V, reg abbreviate3:cls, reg state_name2:*, reg state_name3:V, reg p4:p(V +), reg r15:V, reg identical:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg table:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg st_abb2:*, reg st_abb3:V, reg nchar:cls, reg r21:V, reg p6:p(V +), reg r23:V, reg abbreviate4:cls, reg state_name4:*, reg state_name5:V, reg p7:p(V +), reg r25:V, reg as:*, reg as1:V, reg c1:L, reg as3:V, reg dr:V, reg dc:L, reg dx:V, reg which:cls, reg as4:*, reg as5:V, reg r26:V, reg p8:p(V +), reg r28:V, reg __:cls, reg r29:V, reg stopifnot1:cls, reg which1:cls, reg as6:*, reg as7:V, reg r30:V, reg p9:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg r37:V, reg c2:cls, reg r38:V, reg r39:V, reg p10:p(V +), reg r41:V, reg abbreviate5:cls, reg state_name6:*, reg state_name7:V, reg p11:p(V +), reg r43:V, reg cbind:cls, reg st_abb4:*, reg st_abb5:V, reg p12:p(V +), reg st_abb6:*, reg st_abb7:V, reg p13:p(V +), reg r46:V, reg c3:L, reg r48:V, reg dr2:V, reg dc1:L, reg dx2:V, reg st_abb8:*, reg st_abb9:V, reg st_abb10:*, reg st_abb11:V, reg r49:V, reg __1:cls, reg r50:V, reg abbreviate6:cls, reg state_name8:*, reg state_name9:V, reg p14:p(V +), reg r52:V, reg table1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg st_ab2:*, reg st_ab3:V, reg nchar1:cls, reg r55:V, reg p15:p(V +), reg r57:V, reg cbind1:cls, reg st_abb12:*, reg st_abb13:V, reg p16:p(V +), reg st_ab4:*, reg st_ab5:V, reg p17:p(V +), reg r60:V |
    mkenv;
    r = clos inner1091441733;
    st abbreviate = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r2):
    st x = r2;
    abbreviate = ldf abbreviate;
    check L6() else D1();
  L3():
    c = ldf c in base;
    r3 = dyn c("abcd", "efgh", "abce");
    check L5() else D0();
  L4():
    r1 = dyn base("abcd", "efgh", "abce");
    goto L0(r1);
  D0():
    deopt 9 [r3];
  D1():
    deopt 12 [];
  L5():
    goto L0(r3);
  L6():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn abbreviate(p, 2.0);
    check L7() else D2();
  D2():
    deopt 15 [r5];
  L7():
    abbreviate1 = ldf abbreviate;
    check L8() else D3();
  D3():
    deopt 17 [];
  L8():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r7 = dyn abbreviate1[, , strict](p1, 2.0, TRUE);
    check L9() else D4();
  D4():
    deopt 22 [r7];
  L9():
    abbreviate2 = ldf abbreviate;
    check L10() else D5();
  D5():
    deopt 24 [];
  L10():
    p2 = prom<V +>{
      state_name = ld `state.name`;
      state_name1 = force? state_name;
      checkMissing(state_name1);
      return state_name1;
    };
    r9 = dyn abbreviate2(p2, 2.0);
    check L11() else D6();
  D6():
    deopt 27 [r9];
  L11():
    st `st.abb` = r9;
    stopifnot = ldf stopifnot;
    check L12() else D7();
  D7():
    deopt 30 [];
  L12():
    p5 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      unname = ldf unname;
      p3 = prom<V +>{
        st_abb = ld `st.abb`;
        st_abb1 = force? st_abb;
        checkMissing(st_abb1);
        return st_abb1;
      };
      r13 = dyn unname(p3);
      abbreviate3 = ldf abbreviate;
      p4 = prom<V +>{
        state_name2 = ld `state.name`;
        state_name3 = force? state_name2;
        checkMissing(state_name3);
        return state_name3;
      };
      r15 = dyn abbreviate3[, , named](p4, 2.0, FALSE);
      identical = ldf identical in base;
      r16 = dyn identical(r13, r15, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r16);
    L2():
      r10 = dyn base1(<lang unname(st.abb)>, <lang abbreviate(state.name, 2.0, named=FALSE)>);
      goto L0(r10);
    };
    r18 = dyn stopifnot(p5);
    check L13() else D8();
  D8():
    deopt 32 [r18];
  L13():
    table = ldf table;
    check L14() else D9();
  D9():
    deopt 34 [];
  L14():
    p6 = prom<V +>{
      sym2 = ldf nchar;
      base2 = ldf nchar in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      st_abb2 = ld `st.abb`;
      st_abb3 = force? st_abb2;
      checkMissing(st_abb3);
      nchar = ldf nchar in base;
      r21 = dyn nchar(st_abb3, "chars", FALSE, NA_LGL);
      goto L0(r21);
    L2():
      r19 = dyn base2(<sym st.abb>);
      goto L0(r19);
    };
    r23 = dyn table(p6);
    check L15() else D10();
  D10():
    deopt 36 [r23];
  L15():
    abbreviate4 = ldf abbreviate;
    check L16() else D11();
  D11():
    deopt 38 [];
  L16():
    p7 = prom<V +>{
      state_name4 = ld `state.name`;
      state_name5 = force? state_name4;
      checkMissing(state_name5);
      return state_name5;
    };
    r25 = dyn abbreviate4[, , strict](p7, 3.0, TRUE);
    check L17() else D12();
  D12():
    deopt 43 [r25];
  L17():
    st as = r25;
    as = ld as;
    check L18() else D13();
  D13():
    deopt 45 [as];
  L18():
    as1 = force? as;
    checkMissing(as1);
    c1 = `is.object`(as1);
    if c1 then L19() else L20(as1);
  L1():
    stopifnot1 = ldf stopifnot;
    check L24() else D16();
  L19():
    dr = tryDispatchBuiltin.1("[", as1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(as3):
    which = ldf which;
    check L22() else D14();
  D14():
    deopt 48 [as3];
  D16():
    deopt 53 [];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1();
  L22():
    p8 = prom<V +>{
      as4 = ld as;
      as5 = force? as4;
      checkMissing(as5);
      r26 = `==`(as5, "Mss");
      return r26;
    };
    r28 = dyn which(p8);
    check L23() else D15();
  L24():
    p10 = prom<V +>{
      which1 = ldf which;
      p9 = prom<V +>{
        as6 = ld as;
        as7 = force? as6;
        checkMissing(as7);
        r30 = `==`(as7, "Mss");
        return r30;
      };
      r32 = dyn which1(p9);
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r36, r37):
      r39 = `==`(r36, r37);
      return r39;
    L1():
      c2 = ldf c in base;
      r38 = dyn c2(21.0, 24.0, 25.0);
      goto L0(r32, r38);
    L2():
      r35 = dyn base3(21.0, 24.0, 25.0);
      goto L0(r32, r35);
    };
    r41 = dyn stopifnot1(p10);
    check L25() else D17();
  D15():
    deopt 50 [as3, r28];
  D17():
    deopt 55 [r41];
  L23():
    __ = ldf `[` in base;
    r29 = dyn __(as3, r28);
    goto L1();
  L25():
    abbreviate5 = ldf abbreviate;
    check L26() else D18();
  D18():
    deopt 57 [];
  L26():
    p11 = prom<V +>{
      state_name6 = ld `state.name`;
      state_name7 = force? state_name6;
      checkMissing(state_name7);
      return state_name7;
    };
    r43 = dyn abbreviate5(p11, 2.0, FALSE);
    check L27() else D19();
  D19():
    deopt 61 [r43];
  L27():
    st `st.abb2` = r43;
    cbind = ldf cbind;
    check L28() else D20();
  D20():
    deopt 64 [];
  L28():
    p12 = prom<V +>{
      st_abb4 = ld `st.abb`;
      st_abb5 = force? st_abb4;
      checkMissing(st_abb5);
      return st_abb5;
    };
    p13 = prom<V +>{
      st_abb6 = ld `st.abb2`;
      st_abb7 = force? st_abb6;
      checkMissing(st_abb7);
      return st_abb7;
    };
    r46 = dyn cbind(p12, p13);
    check L29() else D21();
  D21():
    deopt 67 [r46];
  L29():
    c3 = `is.object`(r46);
    if c3 then L30() else L31(r46);
  L2():
    abbreviate6 = ldf abbreviate;
    check L35() else D24();
  L30():
    dr2 = tryDispatchBuiltin.1("[", r46);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dr2);
  L31(r48):
    st_abb8 = ld `st.abb2`;
    check L33() else D22();
  D22():
    deopt 68 [r48, st_abb8];
  D24():
    deopt 76 [];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2();
  L33():
    st_abb9 = force? st_abb8;
    checkMissing(st_abb9);
    st_abb10 = ld `st.abb`;
    check L34() else D23();
  L35():
    p14 = prom<V +>{
      state_name8 = ld `state.name`;
      state_name9 = force? state_name8;
      checkMissing(state_name9);
      return state_name9;
    };
    r52 = dyn abbreviate6[, , method](p14, 2.0, "both");
    check L36() else D25();
  D23():
    deopt 69 [r48, st_abb9, st_abb10];
  D25():
    deopt 81 [r52];
  L34():
    st_abb11 = force? st_abb10;
    checkMissing(st_abb11);
    r49 = `!=`(st_abb9, st_abb11);
    __1 = ldf `[` in base;
    r50 = dyn __1(r46, r49, <missing>);
    goto L2();
  L36():
    st `st.ab2` = r52;
    table1 = ldf table;
    check L37() else D26();
  D26():
    deopt 84 [];
  L37():
    p15 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      st_ab2 = ld `st.ab2`;
      st_ab3 = force? st_ab2;
      checkMissing(st_ab3);
      nchar1 = ldf nchar in base;
      r55 = dyn nchar1(st_ab3, "chars", FALSE, NA_LGL);
      goto L0(r55);
    L2():
      r53 = dyn base4(<sym st.ab2>);
      goto L0(r53);
    };
    r57 = dyn table1(p15);
    check L38() else D27();
  D27():
    deopt 86 [r57];
  L38():
    cbind1 = ldf cbind;
    check L39() else D28();
  D28():
    deopt 88 [];
  L39():
    p16 = prom<V +>{
      st_abb12 = ld `st.abb`;
      st_abb13 = force? st_abb12;
      checkMissing(st_abb13);
      return st_abb13;
    };
    p17 = prom<V +>{
      st_ab4 = ld `st.ab2`;
      st_ab5 = force? st_ab4;
      checkMissing(st_ab5);
      return st_ab5;
    };
    r60 = dyn cbind1(p16, p17);
    check L40() else D29();
  D29():
    deopt 91 [r60];
  L40():
    popenv;
    return r60;
  }
}
fun inner1091441733(`names.arg`, minlength, `use.classes`, dot, strict, method, named) {
  (reg names_arg:*, reg minlength:*, reg use_classes:*, reg dot:*, reg strict:*, reg method:*, reg named:*) -+> V { var `names.arg`:*, var minlength:*, reg minlength_isMissing:L, reg minlength_orDefault:*, var `use.classes`:*, reg use_classes_isMissing:L, reg use_classes_orDefault:*, var dot:*, reg dot_isMissing:L, reg dot_orDefault:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var named:*, reg named_isMissing:L, reg named_orDefault:*, reg minlength1:*, reg minlength2:V, reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg names_arg1:*, reg names_arg2:V, reg length:cls, reg r9:V, reg rep_int:cls, reg r10:V, reg named1:*, reg named2:V, reg c2:L, reg names_arg3:*, reg names_arg4:V, reg l:*, reg names__:cls, reg r11:V, reg x:*, reg x1:V, reg sub:cls, reg sub1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg names_arg6:*, reg names_arg7:V, reg as_character:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V, reg duplicated:cls, reg names_arg8:*, reg names_arg9:V, reg p3:p(V +), reg r22:V, reg names_arg10:*, reg names_arg11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg dups:*, reg dups1:V, reg any:cls, reg r25:V, reg c3:L, reg names_arg12:*, reg names_arg13:V, reg c4:L, reg names_arg15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dups2:*, reg dups3:V, reg r26:V, reg __:cls, reg r27:V, reg names_arg16:*, reg names_arg17:V, reg strict1:*, reg strict2:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x2:*, reg x3:V, reg minlength3:*, reg minlength4:V, reg use_classes1:*, reg use_classes2:V, reg abbreviate:cls, reg r30:V, reg l1:*, reg c6:L, reg r32:V, reg dr2:V, reg dc1:L, reg dx3:V, reg r34:V, reg dx4:V, reg ___:cls, reg r35:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p4:p(V +), reg r38:V, reg method3:*, reg method4:V, reg r39:V, reg c7:L, reg r40:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg names_arg18:*, reg names_arg19:V, reg length1:cls, reg r46:V, reg rep_int1:cls, reg r47:V, reg names_arg20:*, reg names_arg21:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg these:*, reg these1:V, reg minlength5:*, reg minlength6:V, reg use_classes3:*, reg use_classes4:V, reg abbreviate1:cls, reg r50:V, reg ans:*, reg ans1:V, reg l4:*, reg c8:L, reg ans3:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg dup2:*, reg dup3:V, reg ___1:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg duplicated1:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg r55:V, reg any1:cls, reg r56:V, reg r57:V, reg c9:L, reg method5:*, reg method6:V, reg r59:V, reg c10:L, reg chRev:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg chRev1:cls, reg names_arg22:*, reg names_arg23:V, reg c11:L, reg names_arg25:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg dup4:*, reg dup5:V, reg __1:cls, reg r62:V, reg p6:p(V +), reg r64:V, reg minlength7:*, reg minlength8:V, reg use_classes5:*, reg use_classes6:V, reg abbreviate2:cls, reg r65:V, reg p7:p(V +), reg r67:V, reg l7:*, reg c12:L, reg r69:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg dup6:*, reg dup7:V, reg ___2:cls, reg r72:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg r74:V, reg duplicated2:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg r76:V, reg any2:cls, reg r77:V, reg r78:V, reg c13:L, reg minlength9:*, reg minlength10:V, reg r81:V, reg dup8:*, reg dup9:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg dup12:V, reg r83:V, reg x8:*, reg x9:V, reg x10:*, reg x11:V, reg c14:L, reg dup14:V, reg x13:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dup16:V, reg dx12:V, reg dup17:*, reg dup18:V, reg __2:cls, reg r84:V, reg match:cls, reg r85:V, reg r86:V, reg names_arg26:*, reg names_arg27:V, reg c15:L, reg names_arg29:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg dup19:*, reg dup20:V, reg __3:cls, reg r87:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg r89:V, reg dups4:*, reg dups5:V, reg any3:cls, reg r90:V, reg c16:L, reg x14:*, reg x15:V, reg c17:L, reg x17:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r91:V, reg x20:V, reg r92:V, reg old:*, reg old1:V, reg names_arg30:*, reg names_arg31:V, reg match1:cls, reg r93:V, reg __4:cls, reg r94:V, reg dot1:*, reg dot2:V, reg c18:L, reg x21:*, reg x22:V, reg old2:*, reg old3:V, reg r95:V, reg paste0:cls, reg x23:*, reg x24:V, reg c19:L, reg x26:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg chgd:*, reg chgd1:V, reg __5:cls, reg r96:V, reg p9:p(V +), reg r98:V, reg l10:*, reg c20:L, reg r100:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r102:V, reg dx21:V, reg chgd2:*, reg chgd3:V, reg ___3:cls, reg r103:V, reg named3:*, reg named4:V, reg c21:L, reg old4:*, reg old5:V, reg l13:*, reg names__1:cls, reg r105:V, reg x27:*, reg x28:V |
    mkenv;
    st `names.arg` = names_arg;
    minlength_isMissing = missing.0(minlength);
    if minlength_isMissing then L0(4) else L0(minlength);
  L0(minlength_orDefault):
    st minlength = minlength_orDefault;
    use_classes_isMissing = missing.0(use_classes);
    if use_classes_isMissing then L1(TRUE) else L1(use_classes);
  L1(use_classes_orDefault):
    st `use.classes` = use_classes_orDefault;
    dot_isMissing = missing.0(dot);
    if dot_isMissing then L2(FALSE) else L2(dot);
  L2(dot_orDefault):
    st dot = dot_orDefault;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L3(FALSE) else L3(strict);
  L3(strict_orDefault):
    st strict = strict_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L4() else L5(method);
  L4():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("left.kept", "both.sides");
      goto L0(r2);
    L2():
      r = dyn base("left.kept", "both.sides");
      goto L0(r);
    };
    goto L5(p);
  L5(method_orDefault):
    st method = method_orDefault;
    named_isMissing = missing.0(named);
    if named_isMissing then L6(TRUE) else L6(named);
  L6(named_orDefault):
    st named = named_orDefault;
    minlength1 = ld minlength;
    check L51() else D0();
  D0():
    deopt 0 [minlength1];
  L51():
    minlength2 = force? minlength1;
    checkMissing(minlength2);
    r4 = `<=`(minlength2, 0);
    c1 = `as.logical`(r4);
    if c1 then L52() else L7();
  L7():
    sub = ldf sub;
    check L69() else D9();
  L52():
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L53() else L54();
  D9():
    deopt 33 [];
  L8(r6):
    st x = r6;
    named1 = ld named;
    check L60() else D4();
  L53():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L54():
    r5 = dyn base1("", <lang length(names.arg)>);
    goto L8(r5);
  L69():
    p2 = prom<V +>{
      sub1 = ldf sub;
      p1 = prom<V +>{
        sym3 = ldf `as.character`;
        base3 = ldf `as.character` in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        names_arg6 = ld `names.arg`;
        names_arg7 = force? names_arg6;
        checkMissing(names_arg7);
        as_character = ldf `as.character` in base;
        r16 = dyn as_character(names_arg7);
        goto L0(r16);
      L2():
        r14 = dyn base3(<sym names.arg>);
        goto L0(r14);
      };
      r18 = dyn sub1(" +$", "", p1);
      return r18;
    };
    r20 = dyn sub("^ +", "", p2);
    check L70() else D10();
  D4():
    deopt 16 [named1];
  D10():
    deopt 37 [r20];
  L9(r8):
    rep_int = ldf `rep.int` in base;
    r10 = dyn rep_int("", r8);
    check L59() else D3();
  L55():
    names_arg1 = ld `names.arg`;
    check L57() else D1();
  L56():
    r7 = dyn base2(<sym names.arg>);
    goto L9(r7);
  L60():
    named2 = force? named1;
    checkMissing(named2);
    c2 = `as.logical`(named2);
    if c2 then L61() else L10();
  L70():
    st `names.arg` = r20;
    duplicated = ldf duplicated;
    check L71() else D11();
  D1():
    deopt 9 [names_arg1];
  D3():
    deopt 14 [r10];
  D11():
    deopt 40 [];
  L10():
    goto L11();
  L11():
    x = ld x;
    check L66() else D8();
  L57():
    names_arg2 = force? names_arg1;
    checkMissing(names_arg2);
    length = ldf length in base;
    r9 = dyn length(names_arg2);
    check L58() else D2();
  L59():
    goto L8(r10);
  L61():
    names_arg3 = ld `names.arg`;
    check L62() else D5();
  L71():
    p3 = prom<V +>{
      names_arg8 = ld `names.arg`;
      names_arg9 = force? names_arg8;
      checkMissing(names_arg9);
      return names_arg9;
    };
    r22 = dyn duplicated(p3);
    check L72() else D12();
  D2():
    deopt 12 [r9];
  D5():
    deopt 18 [names_arg3];
  D8():
    deopt 27 [x];
  D12():
    deopt 42 [r22];
  L58():
    goto L9(r9);
  L62():
    names_arg4 = force? names_arg3;
    checkMissing(names_arg4);
    l = ld x;
    names__ = ldf `names<-`;
    check L63() else D6();
  L66():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  L72():
    st dups = r22;
    names_arg10 = ld `names.arg`;
    check L73() else D13();
  D6():
    deopt 21 [names_arg4, l, names_arg4];
  D13():
    deopt 44 [names_arg10];
  L63():
    r11 = dyn names__(l, NULL, names_arg4);
    check L64() else D7();
  L73():
    names_arg11 = force? names_arg10;
    checkMissing(names_arg11);
    st old = names_arg11;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  D7():
    deopt 23 [names_arg4, r11];
  L13(r24):
    c3 = `as.logical`(r24);
    if c3 then L78() else L14();
  L64():
    st x = r11;
    goto L11();
  L74():
    dups = ld dups;
    check L76() else D14();
  L75():
    r23 = dyn base4(<sym dups>);
    goto L13(r23);
  D14():
    deopt 49 [dups];
  L14():
    goto L16();
  L16():
    names_arg16 = ld `names.arg`;
    check L85() else D18();
  L76():
    dups1 = force? dups;
    checkMissing(dups1);
    any = ldf any in base;
    r25 = dyn any(dups1);
    check L77() else D15();
  L78():
    names_arg12 = ld `names.arg`;
    check L79() else D16();
  D15():
    deopt 52 [r25];
  D16():
    deopt 53 [names_arg12];
  D18():
    deopt 62 [names_arg16];
  L77():
    goto L13(r25);
  L79():
    names_arg13 = force? names_arg12;
    checkMissing(names_arg13);
    c4 = `is.object`(names_arg13);
    if c4 then L80() else L81(names_arg13);
  L85():
    names_arg17 = force? names_arg16;
    checkMissing(names_arg17);
    st x = names_arg17;
    strict1 = ld strict;
    check L86() else D19();
  D19():
    deopt 65 [strict1];
  L15(dx1):
    st `names.arg` = dx1;
    goto L16();
  L80():
    dr = tryDispatchBuiltin.1("[", names_arg13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L82() else L81(dr);
  L81(names_arg15):
    dups2 = ld dups;
    check L83() else D17();
  L86():
    strict2 = force? strict1;
    checkMissing(strict2);
    c5 = `as.logical`(strict2);
    if c5 then L87() else L17();
  D17():
    deopt 55 [names_arg15, dups2];
  L17():
    match_arg = ldf `match.arg`;
    check L98() else D24();
  L20():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L164() else L165();
  L82():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L83():
    dups3 = force? dups2;
    checkMissing(dups3);
    r26 = `!`(dups3);
    __ = ldf `[` in base;
    r27 = dyn __(names_arg15, r26);
    goto L15(r27);
  L87():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L88() else L89();
  D24():
    deopt 83 [];
  L18(r29):
    l1 = ld x;
    c6 = `is.object`(l1);
    if c6 then L94() else L95(r29);
  L41(r89):
    c16 = `as.logical`(r89);
    if c16 then L168() else L42();
  L88():
    x2 = ld x;
    check L90() else D20();
  L89():
    r28 = dyn base5(<lang abbreviate(x, minlength, use.classes)>);
    goto L18(r28);
  L98():
    p4 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r38 = dyn match_arg(p4);
    check L99() else D25();
  L164():
    dups4 = ld dups;
    check L166() else D55();
  L165():
    r88 = dyn base13(<sym dups>);
    goto L41(r88);
  D20():
    deopt 69 [x2];
  D25():
    deopt 85 [r38];
  D55():
    deopt 204 [dups4];
  L19(r34, dx4):
    st x = dx4;
    goto L20();
  L42():
    goto L45();
  L45():
    dot1 = ld dot;
    check L179() else D61();
  L90():
    x3 = force? x2;
    checkMissing(x3);
    minlength3 = ld minlength;
    check L91() else D21();
  L94():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r29);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L96() else L95(r29);
  L95(r32):
    ___ = ldf `[<-` in base;
    r35 = dyn ___(l1, <missing>, r29);
    goto L19(r32, r35);
  L99():
    st method = r38;
    method3 = ld method;
    check L100() else D26();
  L166():
    dups5 = force? dups4;
    checkMissing(dups5);
    any3 = ldf any in base;
    r90 = dyn any3(dups5);
    check L167() else D56();
  L168():
    x14 = ld x;
    check L169() else D57();
  D21():
    deopt 71 [minlength3];
  D26():
    deopt 87 [method3];
  D56():
    deopt 207 [r90];
  D57():
    deopt 208 [x14];
  D61():
    deopt 224 [dot1];
  L91():
    minlength4 = force? minlength3;
    checkMissing(minlength4);
    use_classes1 = ld `use.classes`;
    check L92() else D22();
  L96():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L19(r29, dx3);
  L100():
    method4 = force? method3;
    checkMissing(method4);
    r39 = `==`(method4, "both.sides");
    c7 = `as.logical`(r39);
    if c7 then L101() else L21();
  L167():
    goto L41(r90);
  L169():
    x15 = force? x14;
    checkMissing(x15);
    c17 = `is.object`(x15);
    if c17 then L170() else L171(x15);
  L179():
    dot2 = force? dot1;
    checkMissing(dot2);
    c18 = `as.logical`(dot2);
    if c18 then L180() else L46();
  D22():
    deopt 73 [use_classes1];
  L21():
    goto L22();
  L22():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L43(dx16):
    st x = dx16;
    goto L45();
  L46():
    goto L48();
  L48():
    named3 = ld named;
    check L190() else D67();
  L92():
    use_classes2 = force? use_classes1;
    checkMissing(use_classes2);
    abbreviate = ldf abbreviate in base;
    r30 = dyn abbreviate(x3, minlength4, use_classes2);
    check L93() else D23();
  L101():
    r40 = clos inner2501545716;
    st chRev = r40;
    goto L22();
  L170():
    dr14 = tryDispatchBuiltin.1("[", x15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L172() else L171(dr14);
  L171(x17):
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L173() else L174();
  L180():
    x21 = ld x;
    check L181() else D62();
  D23():
    deopt 76 [r30];
  D62():
    deopt 226 [x21];
  D67():
    deopt 243 [named3];
  L23(r43):
    st dup2 = r43;
    names_arg20 = ld `names.arg`;
    check L110() else D30();
  L44(x20, r92):
    __4 = ldf `[` in base;
    r94 = dyn __4(x20, r92);
    goto L43(r94);
  L93():
    goto L18(r30);
  L103():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L104():
    r42 = dyn base6(TRUE, <lang length(names.arg)>);
    goto L23(r42);
  L172():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L43(dx15);
  L173():
    old = ld old;
    check L175() else D58();
  L174():
    r91 = dyn base14(<sym old>, <sym names.arg>);
    goto L44(x17, r91);
  L181():
    x22 = force? x21;
    checkMissing(x22);
    old2 = ld old;
    check L182() else D63();
  L190():
    named4 = force? named3;
    checkMissing(named4);
    c21 = `as.logical`(named4);
    if c21 then L191() else L49();
  D30():
    deopt 108 [names_arg20];
  D58():
    deopt 212 [x17, old];
  D63():
    deopt 227 [x22, old2];
  L24(r45):
    rep_int1 = ldf `rep.int` in base;
    r47 = dyn rep_int1(TRUE, r45);
    check L109() else D29();
  L49():
    goto L50();
  L50():
    x27 = ld x;
    check L196() else D71();
  L105():
    names_arg18 = ld `names.arg`;
    check L107() else D27();
  L106():
    r44 = dyn base7(<sym names.arg>);
    goto L24(r44);
  L110():
    names_arg21 = force? names_arg20;
    checkMissing(names_arg21);
    st these = names_arg21;
    goto L40();
  L175():
    old1 = force? old;
    checkMissing(old1);
    names_arg30 = ld `names.arg`;
    check L176() else D59();
  L182():
    old3 = force? old2;
    checkMissing(old3);
    r95 = `!=`(x22, old3);
    st chgd = r95;
    paste0 = ldf paste0;
    check L183() else D64();
  L191():
    old4 = ld old;
    check L192() else D68();
  D27():
    deopt 101 [names_arg18];
  D29():
    deopt 106 [r47];
  D59():
    deopt 214 [x17, names_arg30];
  D64():
    deopt 232 [];
  D68():
    deopt 245 [old4];
  D71():
    deopt 254 [x27];
  L40():
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L107():
    names_arg19 = force? names_arg18;
    checkMissing(names_arg19);
    length1 = ldf length in base;
    r46 = dyn length1(names_arg19);
    check L108() else D28();
  L109():
    goto L23(r47);
  L176():
    names_arg31 = force? names_arg30;
    checkMissing(names_arg31);
    match1 = ldf match in base;
    r93 = dyn match1(old1, names_arg31, NA_INT, NULL);
    check L177() else D60();
  L183():
    p9 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c19 = `is.object`(x24);
      if c19 then L1() else L2(x24);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[", x24);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x26):
      chgd = ld chgd;
      chgd1 = force? chgd;
      __5 = ldf `[` in base;
      r96 = dyn __5(x26, chgd1);
      goto L0(r96);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r98 = dyn paste0(p9, ".");
    check L184() else D65();
  L192():
    old5 = force? old4;
    checkMissing(old5);
    l13 = ld x;
    names__1 = ldf `names<-`;
    check L193() else D69();
  L196():
    x28 = force? x27;
    checkMissing(x28);
    popenv;
    return x28;
  D28():
    deopt 104 [r46];
  D60():
    deopt 219 [x17, r93];
  D65():
    deopt 235 [r98];
  D69():
    deopt 248 [old5, l13, old5];
  L25(r49):
    st ans = r49;
    ans = ld ans;
    check L117() else D35();
  L108():
    goto L24(r46);
  L111():
    these = ld these;
    check L113() else D31();
  L112():
    r48 = dyn base8(<lang abbreviate(these, minlength, use.classes)>);
    goto L25(r48);
  L177():
    goto L44(x17, r93);
  L184():
    l10 = ld x;
    c20 = `is.object`(l10);
    if c20 then L185() else L186(r98, l10);
  L193():
    r105 = dyn names__1(l13, NULL, old5);
    check L194() else D70();
  D31():
    deopt 113 [these];
  D35():
    deopt 122 [ans];
  D70():
    deopt 250 [old5, r105];
  L47(r102, dx21):
    st x = dx21;
    goto L48();
  L113():
    these1 = force? these;
    checkMissing(these1);
    minlength5 = ld minlength;
    check L114() else D32();
  L117():
    ans1 = force? ans;
    checkMissing(ans1);
    l4 = ld x;
    c8 = `is.object`(l4);
    if c8 then L118() else L119(ans1, l4);
  L185():
    dr18 = tryDispatchBuiltin.0("[<-", l10, r98);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L187() else L186(r98, dr18);
  L186(r100, l12):
    chgd2 = ld chgd;
    check L188() else D66();
  L194():
    st x = r105;
    goto L50();
  D32():
    deopt 115 [minlength5];
  D66():
    deopt 237 [r100, l12, r98, chgd2];
  L26(dx6):
    st x = dx6;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L114():
    minlength6 = force? minlength5;
    checkMissing(minlength6);
    use_classes3 = ld `use.classes`;
    check L115() else D33();
  L118():
    dr4 = tryDispatchBuiltin.0("[<-", l4, ans1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L120() else L119(ans1, dr4);
  L119(ans3, l6):
    dup2 = ld dup2;
    check L121() else D36();
  L187():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L47(r98, dx20);
  L188():
    chgd3 = force? chgd2;
    ___3 = ldf `[<-` in base;
    r103 = dyn ___3(l12, r98, chgd3);
    goto L47(r100, r103);
  D33():
    deopt 117 [use_classes3];
  D36():
    deopt 125 [ans3, l6, ans1, dup2];
  L27(r53):
    r57 = `!`(r53);
    c9 = `as.logical`(r57);
    if c9 then L127() else L28();
  L115():
    use_classes4 = force? use_classes3;
    checkMissing(use_classes4);
    abbreviate1 = ldf abbreviate in base;
    r50 = dyn abbreviate1(these1, minlength6, use_classes4);
    check L116() else D34();
  L120():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx5);
  L121():
    dup3 = force? dup2;
    ___1 = ldf `[<-` in base;
    r51 = dyn ___1(l6, ans1, dup3);
    goto L26(r51);
  L122():
    duplicated1 = ldf duplicated;
    check L124() else D37();
  L123():
    r52 = dyn base9(<lang `<-`(dup2, duplicated(x))>);
    goto L27(r52);
  D34():
    deopt 120 [r50];
  D37():
    deopt 132 [];
  L28():
    method5 = ld method;
    check L130() else D40();
  L29():
    goto L20();
  L116():
    goto L25(r50);
  L124():
    p5 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r55 = dyn duplicated1(p5);
    check L125() else D38();
  L127():
    goto L29();
  D38():
    deopt 134 [r55];
  D40():
    deopt 143 [method5];
  L125():
    st dup2 = r55;
    any1 = ldf any in base;
    r56 = dyn any1(r55);
    check L126() else D39();
  L130():
    method6 = force? method5;
    checkMissing(method6);
    r59 = `==`(method6, "both.sides");
    c10 = `as.logical`(r59);
    if c10 then L131() else L31();
  D39():
    deopt 137 [r56];
  L31():
    goto L36();
  L36():
    minlength9 = ld minlength;
    check L147() else D47();
  L126():
    goto L27(r56);
  L131():
    chRev = ldf chRev;
    check L132() else D41();
  D41():
    deopt 148 [];
  D47():
    deopt 172 [minlength9];
  L132():
    p7 = prom<V +>{
      sym10 = ldf `.Internal`;
      base10 = ldf `.Internal` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      chRev1 = ldf chRev;
      p6 = prom<V +>{
        names_arg22 = ld `names.arg`;
        names_arg23 = force? names_arg22;
        checkMissing(names_arg23);
        c11 = `is.object`(names_arg23);
        if c11 then L1() else L2(names_arg23);
      L0(dx8):
        return dx8;
      L1():
        dr6 = tryDispatchBuiltin.1("[", names_arg23);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(names_arg25):
        dup4 = ld dup2;
        dup5 = force? dup4;
        __1 = ldf `[` in base;
        r62 = dyn __1(names_arg25, dup5);
        goto L0(r62);
      L3():
        dx7 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx7);
      };
      r64 = dyn chRev1(p6);
      minlength7 = ld minlength;
      minlength8 = force? minlength7;
      checkMissing(minlength8);
      use_classes5 = ld `use.classes`;
      use_classes6 = force? use_classes5;
      checkMissing(use_classes6);
      abbreviate2 = ldf abbreviate in base;
      r65 = dyn abbreviate2(r64, minlength8, use_classes6);
      goto L0(r65);
    L2():
      r60 = dyn base10(<lang abbreviate(chRev(`[`(names.arg, dup2)), minlength, use.classes)>);
      goto L0(r60);
    };
    r67 = dyn chRev(p7);
    check L133() else D42();
  L147():
    minlength10 = force? minlength9;
    checkMissing(minlength10);
    r81 = `+`(minlength10, 1.0);
    st minlength = r81;
    dup8 = ld dup2;
    check L148() else D48();
  D42():
    deopt 150 [r67];
  D48():
    deopt 177 [dup8];
  L133():
    l7 = ld x;
    c12 = `is.object`(l7);
    if c12 then L134() else L135(r67, l7);
  L148():
    dup9 = force? dup8;
    checkMissing(dup9);
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L149() else L150();
  L32(dx10):
    st x = dx10;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L138() else L139();
  L37(dup12, r83):
    r86 = `||`(dup12, r83);
    st dup2 = r86;
    names_arg26 = ld `names.arg`;
    check L158() else D53();
  L134():
    dr8 = tryDispatchBuiltin.0("[<-", l7, r67);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L136() else L135(r67, dr8);
  L135(r69, l9):
    dup6 = ld dup2;
    check L137() else D43();
  L149():
    x8 = ld x;
    check L151() else D49();
  L150():
    r82 = dyn base12(<sym x>, <lang `[`(x, dup2)>, 0);
    goto L37(dup9, r82);
  D43():
    deopt 152 [r69, l9, r67, dup6];
  D49():
    deopt 180 [dup9, x8];
  D53():
    deopt 193 [names_arg26];
  L33(r74):
    r78 = `!`(r74);
    c13 = `as.logical`(r78);
    if c13 then L143() else L34();
  L136():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L32(dx9);
  L137():
    dup7 = force? dup6;
    ___2 = ldf `[<-` in base;
    r72 = dyn ___2(l9, r67, dup7);
    goto L32(r72);
  L138():
    duplicated2 = ldf duplicated;
    check L140() else D44();
  L139():
    r73 = dyn base11(<lang `<-`(dup2, duplicated(x))>);
    goto L33(r73);
  L151():
    x9 = force? x8;
    checkMissing(x9);
    x10 = ld x;
    check L152() else D50();
  L158():
    names_arg27 = force? names_arg26;
    checkMissing(names_arg27);
    c15 = `is.object`(names_arg27);
    if c15 then L159() else L160(names_arg27);
  D44():
    deopt 159 [];
  D50():
    deopt 182 [dup9, x10];
  L34():
    goto L36();
  L39(dx14):
    st these = dx14;
    goto L40();
  L140():
    p8 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r76 = dyn duplicated2(p8);
    check L141() else D45();
  L143():
    goto L29();
  L152():
    x11 = force? x10;
    checkMissing(x11);
    c14 = `is.object`(x11);
    if c14 then L153() else L154(dup9, x11);
  L159():
    dr12 = tryDispatchBuiltin.1("[", names_arg27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L161() else L160(dr12);
  L160(names_arg29):
    dup19 = ld dup2;
    check L162() else D54();
  D45():
    deopt 161 [r76];
  D54():
    deopt 195 [names_arg29, dup19];
  L38(dup16, dx12):
    match = ldf match in base;
    r85 = dyn match(x9, dx12, 0, NULL);
    check L157() else D52();
  L141():
    st dup2 = r76;
    any2 = ldf any in base;
    r77 = dyn any2(r76);
    check L142() else D46();
  L153():
    dr10 = tryDispatchBuiltin.1("[", x11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L155() else L154(dup9, dr10);
  L154(dup14, x13):
    dup17 = ld dup2;
    check L156() else D51();
  L161():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L39(dx13);
  L162():
    dup20 = force? dup19;
    __3 = ldf `[` in base;
    r87 = dyn __3(names_arg29, dup20);
    goto L39(r87);
  D46():
    deopt 164 [r77];
  D51():
    deopt 184 [dup14, x13, dup17];
  D52():
    deopt 190 [dup16, r85];
  L142():
    goto L33(r77);
  L155():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L38(dup9, dx11);
  L156():
    dup18 = force? dup17;
    __2 = ldf `[` in base;
    r84 = dyn __2(x13, dup18);
    goto L38(dup14, r84);
  L157():
    goto L37(dup16, r85);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sapply:cls, reg lapply:cls, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg rev:*, reg rev1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg paste:*, reg paste1:V, reg p4:p(V +), reg r7:V |
    mkenv;
    st x = x;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn strsplit(p, NULL);
        return r1;
      };
      p2 = prom<V +>{
        rev = ld rev;
        rev1 = force? rev;
        checkMissing(rev1);
        return rev1;
      };
      r4 = dyn lapply(p1, p2);
      return r4;
    };
    p4 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r7 = dyn sapply[, , collapse](p3, p4, "");
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}