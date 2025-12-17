fun main() {
  () -+> V { reg r:cls, reg sample:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sample1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sample2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg table:cls, reg Aye:*, reg Aye1:V, reg p3:p(V +), reg Bee:*, reg Bee1:V, reg p4:p(V +), reg Sea:*, reg Sea1:V, reg p5:p(V +), reg r19:V, reg addmargins:cls, reg A:*, reg A1:V, reg p6:p(V +), reg r21:V, reg stopifnot:cls, reg is_table:cls, reg aA:*, reg aA1:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg ftable:cls, reg A2:*, reg A3:V, reg p9:p(V +), reg r27:V, reg ftable1:cls, reg aA2:*, reg aA3:V, reg p10:p(V +), reg r29:V, reg ftable2:cls, reg addmargins1:cls, reg A4:*, reg A5:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg c3:cls, reg r33:V, reg p12:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg min:*, reg min1:V, reg max:*, reg max1:V, reg list:cls, reg r39:V, reg sum:*, reg sum1:V, reg list1:cls, reg r40:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V, reg ftable3:cls, reg addmargins2:cls, reg A6:*, reg A7:V, reg p15:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg c4:cls, reg r48:V, reg p16:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg sum2:*, reg sum3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg min2:*, reg min3:V, reg max2:*, reg max3:V, reg list2:cls, reg r54:V, reg list3:cls, reg r55:V, reg p17:p(V +), reg r57:V, reg p18:p(V +), reg r59:V, reg r60:cls, reg table1:cls, reg Sea2:*, reg Sea3:V, reg p19:p(V +), reg Bee2:*, reg Bee3:V, reg p20:p(V +), reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg round:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg round1:cls, reg r69:V, reg addmargins3:cls, reg B:*, reg B1:V, reg p21:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg sum4:*, reg sum5:V, reg list4:cls, reg r75:V, reg list5:cls, reg r76:V, reg p22:p(V +), reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg round2:cls, reg r81:V, reg set_seed:cls, reg r82:V, reg sample3:cls, reg p23:p(V +), reg r84:V, reg sample4:cls, reg p24:p(V +), reg r86:V, reg addmargins4:cls, reg table2:cls, reg x:*, reg x1:V, reg p25:p(V +), reg y:*, reg y1:V, reg p26:p(V +), reg r89:V, reg p27:p(V +), reg r91:V, reg print:cls, reg tx:*, reg tx1:V, reg p28:p(V +), reg r93:V |
    mkenv;
    r = clos inner3709429072;
    st addmargins = r;
    sample = ldf sample;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("Yes", "Si", "Oui");
      goto L0(r3);
    L2():
      r1 = dyn base("Yes", "Si", "Oui");
      goto L0(r1);
    };
    r5 = dyn sample[, , replace](p, 177.0, TRUE);
    check L4() else D1();
  D1():
    deopt 9 [r5];
  L4():
    st Aye = r5;
    sample1 = ldf sample;
    check L5() else D2();
  D2():
    deopt 12 [];
  L5():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("Hum", "Buzz");
      goto L0(r8);
    L2():
      r6 = dyn base1("Hum", "Buzz");
      goto L0(r6);
    };
    r10 = dyn sample1[, , replace](p1, 177.0, TRUE);
    check L6() else D3();
  D3():
    deopt 17 [r10];
  L6():
    st Bee = r10;
    sample2 = ldf sample;
    check L7() else D4();
  D4():
    deopt 20 [];
  L7():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("White", "Black", "Red", "Dead");
      goto L0(r13);
    L2():
      r11 = dyn base2("White", "Black", "Red", "Dead");
      goto L0(r11);
    };
    r15 = dyn sample2[, , replace](p2, 177.0, TRUE);
    check L8() else D5();
  D5():
    deopt 25 [r15];
  L8():
    st Sea = r15;
    table = ldf table;
    check L9() else D6();
  D6():
    deopt 28 [];
  L9():
    p3 = prom<V +>{
      Aye = ld Aye;
      Aye1 = force? Aye;
      checkMissing(Aye1);
      return Aye1;
    };
    p4 = prom<V +>{
      Bee = ld Bee;
      Bee1 = force? Bee;
      checkMissing(Bee1);
      return Bee1;
    };
    p5 = prom<V +>{
      Sea = ld Sea;
      Sea1 = force? Sea;
      checkMissing(Sea1);
      return Sea1;
    };
    r19 = dyn table(p3, p4, p5);
    check L10() else D7();
  D7():
    deopt 32 [r19];
  L10():
    st A = r19;
    addmargins = ldf addmargins;
    check L11() else D8();
  D8():
    deopt 35 [];
  L11():
    p6 = prom<V +>{
      A = ld A;
      A1 = force? A;
      checkMissing(A1);
      return A1;
    };
    r21 = dyn addmargins(p6);
    check L12() else D9();
  D9():
    deopt 37 [r21];
  L12():
    st aA = r21;
    stopifnot = ldf stopifnot;
    check L13() else D10();
  D10():
    deopt 40 [];
  L13():
    p8 = prom<V +>{
      is_table = ldf `is.table`;
      p7 = prom<V +>{
        aA = ld aA;
        aA1 = force? aA;
        checkMissing(aA1);
        return aA1;
      };
      r23 = dyn is_table(p7);
      return r23;
    };
    r25 = dyn stopifnot(p8);
    check L14() else D11();
  D11():
    deopt 42 [r25];
  L14():
    ftable = ldf ftable;
    check L15() else D12();
  D12():
    deopt 44 [];
  L15():
    p9 = prom<V +>{
      A2 = ld A;
      A3 = force? A2;
      checkMissing(A3);
      return A3;
    };
    r27 = dyn ftable(p9);
    check L16() else D13();
  D13():
    deopt 46 [r27];
  L16():
    ftable1 = ldf ftable;
    check L17() else D14();
  D14():
    deopt 48 [];
  L17():
    p10 = prom<V +>{
      aA2 = ld aA;
      aA3 = force? aA2;
      checkMissing(aA3);
      return aA3;
    };
    r29 = dyn ftable1(p10);
    check L18() else D15();
  D15():
    deopt 50 [r29];
  L18():
    ftable2 = ldf ftable;
    check L19() else D16();
  D16():
    deopt 52 [];
  L19():
    p14 = prom<V +>{
      addmargins1 = ldf addmargins;
      p11 = prom<V +>{
        A4 = ld A;
        A5 = force? A4;
        checkMissing(A5);
        return A5;
      };
      p12 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r32):
        return r32;
      L1():
        c3 = ldf c in base;
        r33 = dyn c3(3.0, 1.0);
        goto L0(r33);
      L2():
        r31 = dyn base3(3.0, 1.0);
        goto L0(r31);
      };
      p13 = prom<V +>{
        sym4 = ldf list;
        base4 = ldf list in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L2() else L3();
      L0(r36):
        return r36;
      L2():
        sym5 = ldf list;
        base5 = ldf list in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L4() else L5();
      L3():
        r35 = dyn base4[, Sum](<lang list(Min=min, Max=max)>, <sym sum>);
        goto L0(r35);
      L1(r38):
        sum = ld sum;
        sum1 = force? sum;
        checkMissing(sum1);
        list1 = ldf list in base;
        r40 = dyn list1(r38, sum1);
        goto L0(r40);
      L4():
        min = ld min;
        min1 = force? min;
        checkMissing(min1);
        max = ld max;
        max1 = force? max;
        checkMissing(max1);
        list = ldf list in base;
        r39 = dyn list(min1, max1);
        goto L1(r39);
      L5():
        r37 = dyn base5[Min, Max](<sym min>, <sym max>);
        goto L1(r37);
      };
      r42 = dyn addmargins1[, , FUN](p11, p12, p13);
      return r42;
    };
    r44 = dyn ftable2(p14);
    check L20() else D17();
  D17():
    deopt 54 [r44];
  L20():
    ftable3 = ldf ftable;
    check L21() else D18();
  D18():
    deopt 56 [];
  L21():
    p18 = prom<V +>{
      addmargins2 = ldf addmargins;
      p15 = prom<V +>{
        A6 = ld A;
        A7 = force? A6;
        checkMissing(A7);
        return A7;
      };
      p16 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r47):
        return r47;
      L1():
        c4 = ldf c in base;
        r48 = dyn c4(1.0, 3.0);
        goto L0(r48);
      L2():
        r46 = dyn base6(1.0, 3.0);
        goto L0(r46);
      };
      p17 = prom<V +>{
        sym7 = ldf list;
        base7 = ldf list in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L2() else L3();
      L0(r51):
        return r51;
      L2():
        sum2 = ld sum;
        sum3 = force? sum2;
        checkMissing(sum3);
        sym8 = ldf list;
        base8 = ldf list in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L4() else L5();
      L3():
        r50 = dyn base7[Sum, ](<sym sum>, <lang list(Min=min, Max=max)>);
        goto L0(r50);
      L1(r53):
        list3 = ldf list in base;
        r55 = dyn list3(sum3, r53);
        goto L0(r55);
      L4():
        min2 = ld min;
        min3 = force? min2;
        checkMissing(min3);
        max2 = ld max;
        max3 = force? max2;
        checkMissing(max3);
        list2 = ldf list in base;
        r54 = dyn list2(min3, max3);
        goto L1(r54);
      L5():
        r52 = dyn base8[Min, Max](<sym min>, <sym max>);
        goto L1(r52);
      };
      r57 = dyn addmargins2[, , FUN](p15, p16, p17);
      return r57;
    };
    r59 = dyn ftable3(p18);
    check L22() else D19();
  D19():
    deopt 58 [r59];
  L22():
    r60 = clos inner2501545716;
    st sqsm = r60;
    table1 = ldf table;
    check L23() else D20();
  D20():
    deopt 63 [];
  L23():
    p19 = prom<V +>{
      Sea2 = ld Sea;
      Sea3 = force? Sea2;
      checkMissing(Sea3);
      return Sea3;
    };
    p20 = prom<V +>{
      Bee2 = ld Bee;
      Bee3 = force? Bee2;
      checkMissing(Bee3);
      return Bee3;
    };
    r63 = dyn table1(p19, p20);
    check L24() else D21();
  D21():
    deopt 66 [r63];
  L24():
    st B = r63;
    sym9 = ldf round;
    base9 = ldf round in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L25() else L26();
  L0():
    sym10 = ldf round;
    base10 = ldf round in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L27() else L28();
  L25():
    round = ldf round in base;
    r66 = dyn round(<lang sweep(addmargins(B, 1.0, list(list(All=sum, N=sqsm))), 2.0, `/`(apply(B, 2.0, sum), 100.0), `/`)>, 1.0);
    goto L0();
  L26():
    r64 = dyn base9(<lang sweep(addmargins(B, 1.0, list(list(All=sum, N=sqsm))), 2.0, `/`(apply(B, 2.0, sum), 100.0), `/`)>, 1.0);
    goto L0();
  L1():
    addmargins3 = ldf addmargins;
    check L29() else D22();
  L27():
    round1 = ldf round in base;
    r69 = dyn round1(<lang sweep(addmargins(B, 2.0, list(list(All=sum, N=sqsm))), 1.0, `/`(apply(B, 1.0, sum), 100.0), `/`)>, 1.0);
    goto L1();
  L28():
    r67 = dyn base10(<lang sweep(addmargins(B, 2.0, list(list(All=sum, N=sqsm))), 1.0, `/`(apply(B, 1.0, sum), 100.0), `/`)>, 1.0);
    goto L1();
  D22():
    deopt 75 [];
  L29():
    p21 = prom<V +>{
      B = ld B;
      B1 = force? B;
      checkMissing(B1);
      return B1;
    };
    p22 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r72):
      return r72;
    L2():
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r71 = dyn base11(<lang list(Total=sum)>);
      goto L0(r71);
    L1(r74):
      list5 = ldf list in base;
      r76 = dyn list5(r74);
      goto L0(r76);
    L4():
      sum4 = ld sum;
      sum5 = force? sum4;
      checkMissing(sum5);
      list4 = ldf list in base;
      r75 = dyn list4(sum5);
      goto L1(r75);
    L5():
      r73 = dyn base12[Total](<sym sum>);
      goto L1(r73);
    };
    r78 = dyn addmargins3[, , FUN](p21, 2.0, p22);
    check L30() else D23();
  D23():
    deopt 80 [r78];
  L30():
    st mB = r78;
    sym13 = ldf round;
    base13 = ldf round in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L31() else L32();
  L2():
    set_seed = ldf `set.seed`;
    check L33() else D24();
  L31():
    round2 = ldf round in base;
    r81 = dyn round2(<lang ftable(sweep(addmargins(mB, 1.0, list(list(All=sum, N=sqsm))), 2.0, `/`(apply(mB, 2.0, sum), 100.0), `/`))>, 1.0);
    goto L2();
  L32():
    r79 = dyn base13(<lang ftable(sweep(addmargins(mB, 1.0, list(list(All=sum, N=sqsm))), 2.0, `/`(apply(mB, 2.0, sum), 100.0), `/`))>, 1.0);
    goto L2();
  D24():
    deopt 86 [];
  L33():
    r82 = dyn set_seed(1.0);
    check L34() else D25();
  D25():
    deopt 88 [r82];
  L34():
    sample3 = ldf sample;
    check L35() else D26();
  D26():
    deopt 90 [];
  L35():
    p23 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    r84 = dyn sample3[, , replace](p23, 20.0, TRUE);
    check L36() else D27();
  D27():
    deopt 95 [r84];
  L36():
    st x = r84;
    sample4 = ldf sample;
    check L37() else D28();
  D28():
    deopt 98 [];
  L37():
    p24 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    r86 = dyn sample4[, , replace](p24, 20.0, TRUE);
    check L38() else D29();
  D29():
    deopt 103 [r86];
  L38():
    st y = r86;
    addmargins4 = ldf addmargins;
    check L39() else D30();
  D30():
    deopt 106 [];
  L39():
    p27 = prom<V +>{
      table2 = ldf table;
      p25 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      p26 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r89 = dyn table2(p25, p26);
      return r89;
    };
    r91 = dyn addmargins4(p27);
    check L40() else D31();
  D31():
    deopt 108 [r91];
  L40():
    st tx = r91;
    print = ldf print;
    check L41() else D32();
  D32():
    deopt 111 [];
  L41():
    p28 = prom<V +>{
      tx = ld tx;
      tx1 = force? tx;
      checkMissing(tx1);
      return tx1;
    };
    r93 = dyn print[, `zero.print`](p28, ".");
    check L42() else D33();
  D33():
    deopt 115 [r93];
  L42():
    popenv;
    return r93;
  }
}
fun inner3709429072(A, margin, FUN, quiet) {
  (reg A:*, reg margin:*, reg FUN:*, reg quiet:*) -+> V { var A:*, var margin:*, reg margin_isMissing:L, reg margin_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg A1:*, reg A2:V, reg dim:cls, reg r4:V, reg r5:I, reg p:p(V +), var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, reg sum:*, reg sum1:V, reg p1:p(V +), var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg A3:*, reg A4:V, reg dim1:cls, reg r12:V, reg c:V, reg c1:L, reg stop:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg margin1:*, reg margin2:V, reg length:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg missing:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg FUN1:*, reg FUN2:V, reg length1:cls, reg r23:V, reg r24:V, reg c2:L, reg c4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg c7:L, reg r26:V, reg FUN3:*, reg FUN4:V, reg is_list:cls, reg r27:V, reg r28:V, reg c8:L, reg c9:V, reg c11:L, reg miss_FUN:*, reg miss_FUN1:V, reg r29:V, reg c12:L, reg deparse1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg substitute:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg r35:V, reg setNames:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg FUN5:*, reg FUN6:V, reg list:cls, reg r38:V, reg p3:p(V +), reg fname:*, reg fname1:V, reg p4:p(V +), reg r41:V, reg miss_FUN2:*, reg miss_FUN3:V, reg r43:V, reg c13:L, reg r44:cls, reg mode:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg substitute1:cls, reg r47:V, reg p5:p(V +), reg r49:V, reg r50:V, reg c14:L, reg eval_parent:cls, reg add_names:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg substitute2:cls, reg r53:V, reg p6:p(V +), reg r55:V, reg p7:p(V +), reg r57:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg r60:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg FUN7:*, reg FUN8:V, reg names:cls, reg r63:V, reg c15:V, reg c16:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r64:V, reg r65:V, reg rep:cls, reg r66:V, reg l:*, reg names__:cls, reg r67:V, reg r68:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r70:V, reg r71:V, reg FUN9:*, reg FUN10:V, reg length2:cls, reg r72:V, reg n_sid:*, reg n_sid1:V, reg r73:V, reg c17:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r74:V, reg r75:V, reg FUN11:*, reg FUN12:V, reg length3:cls, reg r76:V, reg r77:V, reg c18:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r78:V, reg r79:V, reg rep1:cls, reg r80:V, reg r81:V, reg stop1:cls, reg gettextf:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r82:V, reg r83:V, reg FUN13:*, reg FUN14:V, reg length4:cls, reg r84:V, reg p8:p(V +), reg n_sid2:*, reg n_sid3:V, reg p9:p(V +), reg r87:V, reg p10:p(V +), reg r89:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r91:V, reg r92:V, reg n_sid4:*, reg n_sid5:V, reg vector:cls, reg r93:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r94:V, reg r95:V, reg FUN15:*, reg FUN16:V, reg r96:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r97:V, reg i7:I, reg r98:V, reg FUN17:*, reg FUN18:V, reg names1:cls, reg r99:V, reg c20:L, reg i9:I, reg r101:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r102:V, reg l2:*, reg c21:L, reg i15:I, reg dx3:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i17:I, reg dx7:V, reg i18:*, reg i19:V, reg ____:cls, reg r103:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r104:V, reg i22:I, reg r105:V, reg FUN19:*, reg FUN20:V, reg c22:L, reg i24:I, reg FUN22:V, reg dr4:V, reg dc2:L, reg dx8:V, reg i26:I, reg dx9:V, reg i27:*, reg i28:V, reg __1:cls, reg r106:V, reg is_list1:cls, reg r107:V, reg c23:L, reg fnames:*, reg fnames1:V, reg c24:L, reg i32:I, reg fnames3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i34:I, reg dx11:V, reg i35:*, reg i36:V, reg __2:cls, reg r108:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r109:V, reg i39:I, reg r110:V, reg FUN23:*, reg FUN24:V, reg c25:L, reg i41:I, reg FUN26:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i43:I, reg dx13:V, reg i44:*, reg i45:V, reg __3:cls, reg r111:V, reg names2:cls, reg r112:V, reg l5:*, reg c26:L, reg i47:I, reg r114:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx14:V, reg i49:I, reg dx15:V, reg i50:*, reg i51:V, reg ____1:cls, reg r117:V, reg fnames4:*, reg fnames5:V, reg c27:L, reg i53:I, reg fnames7:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i55:I, reg dx17:V, reg i56:*, reg i57:V, reg __4:cls, reg r118:V, reg r119:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r120:V, reg i60:I, reg r121:V, reg blank:*, reg blank1:V, reg r122:I, reg c28:L, reg i62:I, reg r124:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i64:I, reg dx19:V, reg blank2:*, reg blank3:V, reg __5:cls, reg r125:V, reg l8:*, reg c29:L, reg i66:I, reg dx22:V, reg l11:*, reg dx23:V, reg l12:*, reg dr16:V, reg dc8:L, reg dx26:V, reg i68:I, reg dx27:V, reg l14:*, reg dx28:V, reg dx29:V, reg i69:*, reg i70:V, reg __6:cls, reg r126:V, reg c30:L, reg i72:I, reg dx32:V, reg l16:*, reg dx33:V, reg dr18:V, reg dc9:L, reg dx35:V, reg i74:I, reg dx36:V, reg l18:*, reg dx37:V, reg blank4:*, reg blank5:V, reg ___:cls, reg r127:V, reg c31:L, reg i76:I, reg dx39:V, reg l20:*, reg dr20:V, reg dc10:L, reg dx41:V, reg i78:I, reg dx43:V, reg i79:*, reg i80:V, reg ____2:cls, reg r128:V, reg topname:*, reg topname1:V, reg r129:V, reg c32:L, reg paste0:cls, reg margin3:*, reg margin4:V, reg c33:L, reg margin6:V, reg dr22:V, reg dc11:L, reg dx44:V, reg dx45:V, reg i83:*, reg i84:V, reg __7:cls, reg r130:V, reg p11:p(V +), reg fnames8:*, reg fnames9:V, reg c34:L, reg fnames11:V, reg dr24:V, reg dc12:L, reg dx46:V, reg dx47:V, reg i85:*, reg i86:V, reg __8:cls, reg r132:V, reg c35:L, reg dx49:V, reg dr26:V, reg dc13:L, reg dx50:V, reg dx51:V, reg blank6:*, reg blank7:V, reg __9:cls, reg r133:V, reg p12:p(V +), reg r135:V, reg l21:*, reg c36:L, reg i88:I, reg r138:V, reg l24:*, reg r139:V, reg l25:*, reg dr28:V, reg dc14:L, reg dx52:V, reg i90:I, reg r142:V, reg l27:*, reg r143:V, reg dx53:V, reg i91:*, reg i92:V, reg __10:cls, reg r144:V, reg c37:L, reg i94:I, reg r146:V, reg l29:*, reg dx55:V, reg dr30:V, reg dc15:L, reg dx56:V, reg i96:I, reg r148:V, reg l31:*, reg dx57:V, reg blank8:*, reg blank9:V, reg ___1:cls, reg r149:V, reg c38:L, reg i98:I, reg r151:V, reg l33:*, reg dr32:V, reg dc16:L, reg dx58:V, reg i100:I, reg r153:V, reg dx59:V, reg i101:*, reg i102:V, reg ____3:cls, reg r154:V, reg i103:I, reg r155:V, reg paste1:cls, reg topname2:*, reg topname3:V, reg p13:p(V +), reg fnames12:*, reg fnames13:V, reg c39:L, reg fnames15:V, reg dr34:V, reg dc17:L, reg dx60:V, reg dx61:V, reg i104:*, reg i105:V, reg __11:cls, reg r157:V, reg p14:p(V +), reg r159:V, reg l34:*, reg c40:L, reg i107:I, reg r161:V, reg l36:*, reg dr36:V, reg dc18:L, reg dx62:V, reg i109:I, reg r163:V, reg dx63:V, reg i110:*, reg i111:V, reg ____4:cls, reg r164:V, reg i112:I, reg fnames16:*, reg fnames17:V, reg c41:L, reg i114:I, reg fnames19:V, reg dr38:V, reg dc19:L, reg dx64:V, reg i116:I, reg dx65:V, reg i117:*, reg i118:V, reg __12:cls, reg r166:V, reg r167:V, reg c42:L, reg paste2:cls, reg margin7:*, reg margin8:V, reg c43:L, reg margin10:V, reg dr40:V, reg dc20:L, reg dx66:V, reg dx67:V, reg i121:*, reg i122:V, reg __13:cls, reg r168:V, reg p15:p(V +), reg r170:V, reg l37:*, reg c44:L, reg i124:I, reg r172:V, reg l39:*, reg dr42:V, reg dc21:L, reg dx68:V, reg i126:I, reg r174:V, reg dx69:V, reg i127:*, reg i128:V, reg ____5:cls, reg r175:V, reg r176:cls, reg A5:*, reg A6:V, reg n_sid6:*, reg n_sid7:V, reg r177:V, reg s1:V, reg l40:I, reg i129:I, reg i130:I, reg i131:I, reg c45:L, reg x1:V, reg expand_one:cls, reg new_A:*, reg new_A1:V, reg p16:p(V +), reg margin11:*, reg margin12:V, reg c46:L, reg margin14:V, reg dr44:V, reg dc22:L, reg dx70:V, reg dx71:V, reg i134:*, reg i135:V, reg __14:cls, reg r179:V, reg p17:p(V +), reg FUN27:*, reg FUN28:V, reg c47:L, reg FUN30:V, reg dr46:V, reg dc23:L, reg dx72:V, reg dx73:V, reg i136:*, reg i137:V, reg __15:cls, reg r181:V, reg p18:p(V +), reg fnames20:*, reg fnames21:V, reg c48:L, reg fnames23:V, reg dr48:V, reg dc24:L, reg dx74:V, reg dx75:V, reg i138:*, reg i139:V, reg __16:cls, reg r183:V, reg p19:p(V +), reg r185:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r186:V, reg r187:V, reg A7:*, reg A8:V, reg inherits:cls, reg r188:V, reg c49:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r189:V, reg r190:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r191:V, reg r192:V, reg new_A2:*, reg new_A3:V, reg class:cls, reg r193:V, reg c50:cls, reg r194:V, reg l41:*, reg class__:cls, reg r195:V, reg quiet1:*, reg quiet2:V, reg r197:V, reg c51:L, reg c53:V, reg miss_FUN4:*, reg miss_FUN5:V, reg r198:V, reg c54:L, reg c55:V, reg c57:L, reg c59:V, reg n_sid8:*, reg n_sid9:V, reg r199:V, reg c60:L, reg c61:V, reg c63:L, reg cat:cls, reg r200:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r201:V, reg r202:V, reg n_sid10:*, reg n_sid11:V, reg r203:I, reg s2:V, reg l42:I, reg i140:I, reg i141:I, reg i142:I, reg c64:L, reg x2:V, reg cat1:cls, reg paste3:cls, reg i145:*, reg i146:V, reg p20:p(V +), reg r205:V, reg p21:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r207:V, reg r208:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r209:V, reg r210:V, reg A9:*, reg A10:V, reg dimnames:cls, reg r211:V, reg names3:cls, reg r212:V, reg c65:L, reg r214:V, reg dr50:V, reg dc25:L, reg dx76:V, reg dx77:V, reg margin15:*, reg margin16:V, reg c66:L, reg r216:V, reg margin18:V, reg dr52:V, reg dc26:L, reg dx78:V, reg r218:V, reg dx79:V, reg i147:*, reg i148:V, reg __17:cls, reg r219:V, reg __18:cls, reg r220:V, reg p22:p(V +), reg r222:V, reg new_A4:*, reg new_A5:V |
    mkenv;
    st A = A;
    margin_isMissing = missing.0(margin);
    if margin_isMissing then L0() else L1(margin);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang dim(A)>);
      goto L0(r);
    L1(r3):
      r5 = seq_along(r3);
      goto L0(r5);
    L4():
      A1 = ld A;
      A2 = force? A1;
      checkMissing(A2);
      dim = ldf dim in base;
      r4 = dyn dim(A2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym A>);
      goto L1(r2);
    };
    goto L1(p);
  L1(margin_orDefault):
    st margin = margin_orDefault;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L2() else L3(FUN);
  L2():
    p1 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    goto L3(p1);
  L3(FUN_orDefault):
    st FUN = FUN_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L4(FALSE) else L4(quiet);
  L4(quiet_orDefault):
    st quiet = quiet_orDefault;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L78() else L79();
  L5(r9):
    c1 = `as.logical`(r9);
    if c1 then L84() else L7();
  L78():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L79():
    r8 = dyn base2(<lang dim(A)>);
    goto L5(r8);
  L6(r11):
    c = `==`(r11, NULL);
    goto L5(c);
  L7():
    goto L8();
  L8():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L80():
    A3 = ld A;
    check L82() else D0();
  L81():
    r10 = dyn base3(<sym A>);
    goto L6(r10);
  L84():
    stop = ldf stop;
    check L85() else D2();
  D0():
    deopt 3 [A3];
  D2():
    deopt 9 [];
  L9(r16):
    st `n.sid` = r16;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L82():
    A4 = force? A3;
    checkMissing(A4);
    dim1 = ldf dim in base;
    r12 = dyn dim1(A4);
    check L83() else D1();
  L85():
    r13 = dyn stop("'A' must be an array or table");
    check L86() else D3();
  L88():
    margin1 = ld margin;
    check L90() else D4();
  L89():
    r15 = dyn base4(<sym margin>);
    goto L9(r15);
  D1():
    deopt 6 [r12];
  D3():
    deopt 11 [r13];
  D4():
    deopt 16 [margin1];
  L10(r19):
    st `miss.FUN` = r19;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L83():
    goto L6(r12);
  L86():
    goto L8();
  L90():
    margin2 = force? margin1;
    checkMissing(margin2);
    length = ldf length in base;
    r17 = dyn length(margin2);
    check L91() else D5();
  L92():
    missing = ldf missing in base;
    r20 = dyn missing(<sym FUN>);
    goto L10(r20);
  L93():
    r18 = dyn base5(<sym FUN>);
    goto L10(r18);
  D5():
    deopt 19 [r17];
  L11(r22):
    r24 = `==`(r22, 1.0);
    c2 = `as.logical`(r24);
    if c2 then L98() else L12(c2);
  L91():
    goto L9(r17);
  L94():
    FUN1 = ld FUN;
    check L96() else D6();
  L95():
    r21 = dyn base6(<sym FUN>);
    goto L11(r21);
  D6():
    deopt 27 [FUN1];
  L12(c4):
    c11 = `as.logical`(c4);
    if c11 then L104() else L14();
  L96():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    length1 = ldf length in base;
    r23 = dyn length1(FUN2);
    check L97() else D7();
  L98():
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L99() else L100();
  D7():
    deopt 30 [r23];
  L13(c7, r26):
    r28 = `!`(r26);
    c8 = `as.logical`(r28);
    c9 = `&&`(c7, c8);
    goto L12(c9);
  L14():
    goto L17();
  L17():
    miss_FUN2 = ld `miss.FUN`;
    check L113() else D15();
  L97():
    goto L11(r23);
  L99():
    FUN3 = ld FUN;
    check L101() else D8();
  L100():
    r25 = dyn base7(<sym FUN>);
    goto L13(c2, r25);
  L104():
    miss_FUN = ld `miss.FUN`;
    check L105() else D10();
  D8():
    deopt 35 [c2, FUN3];
  D10():
    deopt 41 [miss_FUN];
  D15():
    deopt 59 [miss_FUN2];
  L101():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    is_list = ldf `is.list` in base;
    r27 = dyn is_list(FUN4);
    check L102() else D9();
  L105():
    miss_FUN1 = force? miss_FUN;
    checkMissing(miss_FUN1);
    r29 = `!`(miss_FUN1);
    c12 = `as.logical`(r29);
    if c12 then L106() else L15();
  L113():
    miss_FUN3 = force? miss_FUN2;
    checkMissing(miss_FUN3);
    r43 = `!`(miss_FUN3);
    c13 = `as.logical`(r43);
    if c13 then L114() else L18();
  D9():
    deopt 38 [c2, r27];
  L15():
    goto L16("Sum");
  L16(r35):
    st fname = r35;
    setNames = ldf setNames;
    check L110() else D13();
  L18():
    goto L26();
  L26():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L134() else L135();
  L102():
    goto L13(c2, r27);
  L106():
    deparse1 = ldf deparse1;
    check L107() else D11();
  L114():
    r44 = clos inner2989980747;
    st `add.names` = r44;
    mode = ldf mode;
    check L115() else D16();
  D11():
    deopt 45 [];
  D13():
    deopt 52 [];
  D16():
    deopt 66 [];
  L27(r71):
    n_sid = ld `n.sid`;
    check L138() else D26();
  L107():
    p2 = prom<V +>{
      sym8 = ldf substitute;
      base8 = ldf substitute in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      substitute = ldf substitute in base;
      r32 = dyn substitute(<sym FUN>);
      goto L0(r32);
    L2():
      r30 = dyn base8(<sym FUN>);
      goto L0(r30);
    };
    r34 = dyn deparse1(p2);
    check L108() else D12();
  L110():
    p3 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      FUN5 = ld FUN;
      FUN6 = force? FUN5;
      checkMissing(FUN6);
      list = ldf list in base;
      r38 = dyn list(FUN6);
      goto L0(r38);
    L2():
      r36 = dyn base9(<sym FUN>);
      goto L0(r36);
    };
    p4 = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      return fname1;
    };
    r41 = dyn setNames(p3, p4);
    check L111() else D14();
  L115():
    p5 = prom<V +>{
      sym10 = ldf substitute;
      base10 = ldf substitute in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      substitute1 = ldf substitute in base;
      r47 = dyn substitute1(<sym FUN>);
      goto L0(r47);
    L2():
      r45 = dyn base10(<sym FUN>);
      goto L0(r45);
    };
    r49 = dyn mode(p5);
    check L116() else D17();
  L134():
    FUN9 = ld FUN;
    check L136() else D24();
  L135():
    r70 = dyn base15(<sym FUN>);
    goto L27(r70);
  D12():
    deopt 47 [r34];
  D14():
    deopt 55 [r41];
  D17():
    deopt 68 [r49];
  D24():
    deopt 100 [FUN9];
  D26():
    deopt 103 [r71, n_sid];
  L108():
    goto L16(r34);
  L111():
    st FUN = r41;
    goto L17();
  L116():
    r50 = `==`(r49, "call");
    c14 = `as.logical`(r50);
    if c14 then L117() else L19();
  L136():
    FUN10 = force? FUN9;
    checkMissing(FUN10);
    length2 = ldf length in base;
    r72 = dyn length2(FUN10);
    check L137() else D25();
  L138():
    n_sid1 = force? n_sid;
    checkMissing(n_sid1);
    r73 = `!=`(r71, n_sid1);
    c17 = `as.logical`(r73);
    if c17 then L139() else L28();
  D25():
    deopt 103 [r72];
  L19():
    goto L20();
  L20():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L121() else L122();
  L28():
    goto L33();
  L33():
    sym19 = ldf vector;
    base19 = ldf vector in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L151() else L152();
  L117():
    eval_parent = ldf `eval.parent`;
    check L118() else D18();
  L137():
    goto L27(r72);
  L139():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L140() else L141();
  D18():
    deopt 72 [];
  L21(r60):
    c16 = `as.logical`(r60);
    if c16 then L127() else L23();
  L29(r75):
    r77 = `==`(r75, 1);
    c18 = `as.logical`(r77);
    if c18 then L144() else L30();
  L34(r92):
    st fnames = r92;
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L155() else L156();
  L118():
    p7 = prom<V +>{
      add_names = ldf `add.names`;
      p6 = prom<V +>{
        sym11 = ldf substitute;
        base11 = ldf substitute in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r52):
        return r52;
      L1():
        substitute2 = ldf substitute in base;
        r53 = dyn substitute2(<sym FUN>);
        goto L0(r53);
      L2():
        r51 = dyn base11(<sym FUN>);
        goto L0(r51);
      };
      r55 = dyn add_names(p6);
      return r55;
    };
    r57 = dyn eval_parent(p7);
    check L119() else D19();
  L121():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L123() else L124();
  L122():
    r59 = dyn base12(<lang names(FUN)>);
    goto L21(r59);
  L140():
    FUN11 = ld FUN;
    check L142() else D27();
  L141():
    r74 = dyn base16(<sym FUN>);
    goto L29(r74);
  L151():
    n_sid4 = ld `n.sid`;
    check L153() else D31();
  L152():
    r91 = dyn base19("list", <sym n.sid>);
    goto L34(r91);
  D19():
    deopt 74 [r57];
  D27():
    deopt 108 [FUN11];
  D31():
    deopt 129 [n_sid4];
  L22(r62):
    c15 = `==`(r62, NULL);
    goto L21(c15);
  L23():
    goto L25(NULL);
  L25(r68):
    goto L26();
  L30():
    stop1 = ldf stop;
    check L148() else D29();
  L32(r81):
    goto L33();
  L35(r95):
    s = toForSeq(r95);
    l1 = length(s);
    i = 0;
    goto L36(i);
  L119():
    st FUN = r57;
    goto L20();
  L123():
    FUN7 = ld FUN;
    check L125() else D20();
  L124():
    r61 = dyn base13(<sym FUN>);
    goto L22(r61);
  L127():
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  L142():
    FUN12 = force? FUN11;
    checkMissing(FUN12);
    length3 = ldf length in base;
    r76 = dyn length3(FUN12);
    check L143() else D28();
  L144():
    sym17 = ldf rep;
    base17 = ldf rep in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L145() else L146();
  L153():
    n_sid5 = force? n_sid4;
    checkMissing(n_sid5);
    vector = ldf vector in base;
    r93 = dyn vector("list", n_sid5);
    check L154() else D32();
  L155():
    FUN15 = ld FUN;
    check L157() else D33();
  L156():
    r94 = dyn base20(<sym FUN>);
    goto L35(r94);
  D20():
    deopt 81 [FUN7];
  D28():
    deopt 111 [r76];
  D29():
    deopt 119 [];
  D32():
    deopt 132 [r93];
  D33():
    deopt 135 [FUN15];
  L24(r65):
    l = ld FUN;
    names__ = ldf `names<-`;
    check L130() else D22();
  L31(r79):
    st FUN = r79;
    goto L32(r79);
  L36(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l1, i2);
    if c19 then L158() else L63();
  L125():
    FUN8 = force? FUN7;
    checkMissing(FUN8);
    names = ldf names in base;
    r63 = dyn names(FUN8);
    check L126() else D21();
  L128():
    rep = ldf rep in base;
    r66 = dyn rep("", <lang length(FUN)>);
    goto L24(r66);
  L129():
    r64 = dyn base14("", <lang length(FUN)>);
    goto L24(r64);
  L143():
    goto L29(r76);
  L145():
    rep1 = ldf rep in base;
    r80 = dyn rep1(<sym FUN>, <sym n.sid>);
    goto L31(r80);
  L146():
    r78 = dyn base17(<sym FUN>, <sym n.sid>);
    goto L31(r78);
  L148():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sym18 = ldf length;
        base18 = ldf length in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L1() else L2();
      L0(r83):
        return r83;
      L1():
        FUN13 = ld FUN;
        FUN14 = force? FUN13;
        checkMissing(FUN14);
        length4 = ldf length in base;
        r84 = dyn length4(FUN14);
        goto L0(r84);
      L2():
        r82 = dyn base18(<sym FUN>);
        goto L0(r82);
      };
      p9 = prom<V +>{
        n_sid2 = ld `n.sid`;
        n_sid3 = force? n_sid2;
        checkMissing(n_sid3);
        return n_sid3;
      };
      r87 = dyn gettextf("length of FUN, %d,\n does not match the length of the margins, %d", p8, p9);
      return r87;
    };
    r89 = dyn stop1[, domain](p10, NA_LGL);
    check L149() else D30();
  L154():
    goto L34(r93);
  L157():
    FUN16 = force? FUN15;
    checkMissing(FUN16);
    r96 = seq_along(FUN16);
    goto L35(r96);
  D21():
    deopt 84 [r63];
  D22():
    deopt 90 [r65, l, r65];
  D30():
    deopt 123 [r89];
  L63():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L159() else L160();
  L126():
    goto L22(r63);
  L130():
    r67 = dyn names__(l, NULL, r65);
    check L131() else D23();
  L149():
    goto L32(r89);
  L158():
    r176 = clos inner4039720478;
    st `expand.one` = r176;
    A5 = ld A;
    check L258() else D68();
  D23():
    deopt 92 [r65, r67];
  D68():
    deopt 269 [A5];
  L37(i7, r98):
    c20 = `is.object`(r98);
    if c20 then L163() else L164(i7, r98);
  L131():
    st FUN = r67;
    goto L25(r65);
  L159():
    FUN17 = ld FUN;
    check L161() else D34();
  L160():
    r97 = dyn base21(<sym FUN>);
    goto L37(i2, r97);
  L258():
    A6 = force? A5;
    checkMissing(A6);
    st `new.A` = A6;
    n_sid6 = ld `n.sid`;
    check L259() else D69();
  D34():
    deopt 140 [i2, FUN17];
  D69():
    deopt 273 [1, n_sid6];
  L38(i11, dx1):
    l2 = ld fnames;
    c21 = `is.object`(l2);
    if c21 then L167() else L168(i11, dx1, l2);
  L161():
    FUN18 = force? FUN17;
    checkMissing(FUN18);
    names1 = ldf names in base;
    r99 = dyn names1(FUN18);
    check L162() else D35();
  L163():
    dr = tryDispatchBuiltin.1("[", r98);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L165() else L164(i7, dr);
  L164(i9, r101):
    i12 = ld i;
    check L166() else D36();
  L259():
    n_sid7 = force? n_sid6;
    checkMissing(n_sid7);
    r177 = `:`(1, n_sid7);
    s1 = toForSeq(r177);
    l40 = length(s1);
    i129 = 0;
    goto L64(i129);
  D35():
    deopt 143 [i2, r99];
  D36():
    deopt 144 [i9, r101, i12];
  L39(i17, dx7):
    st fnames = dx7;
    sym22 = ldf `is.list`;
    base22 = ldf `is.list` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L171() else L172();
  L64(i130):
    i131 = `+`.1(i130, 1);
    c45 = `<`.1(l40, i131);
    if c45 then L260() else L65();
  L162():
    goto L37(i2, r99);
  L165():
    dx = getTryDispatchBuiltinValue(dr);
    goto L38(i7, dx);
  L166():
    i13 = force? i12;
    __ = ldf `[` in base;
    r102 = dyn __(r101, i13);
    goto L38(i9, r102);
  L167():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L169() else L168(i11, dx1, dr2);
  L168(i15, dx3, l4):
    i18 = ld i;
    check L170() else D37();
  D37():
    deopt 148 [i15, dx3, l4, dx1, i18];
  L40(i22, r105):
    c23 = `as.logical`(r105);
    if c23 then L179() else L42();
  L65():
    x1 = `[[`(s1, i131, NULL, TRUE);
    st i = x1;
    expand_one = ldf `expand.one`;
    check L261() else D70();
  L169():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L39(i11, dx5);
  L170():
    i19 = force? i18;
    ____ = ldf `[[<-` in base;
    r103 = dyn ____(l4, dx1, i19);
    goto L39(i15, r103);
  L171():
    FUN19 = ld FUN;
    check L173() else D38();
  L172():
    r104 = dyn base22(<lang `[[`(FUN, i)>);
    goto L40(i17, r104);
  L260():
    sym25 = ldf inherits;
    base25 = ldf inherits in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L263() else L264();
  D38():
    deopt 154 [i17, FUN19];
  D70():
    deopt 277 [i131];
  L42():
    fnames16 = ld fnames;
    check L245() else D63();
  L59(i112):
    goto L36(i112);
  L66(r187):
    c49 = `as.logical`(r187);
    if c49 then L267() else L67();
  L173():
    FUN20 = force? FUN19;
    checkMissing(FUN20);
    c22 = `is.object`(FUN20);
    if c22 then L174() else L175(i17, FUN20);
  L179():
    fnames = ld fnames;
    check L180() else D41();
  L261():
    p16 = prom<V +>{
      new_A = ld `new.A`;
      new_A1 = force? new_A;
      checkMissing(new_A1);
      return new_A1;
    };
    p17 = prom<V +>{
      margin11 = ld margin;
      margin12 = force? margin11;
      checkMissing(margin12);
      c46 = `is.object`(margin12);
      if c46 then L1() else L2(margin12);
    L0(dx71):
      return dx71;
    L1():
      dr44 = tryDispatchBuiltin.1("[", margin12);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(margin14):
      i134 = ld i;
      i135 = force? i134;
      __14 = ldf `[` in base;
      r179 = dyn __14(margin14, i135);
      goto L0(r179);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx70);
    };
    p18 = prom<V +>{
      FUN27 = ld FUN;
      FUN28 = force? FUN27;
      checkMissing(FUN28);
      c47 = `is.object`(FUN28);
      if c47 then L1() else L2(FUN28);
    L0(dx73):
      return dx73;
    L1():
      dr46 = tryDispatchBuiltin.1("[[", FUN28);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(FUN30):
      i136 = ld i;
      i137 = force? i136;
      __15 = ldf `[[` in base;
      r181 = dyn __15(FUN30, i137);
      goto L0(r181);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx72);
    };
    p19 = prom<V +>{
      fnames20 = ld fnames;
      fnames21 = force? fnames20;
      checkMissing(fnames21);
      c48 = `is.object`(fnames21);
      if c48 then L1() else L2(fnames21);
    L0(dx75):
      return dx75;
    L1():
      dr48 = tryDispatchBuiltin.1("[[", fnames21);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(fnames23):
      i138 = ld i;
      i139 = force? i138;
      __16 = ldf `[[` in base;
      r183 = dyn __16(fnames23, i139);
      goto L0(r183);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx74);
    };
    r185 = dyn expand_one[A, margin, FUN, fnames](p16, p17, p18, p19);
    check L262() else D71();
  L263():
    A7 = ld A;
    check L265() else D72();
  L264():
    r186 = dyn base25(<sym A>, "table");
    goto L66(r186);
  D41():
    deopt 161 [i22, fnames];
  D63():
    deopt 244 [i22, fnames16];
  D71():
    deopt 286 [i131, r185];
  D72():
    deopt 293 [A7];
  L41(i26, dx9):
    is_list1 = ldf `is.list` in base;
    r107 = dyn is_list1(dx9);
    check L178() else D40();
  L67():
    goto L70();
  L70():
    quiet1 = ld quiet;
    check L278() else D79();
  L174():
    dr4 = tryDispatchBuiltin.1("[[", FUN20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L176() else L175(i17, dr4);
  L175(i24, FUN22):
    i27 = ld i;
    check L177() else D39();
  L180():
    fnames1 = force? fnames;
    checkMissing(fnames1);
    c24 = `is.object`(fnames1);
    if c24 then L181() else L182(i22, fnames1);
  L245():
    fnames17 = force? fnames16;
    checkMissing(fnames17);
    c41 = `is.object`(fnames17);
    if c41 then L246() else L247(i22, fnames17);
  L262():
    st `new.A` = r185;
    goto L64(i131);
  L265():
    A8 = force? A7;
    checkMissing(A8);
    inherits = ldf inherits in base;
    r188 = dyn inherits(A8, "table", FALSE);
    check L266() else D73();
  L267():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L268() else L269();
  D39():
    deopt 156 [i24, FUN22, i27];
  D40():
    deopt 160 [i26, r107];
  D73():
    deopt 298 [r188];
  D79():
    deopt 317 [quiet1];
  L43(i34, dx11):
    st topname = dx11;
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L185() else L186();
  L60(i116, dx65):
    r167 = `==`(dx65, "");
    c42 = `as.logical`(r167);
    if c42 then L250() else L61();
  L68(r190):
    l41 = ld `new.A`;
    class__ = ldf `class<-`;
    check L275() else D77();
  L176():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L41(i17, dx8);
  L177():
    i28 = force? i27;
    __1 = ldf `[[` in base;
    r106 = dyn __1(FUN22, i28);
    goto L41(i24, r106);
  L178():
    goto L40(i26, r107);
  L181():
    dr6 = tryDispatchBuiltin.1("[[", fnames1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L183() else L182(i22, dr6);
  L182(i32, fnames3):
    i35 = ld i;
    check L184() else D42();
  L246():
    dr38 = tryDispatchBuiltin.1("[[", fnames17);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L248() else L247(i22, dr38);
  L247(i114, fnames19):
    i117 = ld i;
    check L249() else D64();
  L266():
    goto L66(r188);
  L268():
    sym27 = ldf class;
    base27 = ldf class in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L270() else L271();
  L269():
    r189 = dyn base26("table", <lang class(new.A)>);
    goto L68(r189);
  L278():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r197 = `!`(quiet2);
    c51 = `as.logical`(r197);
    if c51 then L279() else L71(c51);
  D42():
    deopt 163 [i32, fnames3, i35];
  D64():
    deopt 246 [i114, fnames19, i117];
  D77():
    deopt 311 [r190, l41, r190];
  L44(i39, r110):
    l5 = ld fnames;
    c26 = `is.object`(l5);
    if c26 then L193() else L194(i39, r110, l5);
  L61():
    goto L59(i116);
  L69(r192):
    c50 = ldf c in base;
    r194 = dyn c50("table", r192);
    check L274() else D76();
  L71(c53):
    c57 = `as.logical`(c53);
    if c57 then L282() else L72(c57);
  L183():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L43(i22, dx10);
  L184():
    i36 = force? i35;
    __2 = ldf `[[` in base;
    r108 = dyn __2(fnames3, i36);
    goto L43(i32, r108);
  L185():
    FUN23 = ld FUN;
    check L187() else D43();
  L186():
    r109 = dyn base23(<lang `[[`(FUN, i)>);
    goto L44(i34, r109);
  L248():
    dx64 = getTryDispatchBuiltinValue(dr38);
    goto L60(i22, dx64);
  L249():
    i118 = force? i117;
    __12 = ldf `[[` in base;
    r166 = dyn __12(fnames19, i118);
    goto L60(i114, r166);
  L250():
    paste2 = ldf paste;
    check L251() else D65();
  L270():
    new_A2 = ld `new.A`;
    check L272() else D74();
  L271():
    r191 = dyn base27(<sym new.A>);
    goto L69(r191);
  L275():
    r195 = dyn class__(l41, NULL, r190);
    check L276() else D78();
  L279():
    miss_FUN4 = ld `miss.FUN`;
    check L280() else D80();
  D43():
    deopt 169 [i34, FUN23];
  D65():
    deopt 252 [i116];
  D74():
    deopt 304 [new_A2];
  D76():
    deopt 309 [r194];
  D78():
    deopt 313 [r190, r195];
  D80():
    deopt 320 [c51, miss_FUN4];
  L46(i49, dx15):
    st fnames = dx15;
    fnames4 = ld fnames;
    check L197() else D47();
  L72(c59):
    c63 = `as.logical`(c59);
    if c63 then L285() else L73();
  L187():
    FUN24 = force? FUN23;
    checkMissing(FUN24);
    c25 = `is.object`(FUN24);
    if c25 then L188() else L189(i34, FUN24);
  L193():
    dr10 = tryDispatchBuiltin.0("[[<-", l5, r110);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L195() else L194(i39, r110, dr10);
  L194(i47, r114, l7):
    i50 = ld i;
    check L196() else D46();
  L251():
    p15 = prom<V +>{
      margin7 = ld margin;
      margin8 = force? margin7;
      checkMissing(margin8);
      c43 = `is.object`(margin8);
      if c43 then L1() else L2(margin8);
    L0(dx67):
      return dx67;
    L1():
      dr40 = tryDispatchBuiltin.1("[", margin8);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(margin10):
      i121 = ld i;
      i122 = force? i121;
      __13 = ldf `[` in base;
      r168 = dyn __13(margin10, i122);
      goto L0(r168);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx66);
    };
    r170 = dyn paste2("Margin", p15);
    check L252() else D66();
  L272():
    new_A3 = force? new_A2;
    checkMissing(new_A3);
    class = ldf class in base;
    r193 = dyn class(new_A3);
    check L273() else D75();
  L274():
    goto L68(r194);
  L276():
    st `new.A` = r195;
    goto L70();
  L280():
    miss_FUN5 = force? miss_FUN4;
    checkMissing(miss_FUN5);
    r198 = `!`(miss_FUN5);
    c54 = `as.logical`(r198);
    c55 = `&&`(c51, c54);
    goto L71(c55);
  L282():
    n_sid8 = ld `n.sid`;
    check L283() else D81();
  D46():
    deopt 177 [i47, r114, l7, r110, i50];
  D47():
    deopt 181 [i49, fnames4];
  D66():
    deopt 255 [i116, r170];
  D75():
    deopt 307 [r193];
  D81():
    deopt 324 [c57, n_sid8];
  L45(i43, dx13):
    names2 = ldf names in base;
    r112 = dyn names2(dx13);
    check L192() else D45();
  L73():
    goto L77();
  L77():
    new_A4 = ld `new.A`;
    check L295() else D87();
  L188():
    dr8 = tryDispatchBuiltin.1("[[", FUN24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L190() else L189(i34, dr8);
  L189(i41, FUN26):
    i44 = ld i;
    check L191() else D44();
  L195():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L46(i39, dx14);
  L196():
    i51 = force? i50;
    ____1 = ldf `[[<-` in base;
    r117 = dyn ____1(l7, r110, i51);
    goto L46(i47, r117);
  L197():
    fnames5 = force? fnames4;
    checkMissing(fnames5);
    c27 = `is.object`(fnames5);
    if c27 then L198() else L199(i49, fnames5);
  L252():
    l37 = ld fnames;
    c44 = `is.object`(l37);
    if c44 then L253() else L254(i116, r170, l37);
  L273():
    goto L69(r193);
  L283():
    n_sid9 = force? n_sid8;
    checkMissing(n_sid9);
    r199 = `>`(n_sid9, 1.0);
    c60 = `as.logical`(r199);
    c61 = `&&`(c57, c60);
    goto L72(c61);
  L285():
    cat = ldf cat;
    check L286() else D82();
  D44():
    deopt 171 [i41, FUN26, i44];
  D45():
    deopt 175 [i43, r112];
  D82():
    deopt 330 [];
  D87():
    deopt 351 [new_A4];
  L47(i55, dx17):
    r119 = `==`(dx17, "");
    st blank = r119;
    sym24 = ldf seq_along;
    base24 = ldf seq_along in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L202() else L203();
  L62(i126, r174, dx69):
    st fnames = dx69;
    goto L59(i126);
  L190():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L45(i34, dx12);
  L191():
    i45 = force? i44;
    __3 = ldf `[[` in base;
    r111 = dyn __3(FUN26, i45);
    goto L45(i41, r111);
  L192():
    goto L44(i43, r112);
  L198():
    dr12 = tryDispatchBuiltin.1("[[", fnames5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L200() else L199(i49, dr12);
  L199(i53, fnames7):
    i56 = ld i;
    check L201() else D48();
  L253():
    dr42 = tryDispatchBuiltin.0("[[<-", l37, r170);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L255() else L254(i116, r170, dr42);
  L254(i124, r172, l39):
    i127 = ld i;
    check L256() else D67();
  L286():
    r200 = dyn cat("Margins computed over dimensions\nin the following order:\n");
    check L287() else D83();
  L295():
    new_A5 = force? new_A4;
    checkMissing(new_A5);
    popenv;
    return new_A5;
  D48():
    deopt 183 [i53, fnames7, i56];
  D67():
    deopt 257 [i124, r172, l39, r170, i127];
  D83():
    deopt 332 [r200];
  L48(i60, r121):
    c28 = `is.object`(r121);
    if c28 then L205() else L206(i60, r121);
  L200():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L47(i49, dx16);
  L201():
    i57 = force? i56;
    __4 = ldf `[[` in base;
    r118 = dyn __4(fnames7, i57);
    goto L47(i53, r118);
  L202():
    blank = ld blank;
    check L204() else D49();
  L203():
    r120 = dyn base24(<sym blank>);
    goto L48(i55, r120);
  L255():
    dx68 = getTryDispatchBuiltinValue(dr42);
    goto L62(i116, r170, dx68);
  L256():
    i128 = force? i127;
    ____5 = ldf `[[<-` in base;
    r175 = dyn ____5(l39, r170, i128);
    goto L62(i124, r172, r175);
  L287():
    sym28 = ldf seq_len;
    base28 = ldf seq_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L288() else L289();
  D49():
    deopt 190 [i55, blank];
  L49(i64, dx19):
    l8 = ld fnames;
    c29 = `is.object`(l8);
    if c29 then L209() else L210(i64, dx19, l8, dx19, l8);
  L74(r202):
    s2 = toForSeq(r202);
    l42 = length(s2);
    i140 = 0;
    goto L75(i140);
  L204():
    blank1 = force? blank;
    checkMissing(blank1);
    r122 = seq_along(blank1);
    goto L48(i55, r122);
  L205():
    dr14 = tryDispatchBuiltin.1("[", r121);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L207() else L206(i60, dr14);
  L206(i62, r124):
    blank2 = ld blank;
    check L208() else D50();
  L288():
    n_sid10 = ld `n.sid`;
    check L290() else D84();
  L289():
    r201 = dyn base28(<sym n.sid>);
    goto L74(r201);
  D50():
    deopt 193 [i62, r124, blank2];
  D84():
    deopt 334 [n_sid10];
  L50(i68, dx27, l14, dx28, dx29):
    c30 = `is.object`(dx29);
    if c30 then L213() else L214(i68, dx27, l14, dx29);
  L75(i141):
    i142 = `+`.1(i141, 1);
    c64 = `<`.1(l42, i142);
    if c64 then L291() else L76();
  L207():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L49(i60, dx18);
  L208():
    blank3 = force? blank2;
    __5 = ldf `[` in base;
    r125 = dyn __5(r124, blank3);
    goto L49(i62, r125);
  L209():
    dr16 = tryDispatchBuiltin.1("[[", l8);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L211() else L210(i64, dx19, l8, dx19, dr16);
  L210(i66, dx22, l11, dx23, l12):
    i69 = ld i;
    check L212() else D51();
  L290():
    n_sid11 = force? n_sid10;
    checkMissing(n_sid11);
    r203 = seq_len(n_sid11);
    goto L74(r203);
  D51():
    deopt 198 [i66, dx22, l11, dx23, l12, i69];
  L51(i74, dx36, l18, dx37):
    c31 = `is.object`(l18);
    if c31 then L217() else L218(i74, dx36, l18);
  L76():
    x2 = `[[`(s2, i142, NULL, TRUE);
    st i = x2;
    cat1 = ldf cat;
    check L292() else D85();
  L211():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L50(i64, dx19, l8, dx19, dx26);
  L212():
    i70 = force? i69;
    __6 = ldf `[[` in base;
    r126 = dyn __6(l12, i70);
    goto L50(i66, dx22, l11, dx23, r126);
  L213():
    dr18 = tryDispatchBuiltin.0("[<-", dx29, dx28);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L215() else L214(i68, dx27, l14, dr18);
  L214(i72, dx32, l16, dx33):
    blank4 = ld blank;
    check L216() else D52();
  L291():
    goto L77();
  D52():
    deopt 202 [i72, dx32, l16, dx33, dx28, blank4];
  D85():
    deopt 338 [i142];
  L52(i78, dx43):
    st fnames = dx43;
    topname = ld topname;
    check L221() else D54();
  L215():
    dx35 = getTryDispatchBuiltinValue(dr18);
    goto L51(i68, dx27, l14, dx35);
  L216():
    blank5 = force? blank4;
    ___ = ldf `[<-` in base;
    r127 = dyn ___(dx33, dx28, blank5);
    goto L51(i72, dx32, l16, r127);
  L217():
    dr20 = tryDispatchBuiltin.0("[[<-", l18, dx37);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L219() else L218(i74, dx36, dr20);
  L218(i76, dx39, l20):
    i79 = ld i;
    check L220() else D53();
  L292():
    p21 = prom<V +>{
      paste3 = ldf paste;
      p20 = prom<V +>{
        i145 = ld i;
        i146 = force? i145;
        checkMissing(i146);
        return i146;
      };
      r205 = dyn paste3(p20);
      return r205;
    };
    p22 = prom<V +>{
      sym29 = ldf names;
      base29 = ldf names in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L4() else L5();
    L0(r208):
      c65 = `is.object`(r208);
      if c65 then L8() else L9(r208);
    L4():
      sym30 = ldf dimnames;
      base30 = ldf dimnames in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L6() else L7();
    L5():
      r207 = dyn base29(<lang dimnames(A)>);
      goto L0(r207);
    L1(r210):
      names3 = ldf names in base;
      r212 = dyn names3(r210);
      goto L0(r212);
    L2(dx77):
      return dx77;
    L6():
      A9 = ld A;
      A10 = force? A9;
      checkMissing(A10);
      dimnames = ldf dimnames in base;
      r211 = dyn dimnames(A10);
      goto L1(r211);
    L7():
      r209 = dyn base30(<sym A>);
      goto L1(r209);
    L8():
      dr50 = tryDispatchBuiltin.1("[", r208);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L10() else L9(dr50);
    L9(r214):
      margin15 = ld margin;
      margin16 = force? margin15;
      checkMissing(margin16);
      c66 = `is.object`(margin16);
      if c66 then L11() else L12(r214, margin16);
    L3(r218, dx79):
      __18 = ldf `[` in base;
      r220 = dyn __18(r218, dx79);
      goto L2(r220);
    L10():
      dx76 = getTryDispatchBuiltinValue(dr50);
      goto L2(dx76);
    L11():
      dr52 = tryDispatchBuiltin.1("[", margin16);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L13() else L12(r214, dr52);
    L12(r216, margin18):
      i147 = ld i;
      i148 = force? i147;
      __17 = ldf `[` in base;
      r219 = dyn __17(margin18, i148);
      goto L3(r216, r219);
    L13():
      dx78 = getTryDispatchBuiltinValue(dr52);
      goto L3(r214, dx78);
    };
    r222 = dyn cat1[, , , , sep](p21, ": ", p22, "\n", "");
    check L293() else D86();
  D53():
    deopt 205 [i76, dx39, l20, dx37, i79];
  D54():
    deopt 209 [i78, topname];
  D86():
    deopt 345 [i142, r222];
  L219():
    dx41 = getTryDispatchBuiltinValue(dr20);
    goto L52(i74, dx41);
  L220():
    i80 = force? i79;
    ____2 = ldf `[[<-` in base;
    r128 = dyn ____2(l20, dx37, i80);
    goto L52(i76, r128);
  L221():
    topname1 = force? topname;
    checkMissing(topname1);
    r129 = `==`(topname1, "");
    c32 = `as.logical`(r129);
    if c32 then L222() else L53();
  L293():
    goto L75(i142);
  L53():
    paste1 = ldf paste0;
    check L238() else D60();
  L57(i103, r155):
    goto L59(i103);
  L222():
    paste0 = ldf paste0;
    check L223() else D55();
  D55():
    deopt 214 [i78];
  D60():
    deopt 234 [i78];
  L223():
    p11 = prom<V +>{
      margin3 = ld margin;
      margin4 = force? margin3;
      checkMissing(margin4);
      c33 = `is.object`(margin4);
      if c33 then L1() else L2(margin4);
    L0(dx45):
      return dx45;
    L1():
      dr22 = tryDispatchBuiltin.1("[", margin4);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(margin6):
      i83 = ld i;
      i84 = force? i83;
      __7 = ldf `[` in base;
      r130 = dyn __7(margin6, i84);
      goto L0(r130);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx44);
    };
    p12 = prom<V +>{
      fnames8 = ld fnames;
      fnames9 = force? fnames8;
      checkMissing(fnames9);
      c34 = `is.object`(fnames9);
      if c34 then L2() else L3(fnames9);
    L0(dx47):
      c35 = `is.object`(dx47);
      if c35 then L5() else L6(dx47);
    L2():
      dr24 = tryDispatchBuiltin.1("[[", fnames9);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(dr24);
    L3(fnames11):
      i85 = ld i;
      i86 = force? i85;
      __8 = ldf `[[` in base;
      r132 = dyn __8(fnames11, i86);
      goto L0(r132);
    L1(dx51):
      return dx51;
    L4():
      dx46 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx46);
    L5():
      dr26 = tryDispatchBuiltin.1("[", dx47);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L7() else L6(dr26);
    L6(dx49):
      blank6 = ld blank;
      blank7 = force? blank6;
      __9 = ldf `[` in base;
      r133 = dyn __9(dx49, blank7);
      goto L1(r133);
    L7():
      dx50 = getTryDispatchBuiltinValue(dr26);
      goto L1(dx50);
    };
    r135 = dyn paste0("Margin ", p11, ".", p12);
    check L224() else D56();
  L238():
    p13 = prom<V +>{
      topname2 = ld topname;
      topname3 = force? topname2;
      checkMissing(topname3);
      return topname3;
    };
    p14 = prom<V +>{
      fnames12 = ld fnames;
      fnames13 = force? fnames12;
      checkMissing(fnames13);
      c39 = `is.object`(fnames13);
      if c39 then L1() else L2(fnames13);
    L0(dx61):
      return dx61;
    L1():
      dr34 = tryDispatchBuiltin.1("[[", fnames13);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(fnames15):
      i104 = ld i;
      i105 = force? i104;
      __11 = ldf `[[` in base;
      r157 = dyn __11(fnames15, i105);
      goto L0(r157);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx60);
    };
    r159 = dyn paste1(p13, ".", p14);
    check L239() else D61();
  D56():
    deopt 219 [i78, r135];
  D61():
    deopt 238 [i78, r159];
  L224():
    l21 = ld fnames;
    c36 = `is.object`(l21);
    if c36 then L225() else L226(i78, r135, l21, r135, l21);
  L239():
    l34 = ld fnames;
    c40 = `is.object`(l34);
    if c40 then L240() else L241(i78, r159, l34);
  L54(i90, r142, l27, r143, dx53):
    c37 = `is.object`(dx53);
    if c37 then L229() else L230(i90, r142, l27, dx53);
  L58(i109, r163, dx63):
    st fnames = dx63;
    goto L57(i109, r163);
  L225():
    dr28 = tryDispatchBuiltin.1("[[", l21);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L227() else L226(i78, r135, l21, r135, dr28);
  L226(i88, r138, l24, r139, l25):
    i91 = ld i;
    check L228() else D57();
  L240():
    dr36 = tryDispatchBuiltin.0("[[<-", l34, r159);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L242() else L241(i78, r159, dr36);
  L241(i107, r161, l36):
    i110 = ld i;
    check L243() else D62();
  D57():
    deopt 222 [i88, r138, l24, r139, l25, i91];
  D62():
    deopt 240 [i107, r161, l36, r159, i110];
  L55(i96, r148, l31, dx57):
    c38 = `is.object`(l31);
    if c38 then L233() else L234(i96, r148, l31);
  L227():
    dx52 = getTryDispatchBuiltinValue(dr28);
    goto L54(i78, r135, l21, r135, dx52);
  L228():
    i92 = force? i91;
    __10 = ldf `[[` in base;
    r144 = dyn __10(l25, i92);
    goto L54(i88, r138, l24, r139, r144);
  L229():
    dr30 = tryDispatchBuiltin.0("[<-", dx53, r143);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L231() else L230(i90, r142, l27, dr30);
  L230(i94, r146, l29, dx55):
    blank8 = ld blank;
    check L232() else D58();
  L242():
    dx62 = getTryDispatchBuiltinValue(dr36);
    goto L58(i78, r159, dx62);
  L243():
    i111 = force? i110;
    ____4 = ldf `[[<-` in base;
    r164 = dyn ____4(l36, r159, i111);
    goto L58(i107, r161, r164);
  D58():
    deopt 226 [i94, r146, l29, dx55, r143, blank8];
  L56(i100, r153, dx59):
    st fnames = dx59;
    goto L57(i100, r153);
  L231():
    dx56 = getTryDispatchBuiltinValue(dr30);
    goto L55(i90, r142, l27, dx56);
  L232():
    blank9 = force? blank8;
    ___1 = ldf `[<-` in base;
    r149 = dyn ___1(dx55, r143, blank9);
    goto L55(i94, r146, l29, r149);
  L233():
    dr32 = tryDispatchBuiltin.0("[[<-", l31, dx57);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L235() else L234(i96, r148, dr32);
  L234(i98, r151, l33):
    i101 = ld i;
    check L236() else D59();
  D59():
    deopt 229 [i98, r151, l33, dx57, i101];
  L235():
    dx58 = getTryDispatchBuiltinValue(dr32);
    goto L56(i96, r148, dx58);
  L236():
    i102 = force? i101;
    ____3 = ldf `[[<-` in base;
    r154 = dyn ____3(l33, dx57, i102);
    goto L56(i98, r151, r154);
  }
}
fun inner2989980747(thelist) {
  (reg thelist:*) -+> V { var thelist:*, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg thelist1:*, reg thelist2:V, reg names:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg rep:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg thelist3:*, reg thelist4:V, reg r11:I, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg i7:I, reg r16:V, reg thelist5:*, reg thelist6:V, reg c2:L, reg i9:I, reg thelist8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg i12:*, reg i13:V, reg __1:cls, reg r17:V, reg is_call:cls, reg r18:V, reg r19:V, reg c3:L, reg n:*, reg n1:V, reg c4:L, reg i17:I, reg n3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i19:I, reg dx5:V, reg i20:*, reg i21:V, reg __2:cls, reg r20:V, reg r21:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg i26:I, reg r23:V, reg thelist9:*, reg thelist10:V, reg c6:L, reg i28:I, reg thelist12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i30:I, reg dx7:V, reg i31:*, reg i32:V, reg __3:cls, reg r24:V, reg as_character:cls, reg r25:V, reg l1:*, reg c7:L, reg i34:I, reg r27:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i36:I, reg r29:V, reg dx9:V, reg i37:*, reg i38:V, reg ___:cls, reg r30:V, reg i39:I, reg r31:V, reg i40:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg i43:I, reg r34:V, reg thelist13:*, reg thelist14:V, reg c8:L, reg i45:I, reg thelist16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i47:I, reg dx11:V, reg i48:*, reg i49:V, reg __4:cls, reg r35:V, reg c9:L, reg i51:I, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i53:I, reg dx15:V, reg __5:cls, reg r36:V, reg as_character1:cls, reg r37:V, reg r38:V, reg c10:L, reg add_names:cls, reg thelist17:*, reg thelist18:V, reg c11:L, reg thelist20:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg i56:*, reg i57:V, reg __6:cls, reg r39:V, reg p2:p(V +), reg r41:V, reg l4:*, reg c12:L, reg i59:I, reg r43:V, reg l6:*, reg dr16:V, reg dc8:L, reg dx18:V, reg i61:I, reg r45:V, reg dx19:V, reg i62:*, reg i63:V, reg ____1:cls, reg r46:V, reg n4:*, reg n5:V, reg l7:*, reg names__:cls, reg r47:V, reg thelist21:*, reg thelist22:V |
    mkenv;
    st thelist = thelist;
    ____ = ldf `%||%`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      thelist1 = ld thelist;
      thelist2 = force? thelist1;
      checkMissing(thelist2);
      names = ldf names in base;
      r2 = dyn names(thelist2);
      goto L0(r2);
    L2():
      r = dyn base(<sym thelist>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      rep = ldf rep in base;
      r6 = dyn rep("", <lang length(thelist)>);
      goto L0(r6);
    L2():
      r4 = dyn base1("", <lang length(thelist)>);
      goto L0(r4);
    };
    r8 = dyn ____(p, p1);
    check L20() else D1();
  D1():
    deopt 4 [r8];
  L20():
    st n = r8;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L0(r10):
    c = `is.object`(r10);
    if c then L24() else L25(r10);
  L21():
    thelist3 = ld thelist;
    check L23() else D2();
  L22():
    r9 = dyn base2(<sym thelist>);
    goto L0(r9);
  D2():
    deopt 7 [thelist3];
  L1(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L2(i);
  L23():
    thelist4 = force? thelist3;
    checkMissing(thelist4);
    r11 = seq_along(thelist4);
    goto L0(r11);
  L24():
    dr = tryDispatchBuiltin.1("[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(r13):
    __ = ldf `[` in base;
    r14 = dyn __(r13, -1);
    goto L1(r14);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L27() else L18();
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym3 = ldf `is.call`;
    base3 = ldf `is.call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    n4 = ld n;
    check L76() else D18();
  D18():
    deopt 74 [n4];
  L3(i7, r16):
    r19 = `!`(r16);
    c3 = `as.logical`(r19);
    if c3 then L36() else L5();
  L28():
    thelist5 = ld thelist;
    check L30() else D3();
  L29():
    r15 = dyn base3(<lang `[[`(thelist, i)>);
    goto L3(i2, r15);
  L76():
    n5 = force? n4;
    checkMissing(n5);
    l7 = ld thelist;
    names__ = ldf `names<-`;
    check L77() else D19();
  D3():
    deopt 15 [i2, thelist5];
  D19():
    deopt 77 [n5, l7, n5];
  L5():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L12(i40):
    goto L2(i40);
  L30():
    thelist6 = force? thelist5;
    checkMissing(thelist6);
    c2 = `is.object`(thelist6);
    if c2 then L31() else L32(i2, thelist6);
  L36():
    n = ld n;
    check L37() else D6();
  L77():
    r47 = dyn names__(l7, NULL, n5);
    check L78() else D20();
  D6():
    deopt 23 [i7, n];
  D20():
    deopt 79 [n5, r47];
  L4(i11, dx3):
    is_call = ldf `is.call` in base;
    r18 = dyn is_call(dx3);
    check L35() else D5();
  L13(i43, r34):
    r38 = `==`(r34, "list");
    c10 = `as.logical`(r38);
    if c10 then L68() else L16();
  L31():
    dr2 = tryDispatchBuiltin.1("[[", thelist6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(i2, dr2);
  L32(i9, thelist8):
    i12 = ld i;
    check L34() else D4();
  L37():
    n1 = force? n;
    checkMissing(n1);
    c4 = `is.object`(n1);
    if c4 then L38() else L39(i7, n1);
  L57():
    thelist13 = ld thelist;
    check L59() else D12();
  L58():
    r33 = dyn base5(<lang `[[`(`[[`(thelist, i), 1)>);
    goto L13(i7, r33);
  L78():
    st thelist = r47;
    thelist21 = ld thelist;
    check L79() else D21();
  D4():
    deopt 17 [i9, thelist8, i12];
  D5():
    deopt 21 [i11, r18];
  D12():
    deopt 48 [i7, thelist13];
  D21():
    deopt 81 [thelist21];
  L6(i19, dx5):
    r21 = `==`(dx5, "");
    c5 = `as.logical`(r21);
    if c5 then L42() else L7();
  L16():
    goto L12(i43);
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i2, dx2);
  L34():
    i13 = force? i12;
    __1 = ldf `[[` in base;
    r17 = dyn __1(thelist8, i13);
    goto L4(i9, r17);
  L35():
    goto L3(i11, r18);
  L38():
    dr4 = tryDispatchBuiltin.1("[", n1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(i7, dr4);
  L39(i17, n3):
    i20 = ld i;
    check L41() else D7();
  L59():
    thelist14 = force? thelist13;
    checkMissing(thelist14);
    c8 = `is.object`(thelist14);
    if c8 then L60() else L61(i7, thelist14);
  L68():
    add_names = ldf `add.names`;
    check L69() else D15();
  L79():
    thelist22 = force? thelist21;
    checkMissing(thelist22);
    popenv;
    return thelist22;
  D7():
    deopt 25 [i17, n3, i20];
  D15():
    deopt 61 [i43];
  L7():
    goto L11(i19, NULL);
  L11(i39, r31):
    goto L12(i39);
  L14(i47, dx11):
    c9 = `is.object`(dx11);
    if c9 then L64() else L65(i47, dx11);
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(i7, dx4);
  L41():
    i21 = force? i20;
    __2 = ldf `[` in base;
    r20 = dyn __2(n3, i21);
    goto L6(i17, r20);
  L42():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L60():
    dr10 = tryDispatchBuiltin.1("[[", thelist14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(i7, dr10);
  L61(i45, thelist16):
    i48 = ld i;
    check L63() else D13();
  L69():
    p2 = prom<V +>{
      thelist17 = ld thelist;
      thelist18 = force? thelist17;
      checkMissing(thelist18);
      c11 = `is.object`(thelist18);
      if c11 then L1() else L2(thelist18);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", thelist18);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(thelist20):
      i56 = ld i;
      i57 = force? i56;
      __6 = ldf `[[` in base;
      r39 = dyn __6(thelist20, i57);
      goto L0(r39);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r41 = dyn add_names(p2);
    check L70() else D16();
  D13():
    deopt 50 [i45, thelist16, i48];
  D16():
    deopt 63 [i43, r41];
  L8(i26, r23):
    l1 = ld n;
    c7 = `is.object`(l1);
    if c7 then L51() else L52(i26, r23, l1);
  L15(i53, dx15):
    as_character1 = ldf `as.character` in base;
    r37 = dyn as_character1(dx15);
    check L67() else D14();
  L43():
    thelist9 = ld thelist;
    check L45() else D8();
  L44():
    r22 = dyn base4(<lang `[[`(thelist, i)>);
    goto L8(i19, r22);
  L62():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(i7, dx10);
  L63():
    i49 = force? i48;
    __4 = ldf `[[` in base;
    r35 = dyn __4(thelist16, i49);
    goto L14(i45, r35);
  L64():
    dr12 = tryDispatchBuiltin.1("[[", dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L66() else L65(i47, dr12);
  L65(i51, dx13):
    __5 = ldf `[[` in base;
    r36 = dyn __5(dx13, 1);
    goto L15(i51, r36);
  L70():
    l4 = ld thelist;
    c12 = `is.object`(l4);
    if c12 then L71() else L72(i43, r41, l4);
  D8():
    deopt 32 [i19, thelist9];
  D14():
    deopt 57 [i53, r37];
  L10(i36, r29, dx9):
    st n = dx9;
    goto L11(i36, r29);
  L17(i61, r45, dx19):
    st thelist = dx19;
    goto L12(i61);
  L45():
    thelist10 = force? thelist9;
    checkMissing(thelist10);
    c6 = `is.object`(thelist10);
    if c6 then L46() else L47(i19, thelist10);
  L51():
    dr8 = tryDispatchBuiltin.0("[<-", l1, r23);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(i26, r23, dr8);
  L52(i34, r27, l3):
    i37 = ld i;
    check L54() else D11();
  L66():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L15(i47, dx14);
  L67():
    goto L13(i53, r37);
  L71():
    dr16 = tryDispatchBuiltin.0("[[<-", l4, r41);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L73() else L72(i43, r41, dr16);
  L72(i59, r43, l6):
    i62 = ld i;
    check L74() else D17();
  D11():
    deopt 40 [i34, r27, l3, r23, i37];
  D17():
    deopt 65 [i59, r43, l6, r41, i62];
  L9(i30, dx7):
    as_character = ldf `as.character` in base;
    r25 = dyn as_character(dx7);
    check L50() else D10();
  L46():
    dr6 = tryDispatchBuiltin.1("[[", thelist10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(i19, dr6);
  L47(i28, thelist12):
    i31 = ld i;
    check L49() else D9();
  L53():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(i26, r23, dx8);
  L54():
    i38 = force? i37;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l3, r23, i38);
    goto L10(i34, r27, r30);
  L73():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L17(i43, r41, dx18);
  L74():
    i63 = force? i62;
    ____1 = ldf `[[<-` in base;
    r46 = dyn ____1(l6, r41, i63);
    goto L17(i59, r43, r46);
  D9():
    deopt 34 [i28, thelist12, i31];
  D10():
    deopt 38 [i30, r25];
  L48():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(i19, dx6);
  L49():
    i32 = force? i31;
    __3 = ldf `[[` in base;
    r24 = dyn __3(thelist12, i32);
    goto L9(i28, r24);
  L50():
    goto L8(i30, r25);
  }
}
fun inner4039720478(A, margin, FUN, fnames) {
  (reg A:*, reg margin:*, reg FUN:*, reg fnames:*) -+> V { var A:*, var margin:*, var FUN:*, var fnames:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg FUN1:*, reg FUN2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg FUN3:*, reg FUN4:V, reg list:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg A1:*, reg A2:V, reg dim:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg d:*, reg d1:V, reg length:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg FUN5:*, reg FUN6:V, reg length1:cls, reg r16:V, reg d2:*, reg d3:V, reg newdim:*, reg newdim1:V, reg c1:L, reg newdim3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg margin1:*, reg margin2:V, reg __:cls, reg r17:V, reg n_mar:*, reg n_mar1:V, reg r18:V, reg l:*, reg c2:L, reg r20:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg margin3:*, reg margin4:V, reg ___:cls, reg r23:V, reg ____:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg A3:*, reg A4:V, reg dimnames:cls, reg r26:V, reg p:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg n_dim:*, reg n_dim1:V, reg vector:cls, reg r30:V, reg p1:p(V +), reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg ____1:cls, reg dnA:*, reg dnA1:V, reg c3:L, reg dnA3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg margin5:*, reg margin6:V, reg __1:cls, reg r35:V, reg p2:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg rep:cls, reg r39:V, reg p3:p(V +), reg r41:V, reg fnames1:*, reg fnames2:V, reg c4:cls, reg r42:V, reg l3:*, reg c5:L, reg r44:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg margin7:*, reg margin8:V, reg ____2:cls, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg newdim4:*, reg newdim5:V, reg prod:cls, reg r50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg r52:V, reg d4:*, reg d5:V, reg c6:L, reg d7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg margin9:*, reg margin10:V, reg r53:V, reg __2:cls, reg r54:V, reg prod1:cls, reg r55:V, reg skip:*, reg skip1:V, reg d8:*, reg d9:V, reg c7:L, reg skip3:V, reg d11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg skip5:V, reg dx11:V, reg margin11:*, reg margin12:V, reg __3:cls, reg r56:V, reg r57:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg rep1:cls, reg r60:V, reg double:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg apos:*, reg apos1:V, reg length2:cls, reg r63:V, reg p4:p(V +), reg r65:V, reg as_vector:cls, reg A5:*, reg A6:V, reg p5:p(V +), reg r67:V, reg l6:*, reg c8:L, reg r69:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg apos2:*, reg apos3:V, reg ___1:cls, reg r72:V, reg n_mar2:*, reg n_mar3:V, reg r73:V, reg s:V, reg l9:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg n_dim2:*, reg n_dim3:V, reg r74:V, reg c10:L, reg apply:cls, reg A7:*, reg A8:V, reg p6:p(V +), reg n_dim4:*, reg n_dim5:V, reg r76:V, reg c11:L, reg r78:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg margin13:*, reg margin14:V, reg r79:V, reg __4:cls, reg r80:V, reg p7:p(V +), reg FUN7:*, reg FUN8:V, reg c12:L, reg FUN10:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg __5:cls, reg r82:V, reg p8:p(V +), reg r84:V, reg i9:I, reg r85:V, reg FUN11:*, reg FUN12:V, reg c13:L, reg i11:I, reg FUN14:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i13:I, reg dx19:V, reg i14:*, reg i15:V, reg __6:cls, reg r86:V, reg dx20:cls, reg A9:*, reg A10:V, reg p9:p(V +), reg r88:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r89:V, reg i18:I, reg r90:V, reg n_mar4:*, reg n_mar5:V, reg rep_len:cls, reg r91:V, reg l10:*, reg c14:L, reg i20:I, reg r93:L, reg l12:*, reg dr20:V, reg dc10:L, reg dx21:V, reg i22:I, reg dx22:V, reg i23:*, reg i24:V, reg ___2:cls, reg r96:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r97:V, reg i27:I, reg r98:V, reg rep2:cls, reg r99:V, reg as_vector1:cls, reg mtab:*, reg mtab1:V, reg p10:p(V +), reg r101:V, reg l13:*, reg c15:L, reg i29:I, reg r103:V, reg l15:*, reg dr22:V, reg dc11:L, reg dx23:V, reg i31:I, reg dx24:V, reg mpos:*, reg mpos1:V, reg ___3:cls, reg r106:V, reg array:cls, reg values:*, reg values1:V, reg p11:p(V +), reg newdim6:*, reg newdim7:V, reg p12:p(V +), reg dnA4:*, reg dnA5:V, reg p13:p(V +), reg r110:V |
    mkenv;
    st A = A;
    st margin = margin;
    st FUN = FUN;
    st fnames = fnames;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L30() else L1();
  L26():
    FUN1 = ld FUN;
    check L28() else D0();
  L27():
    r = dyn base(<sym FUN>, "list");
    goto L0(r);
  D0():
    deopt 2 [FUN1];
  L1():
    goto L3();
  L3():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L28():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(FUN2, "list", FALSE);
    check L29() else D1();
  L30():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  D1():
    deopt 7 [r2];
  L2(r5):
    st FUN = r5;
    goto L3();
  L4(r9):
    st d = r9;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L29():
    goto L0(r2);
  L31():
    FUN3 = ld FUN;
    check L33() else D2();
  L32():
    r4 = dyn base1(<sym FUN>);
    goto L2(r4);
  L36():
    A1 = ld A;
    check L38() else D4();
  L37():
    r8 = dyn base2(<sym A>);
    goto L4(r8);
  D2():
    deopt 11 [FUN3];
  D4():
    deopt 20 [A1];
  L5(r12):
    st `n.dim` = r12;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L33():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    list = ldf list in base;
    r6 = dyn list(FUN4);
    check L34() else D3();
  L38():
    A2 = force? A1;
    checkMissing(A2);
    dim = ldf dim in base;
    r10 = dyn dim(A2);
    check L39() else D5();
  L40():
    d = ld d;
    check L42() else D6();
  L41():
    r11 = dyn base3(<sym d>);
    goto L5(r11);
  D3():
    deopt 14 [r6];
  D5():
    deopt 23 [r10];
  D6():
    deopt 27 [d];
  L6(r15):
    st `n.mar` = r15;
    d2 = ld d;
    check L48() else D10();
  L34():
    goto L2(r6);
  L39():
    goto L4(r10);
  L42():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r13 = dyn length(d1);
    check L43() else D7();
  L44():
    FUN5 = ld FUN;
    check L46() else D8();
  L45():
    r14 = dyn base4(<sym FUN>);
    goto L6(r14);
  D7():
    deopt 30 [r13];
  D8():
    deopt 34 [FUN5];
  D10():
    deopt 39 [d2];
  L43():
    goto L5(r13);
  L46():
    FUN6 = force? FUN5;
    checkMissing(FUN6);
    length1 = ldf length in base;
    r16 = dyn length1(FUN6);
    check L47() else D9();
  L48():
    d3 = force? d2;
    checkMissing(d3);
    st newdim = d3;
    newdim = ld newdim;
    check L49() else D11();
  D9():
    deopt 37 [r16];
  D11():
    deopt 42 [newdim];
  L47():
    goto L6(r16);
  L49():
    newdim1 = force? newdim;
    checkMissing(newdim1);
    c1 = `is.object`(newdim1);
    if c1 then L50() else L51(newdim1);
  L7(dx1):
    n_mar = ld `n.mar`;
    check L54() else D13();
  L50():
    dr = tryDispatchBuiltin.1("[", newdim1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(dr);
  L51(newdim3):
    margin1 = ld margin;
    check L53() else D12();
  D12():
    deopt 44 [newdim3, margin1];
  D13():
    deopt 46 [dx1, n_mar];
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L53():
    margin2 = force? margin1;
    __ = ldf `[` in base;
    r17 = dyn __(newdim3, margin2);
    goto L7(r17);
  L54():
    n_mar1 = force? n_mar;
    checkMissing(n_mar1);
    r18 = `+`(dx1, n_mar1);
    l = ld newdim;
    c2 = `is.object`(l);
    if c2 then L55() else L56(r18, l);
  L8(dx3):
    st newdim = dx3;
    ____ = ldf `%||%`;
    check L59() else D15();
  L55():
    dr2 = tryDispatchBuiltin.0("[<-", l, r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(r18, dr2);
  L56(r20, l2):
    margin3 = ld margin;
    check L58() else D14();
  D14():
    deopt 50 [r20, l2, r18, margin3];
  D15():
    deopt 55 [];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L58():
    margin4 = force? margin3;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, r18, margin4);
    goto L8(r23);
  L59():
    p = prom<V +>{
      sym5 = ldf dimnames;
      base5 = ldf dimnames in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      A3 = ld A;
      A4 = force? A3;
      checkMissing(A4);
      dimnames = ldf dimnames in base;
      r26 = dyn dimnames(A4);
      goto L0(r26);
    L2():
      r24 = dyn base5(<sym A>);
      goto L0(r24);
    };
    p1 = prom<V +>{
      sym6 = ldf vector;
      base6 = ldf vector in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      n_dim = ld `n.dim`;
      n_dim1 = force? n_dim;
      checkMissing(n_dim1);
      vector = ldf vector in base;
      r30 = dyn vector("list", n_dim1);
      goto L0(r30);
    L2():
      r28 = dyn base6("list", <sym n.dim>);
      goto L0(r28);
    };
    r32 = dyn ____(p, p1);
    check L60() else D16();
  D16():
    deopt 58 [r32];
  L60():
    st dnA = r32;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L9(r34):
    l3 = ld dnA;
    c5 = `is.object`(l3);
    if c5 then L67() else L68(r34, l3);
  L61():
    ____1 = ldf `%||%`;
    check L63() else D17();
  L62():
    r33 = dyn base7(<lang `%||%`(`[[`(dnA, margin), rep("", `[[`(d, margin)))>, <sym fnames>);
    goto L9(r33);
  D17():
    deopt 63 [];
  L10(dx7):
    st dnA = dx7;
    sym9 = ldf prod;
    base9 = ldf prod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L71() else L72();
  L63():
    p2 = prom<V +>{
      dnA = ld dnA;
      dnA1 = force? dnA;
      checkMissing(dnA1);
      c3 = `is.object`(dnA1);
      if c3 then L1() else L2(dnA1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", dnA1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dnA3):
      margin5 = ld margin;
      margin6 = force? margin5;
      __1 = ldf `[[` in base;
      r35 = dyn __1(dnA3, margin6);
      goto L0(r35);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      sym8 = ldf rep;
      base8 = ldf rep in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      rep = ldf rep in base;
      r39 = dyn rep("", <lang `[[`(d, margin)>);
      goto L0(r39);
    L2():
      r37 = dyn base8("", <lang `[[`(d, margin)>);
      goto L0(r37);
    };
    r41 = dyn ____1(p2, p3);
    check L64() else D18();
  L67():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L69() else L68(r34, dr6);
  L68(r44, l5):
    margin7 = ld margin;
    check L70() else D21();
  D18():
    deopt 66 [r41];
  D21():
    deopt 72 [r44, l5, r34, margin7];
  L11(r49):
    st `n.new` = r49;
    sym10 = ldf prod;
    base10 = ldf prod in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L75() else L76();
  L64():
    fnames1 = ld fnames;
    check L65() else D19();
  L69():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L70():
    margin8 = force? margin7;
    ____2 = ldf `[[<-` in base;
    r47 = dyn ____2(l5, r34, margin8);
    goto L10(r47);
  L71():
    newdim4 = ld newdim;
    check L73() else D22();
  L72():
    r48 = dyn base9(<sym newdim>);
    goto L11(r48);
  D19():
    deopt 67 [fnames1];
  D22():
    deopt 78 [newdim4];
  L12(r52):
    st skip = r52;
    skip = ld skip;
    check L83() else D27();
  L65():
    fnames2 = force? fnames1;
    checkMissing(fnames2);
    c4 = ldf c in base;
    r42 = dyn c4(r41, fnames2);
    check L66() else D20();
  L73():
    newdim5 = force? newdim4;
    checkMissing(newdim5);
    prod = ldf prod in base;
    r50 = dyn prod(newdim5);
    check L74() else D23();
  L75():
    d4 = ld d;
    check L77() else D24();
  L76():
    r51 = dyn base10(<lang `[`(d, `:`(1, margin))>);
    goto L12(r51);
  D20():
    deopt 70 [r42];
  D23():
    deopt 81 [r50];
  D24():
    deopt 85 [d4];
  D27():
    deopt 95 [skip];
  L66():
    goto L9(r42);
  L74():
    goto L11(r50);
  L77():
    d5 = force? d4;
    checkMissing(d5);
    c6 = `is.object`(d5);
    if c6 then L78() else L79(d5);
  L83():
    skip1 = force? skip;
    checkMissing(skip1);
    d8 = ld d;
    check L84() else D28();
  D28():
    deopt 96 [skip1, d8];
  L13(dx9):
    prod1 = ldf prod in base;
    r55 = dyn prod1(dx9);
    check L82() else D26();
  L78():
    dr8 = tryDispatchBuiltin.1("[", d5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L80() else L79(dr8);
  L79(d7):
    margin9 = ld margin;
    check L81() else D25();
  L84():
    d9 = force? d8;
    checkMissing(d9);
    c7 = `is.object`(d9);
    if c7 then L85() else L86(skip1, d9);
  D25():
    deopt 88 [d7, 1, margin9];
  D26():
    deopt 93 [r55];
  L14(skip5, dx11):
    r57 = `/`(skip5, dx11);
    st runl = r57;
    sym11 = ldf rep;
    base11 = ldf rep in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L89() else L90();
  L80():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L81():
    margin10 = force? margin9;
    checkMissing(margin10);
    r53 = `:`(1, margin10);
    __2 = ldf `[` in base;
    r54 = dyn __2(d7, r53);
    goto L13(r54);
  L82():
    goto L12(r55);
  L85():
    dr10 = tryDispatchBuiltin.1("[", d9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L87() else L86(skip1, dr10);
  L86(skip3, d11):
    margin11 = ld margin;
    check L88() else D29();
  D29():
    deopt 98 [skip3, d11, margin11];
  L15(r59):
    st apos = r59;
    double = ldf double;
    check L91() else D30();
  L87():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(skip1, dx10);
  L88():
    margin12 = force? margin11;
    __3 = ldf `[` in base;
    r56 = dyn __3(d11, margin12);
    goto L14(skip3, r56);
  L89():
    rep1 = ldf rep in base;
    r60 = dyn rep1(<lang c(rep_len(TRUE, skip), rep_len(FALSE, `*`(n.mar, runl)))>, <lang `/`(n.new, `(`(`+`(skip, `*`(n.mar, runl))))>);
    goto L15(r60);
  L90():
    r58 = dyn base11(<lang c(rep_len(TRUE, skip), rep_len(FALSE, `*`(n.mar, runl)))>, <lang `/`(n.new, `(`(`+`(skip, `*`(n.mar, runl))))>);
    goto L15(r58);
  D30():
    deopt 108 [];
  L91():
    p4 = prom<V +>{
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      apos = ld apos;
      apos1 = force? apos;
      checkMissing(apos1);
      length2 = ldf length in base;
      r63 = dyn length2(apos1);
      goto L0(r63);
    L2():
      r61 = dyn base12(<sym apos>);
      goto L0(r61);
    };
    r65 = dyn double(p4);
    check L92() else D31();
  D31():
    deopt 110 [r65];
  L92():
    st values = r65;
    as_vector = ldf `as.vector`;
    check L93() else D32();
  D32():
    deopt 113 [];
  L93():
    p5 = prom<V +>{
      A5 = ld A;
      A6 = force? A5;
      checkMissing(A6);
      return A6;
    };
    r67 = dyn as_vector(p5);
    check L94() else D33();
  D33():
    deopt 115 [r67];
  L94():
    l6 = ld values;
    c8 = `is.object`(l6);
    if c8 then L95() else L96(r67, l6);
  L16(dx13):
    st values = dx13;
    n_mar2 = ld `n.mar`;
    check L99() else D35();
  L95():
    dr12 = tryDispatchBuiltin.0("[<-", l6, r67);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L97() else L96(r67, dr12);
  L96(r69, l8):
    apos2 = ld apos;
    check L98() else D34();
  D34():
    deopt 117 [r69, l8, r67, apos2];
  D35():
    deopt 122 [1, n_mar2];
  L97():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L16(dx12);
  L98():
    apos3 = force? apos2;
    ___1 = ldf `[<-` in base;
    r72 = dyn ___1(l8, r67, apos3);
    goto L16(r72);
  L99():
    n_mar3 = force? n_mar2;
    checkMissing(n_mar3);
    r73 = `:`(1, n_mar3);
    s = toForSeq(r73);
    l9 = length(s);
    i = 0;
    goto L17(i);
  L17(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l9, i2);
    if c9 then L100() else L25();
  L25():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    n_dim2 = ld `n.dim`;
    check L101() else D36();
  L100():
    array = ldf array;
    check L128() else D48();
  D36():
    deopt 125 [i2, n_dim2];
  D48():
    deopt 176 [];
  L101():
    n_dim3 = force? n_dim2;
    checkMissing(n_dim3);
    r74 = `>`(n_dim3, 1.0);
    c10 = `as.logical`(r74);
    if c10 then L102() else L18();
  L128():
    p11 = prom<V +>{
      values = ld values;
      values1 = force? values;
      checkMissing(values1);
      return values1;
    };
    p12 = prom<V +>{
      newdim6 = ld newdim;
      newdim7 = force? newdim6;
      checkMissing(newdim7);
      return newdim7;
    };
    p13 = prom<V +>{
      dnA4 = ld dnA;
      dnA5 = force? dnA4;
      checkMissing(dnA5);
      return dnA5;
    };
    r110 = dyn array[, dim, dimnames](p11, p12, p13);
    check L129() else D49();
  D49():
    deopt 182 [r110];
  L18():
    FUN11 = ld FUN;
    check L106() else D39();
  L19(i9, r85):
    st mtab = r85;
    sym13 = ldf rep_len;
    base13 = ldf rep_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L112() else L113();
  L102():
    apply = ldf apply;
    check L103() else D37();
  L129():
    popenv;
    return r110;
  D37():
    deopt 130 [i2];
  D39():
    deopt 135 [i2, FUN11];
  L21(i18, r90):
    st select = r90;
    l10 = ld select;
    c14 = `is.object`(l10);
    if c14 then L116() else L117(i18, TRUE, l10);
  L103():
    p6 = prom<V +>{
      A7 = ld A;
      A8 = force? A7;
      checkMissing(A8);
      return A8;
    };
    p7 = prom<V +>{
      n_dim4 = ld `n.dim`;
      n_dim5 = force? n_dim4;
      checkMissing(n_dim5);
      r76 = `:`(1, n_dim5);
      c11 = `is.object`(r76);
      if c11 then L1() else L2(r76);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", r76);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(r78):
      margin13 = ld margin;
      margin14 = force? margin13;
      checkMissing(margin14);
      r79 = `-`(<missing>, margin14);
      __4 = ldf `[` in base;
      r80 = dyn __4(r78, r79);
      goto L0(r80);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p8 = prom<V +>{
      FUN7 = ld FUN;
      FUN8 = force? FUN7;
      checkMissing(FUN8);
      c12 = `is.object`(FUN8);
      if c12 then L1() else L2(FUN8);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", FUN8);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(FUN10):
      i7 = ld i;
      i8 = force? i7;
      __5 = ldf `[[` in base;
      r82 = dyn __5(FUN10, i8);
      goto L0(r82);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r84 = dyn apply(p6, p7, p8);
    check L104() else D38();
  L106():
    FUN12 = force? FUN11;
    checkMissing(FUN12);
    c13 = `is.object`(FUN12);
    if c13 then L107() else L108(i2, FUN12);
  L112():
    n_mar4 = ld `n.mar`;
    check L114() else D42();
  L113():
    r89 = dyn base13(FALSE, <sym n.mar>);
    goto L21(i9, r89);
  D38():
    deopt 134 [i2, r84];
  D42():
    deopt 147 [i9, n_mar4];
  L20(i13, dx19):
    checkFun.0(dx19);
    dx20 = dx19 as cls;
    p9 = prom<V +>{
      A9 = ld A;
      A10 = force? A9;
      checkMissing(A10);
      return A10;
    };
    r88 = dyn dx20(p9);
    check L111() else D41();
  L22(i22, dx22):
    st select = dx22;
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L120() else L121();
  L104():
    goto L19(i2, r84);
  L107():
    dr18 = tryDispatchBuiltin.1("[[", FUN12);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L109() else L108(i2, dr18);
  L108(i11, FUN14):
    i14 = ld i;
    check L110() else D40();
  L114():
    n_mar5 = force? n_mar4;
    checkMissing(n_mar5);
    rep_len = ldf rep_len in base;
    r91 = dyn rep_len(FALSE, n_mar5);
    check L115() else D43();
  L116():
    dr20 = tryDispatchBuiltin.0("[<-", l10, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L118() else L117(i18, TRUE, dr20);
  L117(i20, r93, l12):
    i23 = ld i;
    check L119() else D44();
  D40():
    deopt 137 [i11, FUN14, i14];
  D41():
    deopt 142 [i13, r88];
  D43():
    deopt 150 [i9, r91];
  D44():
    deopt 155 [i20, r93, l12, TRUE, i23];
  L23(i27, r98):
    st mpos = r98;
    as_vector1 = ldf `as.vector`;
    check L122() else D45();
  L109():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L20(i2, dx18);
  L110():
    i15 = force? i14;
    __6 = ldf `[[` in base;
    r86 = dyn __6(FUN14, i15);
    goto L20(i11, r86);
  L111():
    goto L19(i13, r88);
  L115():
    goto L21(i9, r91);
  L118():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L22(i18, dx21);
  L119():
    i24 = force? i23;
    ___2 = ldf `[<-` in base;
    r96 = dyn ___2(l12, TRUE, i24);
    goto L22(i20, r96);
  L120():
    rep2 = ldf rep in base;
    r99 = dyn rep2(<lang c(rep_len(FALSE, skip), rep(select, each=runl))>, <lang `/`(prod(dim(A)), skip)>);
    goto L23(i22, r99);
  L121():
    r97 = dyn base14(<lang c(rep_len(FALSE, skip), rep(select, each=runl))>, <lang `/`(prod(dim(A)), skip)>);
    goto L23(i22, r97);
  D45():
    deopt 164 [i27];
  L122():
    p10 = prom<V +>{
      mtab = ld mtab;
      mtab1 = force? mtab;
      checkMissing(mtab1);
      return mtab1;
    };
    r101 = dyn as_vector1(p10);
    check L123() else D46();
  D46():
    deopt 166 [i27, r101];
  L123():
    l13 = ld values;
    c15 = `is.object`(l13);
    if c15 then L124() else L125(i27, r101, l13);
  L24(i31, dx24):
    st values = dx24;
    goto L17(i31);
  L124():
    dr22 = tryDispatchBuiltin.0("[<-", l13, r101);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L126() else L125(i27, r101, dr22);
  L125(i29, r103, l15):
    mpos = ld mpos;
    check L127() else D47();
  D47():
    deopt 168 [i29, r103, l15, r101, mpos];
  L126():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L24(i27, dx23);
  L127():
    mpos1 = force? mpos;
    ___3 = ldf `[<-` in base;
    r106 = dyn ___3(l15, r101, mpos1);
    goto L24(i29, r106);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg sum:cls, reg r2:V, reg r3:V, reg r4:V |
    mkenv;
    st x = x;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r3 = `^`(r1, 2.0);
    r4 = `/`(r3, 100.0);
    popenv;
    return r4;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    sum = ldf sum in base;
    r2 = dyn sum(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}