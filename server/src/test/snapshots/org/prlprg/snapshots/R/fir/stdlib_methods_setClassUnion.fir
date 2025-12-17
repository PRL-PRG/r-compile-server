fun main() {
  () -+> V { reg r:cls, reg setClassUnion:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg new:cls, reg p2:p(V +), reg r12:V, reg new1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg w1:*, reg w2:V, reg r15:V, reg __:cls, reg r16:V, reg r17:V, reg p3:p(V +), reg r19:V, reg setIs:cls, reg r20:V, reg new2:cls, reg complex:cls, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg r24:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg setClassUnion1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg c2:cls, reg r31:V, reg p7:p(V +), reg r33:V, reg is:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg quote:cls, reg r36:V, reg p8:p(V +), reg r38:V, reg stopifnot:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg __1:cls, reg r41:V, reg identical:cls, reg r42:V, reg p9:p(V +), reg r44:V, reg removeClass:cls, reg r45:V, reg removeClass1:cls, reg r46:V |
    mkenv;
    r = clos inner4174469692;
    st setClassUnion = r;
    setClassUnion = ldf setClassUnion;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("numeric", "logical");
      goto L0(r3);
    L2():
      r1 = dyn base("numeric", "logical");
      goto L0(r1);
    };
    r5 = dyn setClassUnion("maybeNumber", p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    setClass = ldf setClass;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("character");
      goto L0(r8);
    L2():
      r6 = dyn base1[id]("character");
      goto L0(r6);
    };
    r10 = dyn setClass[, contains, slots]("withId", "maybeNumber", p1);
    check L3() else D3();
  D3():
    deopt 15 [r10];
  L3():
    new = ldf new;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r12 = dyn new[, , id]("withId", p2, "test 1");
    check L5() else D5();
  D5():
    deopt 22 [r12];
  L5():
    st w1 = r12;
    new1 = ldf new;
    check L6() else D6();
  D6():
    deopt 25 [];
  L6():
    p3 = prom<V +>{
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      __ = ldf `%%` in base;
      r16 = dyn __(r14, 1.0);
      r17 = `<`(r16, 0.01);
      return r17;
    L1():
      w1 = ld w1;
      w2 = force? w1;
      checkMissing(w2);
      r15 = sqrt(w2);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym w1>);
      goto L0(r13);
    };
    r19 = dyn new1[, , id]("withId", p3, "Perfect squares");
    check L7() else D7();
  D7():
    deopt 30 [r19];
  L7():
    st w2 = r19;
    setIs = ldf setIs;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    r20 = dyn setIs("complex", "maybeNumber");
    check L9() else D9();
  D9():
    deopt 36 [r20];
  L9():
    new2 = ldf new;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    p6 = prom<V +>{
      complex = ldf complex;
      p4 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p5 = prom<V +>{
        sym3 = ldf sqrt;
        base3 = ldf sqrt in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r23):
        return r23;
      L1():
        r24 = sqrt(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
        goto L0(r24);
      L2():
        r22 = dyn base3(<lang `:`(1.0, 10.0)>);
        goto L0(r22);
      };
      r26 = dyn complex[real, imaginary](p4, p5);
      return r26;
    };
    r28 = dyn new2("withId", p6);
    check L11() else D11();
  D11():
    deopt 41 [r28];
  L11():
    st w3 = r28;
    setClassUnion1 = ldf setClassUnion;
    check L12() else D12();
  D12():
    deopt 44 [];
  L12():
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c2 = ldf c in base;
      r31 = dyn c2("expression", "language", "OptionalFunction");
      goto L0(r31);
    L2():
      r29 = dyn base4("expression", "language", "OptionalFunction");
      goto L0(r29);
    };
    r33 = dyn setClassUnion1("maybeCode", p7);
    check L13() else D13();
  D13():
    deopt 47 [r33];
  L13():
    is = ldf is;
    check L14() else D14();
  D14():
    deopt 49 [];
  L14():
    p8 = prom<V +>{
      sym5 = ldf quote;
      base5 = ldf quote in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      quote = ldf quote in base;
      r36 = dyn quote(<lang sqrt(`:`(1.0, 10.0))>);
      goto L0(r36);
    L2():
      r34 = dyn base5(<lang sqrt(`:`(1.0, 10.0))>);
      goto L0(r34);
    };
    r38 = dyn is(p8, "maybeCode");
    check L15() else D15();
  D15():
    deopt 52 [r38];
  L15():
    stopifnot = ldf stopifnot;
    check L16() else D16();
  D16():
    deopt 54 [];
  L16():
    p9 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      __1 = ldf `@` in base;
      r41 = dyn __1(<sym w1>, <sym .Data>);
      identical = ldf identical in base;
      r42 = dyn identical(r41, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r42);
    L2():
      r39 = dyn base6(<lang `@`(w1, .Data)>, <lang `:`(1.0, 10.0)>);
      goto L0(r39);
    };
    r44 = dyn stopifnot(p9);
    check L17() else D17();
  D17():
    deopt 56 [r44];
  L17():
    removeClass = ldf removeClass;
    check L18() else D18();
  D18():
    deopt 58 [];
  L18():
    r45 = dyn removeClass("withId");
    check L19() else D19();
  D19():
    deopt 60 [r45];
  L19():
    removeClass1 = ldf removeClass;
    check L20() else D20();
  D20():
    deopt 62 [];
  L20():
    r46 = dyn removeClass1("maybeNumber");
    check L21() else D21();
  D21():
    deopt 64 [r46];
  L21():
    popenv;
    return r46;
  }
}
fun inner4174469692(name, members, where) {
  (reg name:*, reg members:*, reg where:*) -+> V { var name:*, var members:*, reg members_isMissing:L, reg members_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg members1:*, reg members2:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg sapply:cls, reg members3:*, reg members4:V, reg p3:p(V +), reg isClass:*, reg isClass1:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg membersDefined:*, reg membersDefined1:V, reg all:cls, reg r19:V, reg r20:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg paste:cls, reg _dQ:cls, reg as:cls, reg members5:*, reg members6:V, reg c2:L, reg members8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg membersDefined2:*, reg membersDefined3:V, reg r21:V, reg __:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg p10:p(V +), reg r32:V, reg r33:V, reg new:cls, reg makeClassRepresentation:cls, reg name1:*, reg name2:V, reg p11:p(V +), reg getPackageName:cls, reg where3:*, reg where4:V, reg p12:p(V +), reg r37:V, reg p13:p(V +), reg where5:*, reg where6:V, reg p14:p(V +), reg r40:V, reg p15:p(V +), reg r42:V, reg getClassDef:cls, reg name3:*, reg name4:V, reg p16:p(V +), reg where7:*, reg where8:V, reg p17:p(V +), reg r45:V, reg setClass:cls, reg name5:*, reg name6:V, reg p18:p(V +), reg def:*, reg def1:V, reg p19:p(V +), reg where9:*, reg where10:V, reg p20:p(V +), reg r49:V, reg character1:cls, reg r50:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg members9:*, reg members10:V, reg match:cls, reg r53:V, reg hasNull:*, reg hasNull1:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg members11:*, reg members12:V, reg c4:L, reg members14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg hasNull2:*, reg hasNull3:V, reg r56:V, reg __1:cls, reg r57:V, reg c5:cls, reg r58:V, reg members15:*, reg members16:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg __2:cls, reg r60:V, reg c7:L, reg i6:I, reg r62:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg what:*, reg what1:V, reg __3:cls, reg r63:V, reg is:cls, reg try:cls, reg setIs:cls, reg what2:*, reg what3:V, reg p21:p(V +), reg name7:*, reg name8:V, reg p22:p(V +), reg where11:*, reg where12:V, reg p23:p(V +), reg ext:*, reg ext1:V, reg p24:p(V +), reg r68:V, reg p25:p(V +), reg r70:V, reg p26:p(V +), reg r72:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r73:V, reg i13:I, reg r74:V, reg what4:*, reg what5:V, reg c9:L, reg r75:V, reg c10:L, reg __4:cls, reg r76:V, reg i16:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r78:V, reg i19:I, reg r79:V, reg failed:*, reg failed1:V, reg what6:*, reg what7:V, reg c11:cls, reg r80:V, reg i20:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r82:V, reg r83:V, reg failed2:*, reg failed3:V, reg length1:cls, reg r84:V, reg r85:V, reg c12:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r86:V, reg r87:V, reg prev:*, reg prev1:V, reg c13:V, reg c14:L, reg try1:cls, reg removeClass:cls, reg name9:*, reg name10:V, reg p27:p(V +), reg where13:*, reg where14:V, reg p28:p(V +), reg r90:V, reg p29:p(V +), reg r92:V, reg try2:cls, reg setClass1:cls, reg name11:*, reg name12:V, reg p30:p(V +), reg prev2:*, reg prev3:V, reg p31:p(V +), reg where15:*, reg where16:V, reg p32:p(V +), reg r97:V, reg p33:p(V +), reg r99:V, reg stop1:cls, reg gettextf1:cls, reg paste1:cls, reg _dQ1:cls, reg failed4:*, reg failed5:V, reg p34:p(V +), reg r101:V, reg p35:p(V +), reg r103:V, reg p36:p(V +), reg r105:V, reg p37:p(V +), reg r107:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r109:V, reg r110:V, reg value:*, reg value1:V, reg invisible:cls, reg r111:V |
    mkenv;
    st name = name;
    members_isMissing = missing.0(members);
    if members_isMissing then L0() else L1(members);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(members_orDefault):
    st members = members_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L3(p2);
  L3(where_orDefault):
    st where = where_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L4(r7):
    r9 = `>`(r7, 0.0);
    c = `as.logical`(r9);
    if c then L35() else L5();
  L31():
    members1 = ld members;
    check L33() else D0();
  L32():
    r6 = dyn base(<sym members>);
    goto L4(r6);
  D0():
    deopt 2 [members1];
  L5():
    goto L9();
  L9():
    new = ldf new;
    check L47() else D8();
  L33():
    members2 = force? members1;
    checkMissing(members2);
    length = ldf length in base;
    r8 = dyn length(members2);
    check L34() else D1();
  L35():
    sapply = ldf sapply;
    check L36() else D2();
  D1():
    deopt 5 [r8];
  D2():
    deopt 9 [];
  D8():
    deopt 34 [];
  L34():
    goto L4(r8);
  L36():
    p3 = prom<V +>{
      members3 = ld members;
      members4 = force? members3;
      checkMissing(members4);
      return members4;
    };
    p4 = prom<V +>{
      isClass = ld isClass;
      isClass1 = force? isClass;
      checkMissing(isClass1);
      return isClass1;
    };
    p5 = prom<V +>{
      sym1 = ldf `as.environment`;
      base1 = ldf `as.environment` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r14 = dyn as_environment(where2);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym where>);
      goto L0(r12);
    };
    r16 = dyn sapply[, , where](p3, p4, p5);
    check L37() else D3();
  L47():
    p15 = prom<V +>{
      makeClassRepresentation = ldf makeClassRepresentation;
      p11 = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      p13 = prom<V +>{
        getPackageName = ldf getPackageName;
        p12 = prom<V +>{
          where3 = ld where;
          where4 = force? where3;
          checkMissing(where4);
          return where4;
        };
        r37 = dyn getPackageName(p12);
        return r37;
      };
      p14 = prom<V +>{
        where5 = ld where;
        where6 = force? where5;
        checkMissing(where6);
        return where6;
      };
      r40 = dyn makeClassRepresentation[, package, where](p11, p13, p14);
      return r40;
    };
    r42 = dyn new("ClassUnionRepresentation", p15);
    check L48() else D9();
  D3():
    deopt 14 [r16];
  D9():
    deopt 37 [r42];
  L37():
    st membersDefined = r16;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L48():
    st def = r42;
    getClassDef = ldf getClassDef;
    check L49() else D10();
  D10():
    deopt 40 [];
  L6(r18):
    r20 = `!`(r18);
    c1 = `as.logical`(r20);
    if c1 then L42() else L7();
  L38():
    membersDefined = ld membersDefined;
    check L40() else D4();
  L39():
    r17 = dyn base2(<sym membersDefined>);
    goto L6(r17);
  L49():
    p16 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p17 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r45 = dyn getClassDef[, where](p16, p17);
    check L50() else D11();
  D4():
    deopt 18 [membersDefined];
  D11():
    deopt 44 [r45];
  L7():
    goto L8(NULL);
  L8(r33):
    goto L9();
  L40():
    membersDefined1 = force? membersDefined;
    checkMissing(membersDefined1);
    all = ldf all in base;
    r19 = dyn all(membersDefined1);
    check L41() else D5();
  L42():
    stop = ldf stop;
    check L43() else D6();
  L50():
    st prev = r45;
    setClass = ldf setClass;
    check L51() else D12();
  D5():
    deopt 21 [r19];
  D6():
    deopt 24 [];
  D12():
    deopt 47 [];
  L41():
    goto L6(r19);
  L43():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          _dQ = ldf `.dQ`;
          p7 = prom<V +>{
            as = ldf as;
            p6 = prom<V +>{
              members5 = ld members;
              members6 = force? members5;
              checkMissing(members6);
              c2 = `is.object`(members6);
              if c2 then L1() else L2(members6);
            L0(dx1):
              return dx1;
            L1():
              dr = tryDispatchBuiltin.1("[", members6);
              dc = getTryDispatchBuiltinDispatched(dr);
              if dc then L3() else L2(dr);
            L2(members8):
              membersDefined2 = ld membersDefined;
              membersDefined3 = force? membersDefined2;
              checkMissing(membersDefined3);
              r21 = `!`(membersDefined3);
              __ = ldf `[` in base;
              r22 = dyn __(members8, r21);
              goto L0(r22);
            L3():
              dx = getTryDispatchBuiltinValue(dr);
              goto L0(dx);
            };
            r24 = dyn as(p6, "character");
            return r24;
          };
          r26 = dyn _dQ(p7);
          return r26;
        };
        r28 = dyn paste[, collapse](p8, ", ");
        return r28;
      };
      r30 = dyn gettextf("the member classes must be defined: not true of %s", p9);
      return r30;
    };
    r32 = dyn stop[, domain](p10, NA_LGL);
    check L44() else D7();
  L51():
    p18 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p19 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p20 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r49 = dyn setClass[, , where](p18, p19, p20);
    check L52() else D13();
  D7():
    deopt 28 [r32];
  D13():
    deopt 52 [r49];
  L44():
    goto L8(r32);
  L52():
    st value = r49;
    character1 = ldf character;
    check L53() else D14();
  D14():
    deopt 55 [];
  L53():
    r50 = dyn character1();
    check L54() else D15();
  D15():
    deopt 56 [r50];
  L54():
    st failed = r50;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L10(r52):
    st hasNull = r52;
    hasNull = ld hasNull;
    check L59() else D18();
  L55():
    members9 = ld members;
    check L57() else D16();
  L56():
    r51 = dyn base3("NULL", <sym members>, 0);
    goto L10(r51);
  D16():
    deopt 61 [members9];
  D18():
    deopt 68 [hasNull];
  L57():
    members10 = force? members9;
    checkMissing(members10);
    match = ldf match in base;
    r53 = dyn match("NULL", members10, 0, NULL);
    check L58() else D17();
  L59():
    hasNull1 = force? hasNull;
    checkMissing(hasNull1);
    c3 = `as.logical`(hasNull1);
    if c3 then L60() else L11();
  D17():
    deopt 66 [r53];
  L11():
    goto L14();
  L14():
    members15 = ld members;
    check L70() else D22();
  L58():
    goto L10(r53);
  L60():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  D22():
    deopt 84 [members15];
  L12(r55):
    st members = r55;
    goto L14();
  L61():
    members11 = ld members;
    check L63() else D19();
  L62():
    r54 = dyn base4("NULL", <lang `[`(members, `-`(hasNull))>);
    goto L12(r54);
  L70():
    members16 = force? members15;
    checkMissing(members16);
    s = toForSeq(members16);
    l = length(s);
    i = 0;
    goto L15(i);
  D19():
    deopt 73 [members11];
  L15(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L71() else L23();
  L63():
    members12 = force? members11;
    checkMissing(members12);
    c4 = `is.object`(members12);
    if c4 then L64() else L65(members12);
  L13(dx3):
    c5 = ldf c in base;
    r58 = dyn c5("NULL", dx3);
    check L68() else D21();
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    __2 = ldf `@` in base;
    r60 = dyn __2(<sym def>, <sym subclasses>);
    c7 = `is.object`(r60);
    if c7 then L72() else L73(i2, r60);
  L64():
    dr2 = tryDispatchBuiltin.1("[", members12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(members14):
    hasNull2 = ld hasNull;
    check L67() else D20();
  L71():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  D20():
    deopt 75 [members14, hasNull2];
  D21():
    deopt 80 [r58];
  L16(i8, dx5):
    st ext = dx5;
    is = ldf is;
    check L76() else D24();
  L24(r83):
    r85 = `>`(r83, 0.0);
    c12 = `as.logical`(r85);
    if c12 then L94() else L25();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L67():
    hasNull3 = force? hasNull2;
    checkMissing(hasNull3);
    r56 = `-`(<missing>, hasNull3);
    __1 = ldf `[` in base;
    r57 = dyn __1(members14, r56);
    goto L13(r57);
  L68():
    goto L12(r58);
  L72():
    dr4 = tryDispatchBuiltin.1("[[", r60);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(i2, dr4);
  L73(i6, r62):
    what = ld what;
    check L75() else D23();
  L90():
    failed2 = ld failed;
    check L92() else D30();
  L91():
    r82 = dyn base7(<sym failed>);
    goto L24(r82);
  D23():
    deopt 88 [i6, r62, what];
  D24():
    deopt 93 [i8];
  D30():
    deopt 123 [failed2];
  L25():
    goto L29();
  L29():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(i2, dx4);
  L75():
    what1 = force? what;
    __3 = ldf `[[` in base;
    r63 = dyn __3(r62, what1);
    goto L16(i6, r63);
  L76():
    p26 = prom<V +>{
      try = ldf try;
      p25 = prom<V +>{
        setIs = ldf setIs;
        p21 = prom<V +>{
          what2 = ld what;
          what3 = force? what2;
          checkMissing(what3);
          return what3;
        };
        p22 = prom<V +>{
          name7 = ld name;
          name8 = force? name7;
          checkMissing(name8);
          return name8;
        };
        p23 = prom<V +>{
          where11 = ld where;
          where12 = force? where11;
          checkMissing(where12);
          return where12;
        };
        p24 = prom<V +>{
          ext = ld ext;
          ext1 = force? ext;
          checkMissing(ext1);
          return ext1;
        };
        r68 = dyn setIs[, , where, extensionObject](p21, p22, p23, p24);
        return r68;
      };
      r70 = dyn try(p25);
      return r70;
    };
    r72 = dyn is(p26, "try-error");
    check L77() else D25();
  L92():
    failed3 = force? failed2;
    checkMissing(failed3);
    length1 = ldf length in base;
    r84 = dyn length1(failed3);
    check L93() else D31();
  L94():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  D25():
    deopt 96 [i8, r72];
  D31():
    deopt 126 [r84];
  L26(r87):
    c14 = `as.logical`(r87);
    if c14 then L98() else L27();
  L30(r110):
    popenv;
    return r110;
  L77():
    c8 = `as.logical`(r72);
    if c8 then L78() else L17();
  L93():
    goto L24(r84);
  L95():
    prev = ld prev;
    check L97() else D32();
  L96():
    r86 = dyn base8(<sym prev>);
    goto L26(r86);
  L107():
    value = ld value;
    check L109() else D39();
  L108():
    r109 = dyn base9(<sym value>);
    goto L30(r109);
  D32():
    deopt 130 [prev];
  D39():
    deopt 151 [value];
  L17():
    goto L22(i8);
  L22(i20):
    goto L15(i20);
  L27():
    try2 = ldf try;
    check L102() else D35();
  L28():
    stop1 = ldf stop;
    check L104() else D37();
  L78():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L97():
    prev1 = force? prev;
    checkMissing(prev1);
    c13 = `==`(prev1, NULL);
    goto L26(c13);
  L98():
    try1 = ldf try;
    check L99() else D33();
  L109():
    value1 = force? value;
    checkMissing(value1);
    invisible = ldf invisible in base;
    r111 = dyn invisible(value1);
    check L110() else D40();
  D33():
    deopt 134 [];
  D35():
    deopt 138 [];
  D37():
    deopt 142 [];
  D40():
    deopt 154 [r111];
  L18(i13, r74):
    r75 = `!`(r74);
    c10 = `as.logical`(r75);
    if c10 then L82() else L19();
  L79():
    what4 = ld what;
    check L81() else D26();
  L80():
    r73 = dyn base5(<sym what>);
    goto L18(i8, r73);
  L99():
    p29 = prom<V +>{
      removeClass = ldf removeClass;
      p27 = prom<V +>{
        name9 = ld name;
        name10 = force? name9;
        checkMissing(name10);
        return name10;
      };
      p28 = prom<V +>{
        where13 = ld where;
        where14 = force? where13;
        checkMissing(where14);
        return where14;
      };
      r90 = dyn removeClass[, where](p27, p28);
      return r90;
    };
    r92 = dyn try1(p29);
    check L100() else D34();
  L102():
    p33 = prom<V +>{
      setClass1 = ldf setClass;
      p30 = prom<V +>{
        name11 = ld name;
        name12 = force? name11;
        checkMissing(name12);
        return name12;
      };
      p31 = prom<V +>{
        prev2 = ld prev;
        prev3 = force? prev2;
        checkMissing(prev3);
        return prev3;
      };
      p32 = prom<V +>{
        where15 = ld where;
        where16 = force? where15;
        checkMissing(where16);
        return where16;
      };
      r97 = dyn setClass1[, , where](p30, p31, p32);
      return r97;
    };
    r99 = dyn try2(p33);
    check L103() else D36();
  L104():
    p37 = prom<V +>{
      gettextf1 = ldf gettextf;
      p36 = prom<V +>{
        paste1 = ldf paste;
        p35 = prom<V +>{
          _dQ1 = ldf `.dQ`;
          p34 = prom<V +>{
            failed4 = ld failed;
            failed5 = force? failed4;
            checkMissing(failed5);
            return failed5;
          };
          r101 = dyn _dQ1(p34);
          return r101;
        };
        r103 = dyn paste1[, collapse](p35, ", ");
        return r103;
      };
      r105 = dyn gettextf1("unable to create union class:  could not set members %s", p36);
      return r105;
    };
    r107 = dyn stop1[, domain](p37, NA_LGL);
    check L105() else D38();
  L110():
    goto L30(r111);
  D26():
    deopt 98 [i8, what4];
  D34():
    deopt 136 [r92];
  D36():
    deopt 140 [r99];
  D38():
    deopt 146 [r107];
  L19():
    goto L20(i13);
  L20(i16):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L81():
    what5 = force? what4;
    checkMissing(what5);
    c9 = `is.character`(what5);
    goto L18(i8, c9);
  L82():
    __4 = ldf `@` in base;
    r76 = dyn __4(<lang getClass(what, TRUE, where)>, <sym className>);
    st what = r76;
    goto L20(i13);
  L100():
    goto L28();
  L103():
    goto L28();
  L105():
    goto L29();
  L21(i19, r79):
    st failed = r79;
    goto L22(i19);
  L84():
    failed = ld failed;
    check L86() else D27();
  L85():
    r78 = dyn base6(<sym failed>, <sym what>);
    goto L21(i16, r78);
  D27():
    deopt 109 [i16, failed];
  L86():
    failed1 = force? failed;
    checkMissing(failed1);
    what6 = ld what;
    check L87() else D28();
  D28():
    deopt 111 [i16, what6];
  L87():
    what7 = force? what6;
    checkMissing(what7);
    c11 = ldf c in base;
    r80 = dyn c11(failed1, what7);
    check L88() else D29();
  D29():
    deopt 114 [i16, r80];
  L88():
    goto L21(i16, r80);
  }
}