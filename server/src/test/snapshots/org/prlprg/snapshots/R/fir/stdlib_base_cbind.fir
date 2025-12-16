fun main() {
  () -+> V { reg r:cls, reg cbind:cls, reg p:p(V +), reg r2:V, reg m:*, reg m1:V, reg cbind1:cls, reg m2:*, reg m3:V, reg p1:p(V +), reg p2:p(V +), reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r12:V, reg c1:cls, reg r13:V, reg __:cls, reg r14:V, reg m4:*, reg m5:V, reg cbind2:cls, reg p3:p(V +), reg diag:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg cbind3:cls, reg rbind:cls, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg cbind4:cls, reg rbind1:cls, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V, reg data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg rep:cls, reg r29:V, reg p9:p(V +), reg r31:V, reg cbind5:cls, reg xx:*, reg xx1:V, reg p10:p(V +), reg rbind2:cls, reg p11:p(V +), reg r34:V, reg p12:p(V +), reg r36:V, reg cbind6:cls, reg matrix:cls, reg r37:V, reg p13:p(V +), reg r39:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg cbind7:cls, reg matrix1:cls, reg r42:V, reg p14:p(V +), reg r44:V, reg dim:cls, reg r45:V, reg rbind3:cls, reg p15:p(V +), reg dd:*, reg dd1:V, reg p16:p(V +), reg r48:V, reg rbind4:cls, reg p17:p(V +), reg dd2:*, reg dd3:V, reg p18:p(V +), reg r51:V, reg rbind5:cls, reg p19:p(V +), reg dd4:*, reg dd5:V, reg p20:p(V +), reg r54:V, reg gl:cls, reg letters:*, reg letters1:V, reg c2:L, reg letters3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r55:V, reg p21:p(V +), reg r57:V, reg setNames:cls, reg b0:*, reg b1:V, reg p22:p(V +), reg paste0:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg r60:V, reg b2:*, reg b3:V, reg r61:I, reg p23:p(V +), reg r63:V, reg p24:p(V +), reg r65:V, reg data_frame1:cls, reg b4:*, reg b5:V, reg p25:p(V +), reg gl1:cls, reg r67:V, reg p26:p(V +), reg r69:V, reg data_frame2:cls, reg bf:*, reg bf1:V, reg p27:p(V +), reg gl2:cls, reg r71:V, reg p28:p(V +), reg r73:V, reg data_frame3:cls, reg r74:V, reg rbind6:cls, reg df:*, reg df1:V, reg p29:p(V +), reg new:*, reg new1:V, reg p30:p(V +), reg r77:V, reg rbind7:cls, reg df_:*, reg df_1:V, reg p31:p(V +), reg new2:*, reg new3:V, reg p32:p(V +), reg r80:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r81:V, reg r82:V, reg df2:*, reg df3:V, reg rbind8:cls, reg df4:*, reg df5:V, reg p33:p(V +), reg new4:*, reg new5:V, reg p34:p(V +), reg r85:V, reg identical:cls, reg r86:V, reg p35:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r88:V, reg r89:V, reg df6:*, reg df7:V, reg rbind9:cls, reg df_2:*, reg df_3:V, reg p36:p(V +), reg new6:*, reg new7:V, reg p37:p(V +), reg r92:V, reg identical1:cls, reg r93:V, reg p38:p(V +), reg r95:V, reg rbind_data_frame:cls, reg as_list:cls, reg df8:*, reg df9:V, reg p39:p(V +), reg r97:V, reg p40:p(V +), reg as_list1:cls, reg new8:*, reg new9:V, reg p41:p(V +), reg r100:V, reg p42:p(V +), reg r102:V, reg rbind_data_frame1:cls, reg as_list2:cls, reg df10:*, reg df11:V, reg p43:p(V +), reg r104:V, reg p44:p(V +), reg as_list3:cls, reg new10:*, reg new11:V, reg p45:p(V +), reg r107:V, reg p46:p(V +), reg r109:V, reg stopifnot1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r110:V, reg r111:V, reg _row_names_info:cls, reg d3:*, reg d4:V, reg p47:p(V +), reg r113:V, reg identical2:cls, reg r114:V, reg p48:p(V +), reg r116:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r117:V, reg r118:V, reg d5:*, reg d6:V, reg attr:cls, reg r119:V, reg l:*, reg row_names__:cls, reg r120:V, reg stopifnot2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r121:V, reg r122:V, reg d7:*, reg d8:V, reg d9:*, reg d10:V, reg identical3:cls, reg r123:V, reg p49:p(V +), reg r125:V |
    mkenv;
    r = clos `inner-761979843`;
    st cbind = r;
    cbind = ldf cbind;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    r2 = dyn cbind(1.0, p);
    check L5() else D1();
  D1():
    deopt 7 [r2];
  L5():
    st m = r2;
    m = ld m;
    check L6() else D2();
  D2():
    deopt 9 [m];
  L6():
    m1 = force? m;
    checkMissing(m1);
    cbind1 = ldf cbind;
    check L7() else D3();
  D3():
    deopt 12 [];
  L7():
    p1 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p2 = prom<V +>{
      return <int 8, 9, 10, 11, 12, 13, 14>;
    };
    r5 = dyn cbind1(p1, p2);
    check L8() else D4();
  D4():
    deopt 15 [r5];
  L8():
    c = `is.object`(r5);
    if c then L9() else L10(r5);
  L0(dx1):
    st m = dx1;
    m4 = ld m;
    check L15() else D6();
  L9():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r7):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  D6():
    deopt 27 [m4];
  L1(r12):
    __ = ldf `[` in base;
    r14 = dyn __(r5, <missing>, r12);
    goto L0(r14);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L12():
    c1 = ldf c in base;
    r13 = dyn c1(1.0, 3.0, 2.0);
    check L14() else D5();
  L13():
    r10 = dyn base(1.0, 3.0, 2.0);
    goto L1(r10);
  L15():
    m5 = force? m4;
    checkMissing(m5);
    cbind2 = ldf cbind;
    check L16() else D7();
  D5():
    deopt 23 [r7, r13];
  D7():
    deopt 30 [];
  L14():
    goto L1(r13);
  L16():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p4 = prom<V +>{
      diag = ldf diag;
      r16 = dyn diag(3.0);
      return r16;
    };
    r18 = dyn cbind2(p3, p4);
    check L17() else D8();
  D8():
    deopt 33 [r18];
  L17():
    cbind3 = ldf cbind;
    check L18() else D9();
  D9():
    deopt 35 [];
  L18():
    p6 = prom<V +>{
      rbind = ldf rbind;
      p5 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r20 = dyn rbind(1.0, p5);
      return r20;
    };
    r22 = dyn cbind3(0.0, p6);
    check L19() else D10();
  D10():
    deopt 38 [r22];
  L19():
    cbind4 = ldf cbind;
    check L20() else D11();
  D11():
    deopt 40 [];
  L20():
    p8 = prom<V +>{
      rbind1 = ldf rbind;
      p7 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r24 = dyn rbind1[a, b](1.0, p7);
      return r24;
    };
    r26 = dyn cbind4[I, X](0.0, p8);
    check L21() else D12();
  D12():
    deopt 45 [r26];
  L21():
    data_frame = ldf `data.frame`;
    check L22() else D13();
  D13():
    deopt 47 [];
  L22():
    p9 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      rep = ldf rep in base;
      r29 = dyn rep(0.0, 2.0);
      goto L0(r29);
    L2():
      r27 = dyn base1(0.0, 2.0);
      goto L0(r27);
    };
    r31 = dyn data_frame[I](p9);
    check L23() else D14();
  D14():
    deopt 50 [r31];
  L23():
    st xx = r31;
    cbind5 = ldf cbind;
    check L24() else D15();
  D15():
    deopt 53 [];
  L24():
    p10 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p12 = prom<V +>{
      rbind2 = ldf rbind;
      p11 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r34 = dyn rbind2[a, b](1.0, p11);
      return r34;
    };
    r36 = dyn cbind5[, X](p10, p12);
    check L25() else D16();
  D16():
    deopt 57 [r36];
  L25():
    cbind6 = ldf cbind;
    check L26() else D17();
  D17():
    deopt 59 [];
  L26():
    p13 = prom<V +>{
      matrix = ldf matrix;
      r37 = dyn matrix[, nrow, ncol](1.0, 0.0, 4.0);
      return r37;
    };
    r39 = dyn cbind6(0.0, p13);
    check L27() else D18();
  D18():
    deopt 62 [r39];
  L27():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L2():
    st dd = 10.0;
    rbind3 = ldf rbind;
    check L33() else D22();
  L28():
    cbind7 = ldf cbind;
    check L30() else D19();
  L29():
    r40 = dyn base2(<lang cbind(0.0, matrix(1.0, nrow=2.0, ncol=0.0))>);
    goto L2();
  D19():
    deopt 66 [];
  D22():
    deopt 76 [];
  L30():
    p14 = prom<V +>{
      matrix1 = ldf matrix;
      r42 = dyn matrix1[, nrow, ncol](1.0, 2.0, 0.0);
      return r42;
    };
    r44 = dyn cbind7(0.0, p14);
    check L31() else D20();
  L33():
    p15 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p16 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    r48 = dyn rbind3[, c, `a++`, , `deparse.level`](p15, 2.0, 10.0, p16, 0.0);
    check L34() else D23();
  D20():
    deopt 69 [r44];
  D23():
    deopt 85 [r48];
  L31():
    dim = ldf dim in base;
    r45 = dyn dim(r44);
    check L32() else D21();
  L34():
    rbind4 = ldf rbind;
    check L35() else D24();
  D21():
    deopt 71 [r45];
  D24():
    deopt 87 [];
  L32():
    goto L2();
  L35():
    p17 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p18 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    r51 = dyn rbind4[, c, `a++`, , `deparse.level`](p17, 2.0, 10.0, p18, 1.0);
    check L36() else D25();
  D25():
    deopt 96 [r51];
  L36():
    rbind5 = ldf rbind;
    check L37() else D26();
  D26():
    deopt 98 [];
  L37():
    p19 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p20 = prom<V +>{
      dd4 = ld dd;
      dd5 = force? dd4;
      checkMissing(dd5);
      return dd5;
    };
    r54 = dyn rbind5[, c, `a++`, , `deparse.level`](p19, 2.0, 10.0, p20, 2.0);
    check L38() else D27();
  D27():
    deopt 107 [r54];
  L38():
    gl = ldf gl;
    check L39() else D28();
  D28():
    deopt 109 [];
  L39():
    p21 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c2 = `is.object`(letters1);
      if c2 then L1() else L2(letters1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", letters1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(letters3):
      __1 = ldf `[` in base;
      r55 = dyn __1(letters3, <int 1, 2, 3>);
      goto L0(r55);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r57 = dyn gl[, , labels](3.0, 4.0, p21);
    check L40() else D29();
  D29():
    deopt 114 [r57];
  L40():
    st b0 = r57;
    setNames = ldf setNames;
    check L41() else D30();
  D30():
    deopt 117 [];
  L41():
    p22 = prom<V +>{
      b0 = ld b0;
      b1 = force? b0;
      checkMissing(b1);
      return b1;
    };
    p24 = prom<V +>{
      paste0 = ldf paste0;
      p23 = prom<V +>{
        sym3 = ldf seq_along;
        base3 = ldf seq_along in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r60):
        return r60;
      L1():
        b2 = ld b0;
        b3 = force? b2;
        checkMissing(b3);
        r61 = seq_along(b3);
        goto L0(r61);
      L2():
        r59 = dyn base3(<sym b0>);
        goto L0(r59);
      };
      r63 = dyn paste0("o", p23);
      return r63;
    };
    r65 = dyn setNames(p22, p24);
    check L42() else D31();
  D31():
    deopt 120 [r65];
  L42():
    st bf = r65;
    data_frame1 = ldf `data.frame`;
    check L43() else D32();
  D32():
    deopt 123 [];
  L43():
    p25 = prom<V +>{
      b4 = ld b0;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    p26 = prom<V +>{
      gl1 = ldf gl;
      r67 = dyn gl1(4.0, 3.0);
      return r67;
    };
    r69 = dyn data_frame1[a, B, f](1.0, p25, p26);
    check L44() else D33();
  D33():
    deopt 130 [r69];
  L44():
    st df = r69;
    data_frame2 = ldf `data.frame`;
    check L45() else D34();
  D34():
    deopt 133 [];
  L45():
    p27 = prom<V +>{
      bf = ld bf;
      bf1 = force? bf;
      checkMissing(bf1);
      return bf1;
    };
    p28 = prom<V +>{
      gl2 = ldf gl;
      r71 = dyn gl2(4.0, 3.0);
      return r71;
    };
    r73 = dyn data_frame2[a, B, f](1.0, p27, p28);
    check L46() else D35();
  D35():
    deopt 140 [r73];
  L46():
    st `df.` = r73;
    data_frame3 = ldf `data.frame`;
    check L47() else D36();
  D36():
    deopt 143 [];
  L47():
    r74 = dyn data_frame3[a, B, f](8.0, "B", "1");
    check L48() else D37();
  D37():
    deopt 150 [r74];
  L48():
    st new = r74;
    rbind6 = ldf rbind;
    check L49() else D38();
  D38():
    deopt 153 [];
  L49():
    p29 = prom<V +>{
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      return df1;
    };
    p30 = prom<V +>{
      new = ld new;
      new1 = force? new;
      checkMissing(new1);
      return new1;
    };
    r77 = dyn rbind6(p29, p30);
    check L50() else D39();
  D39():
    deopt 156 [r77];
  L50():
    st df1 = r77;
    rbind7 = ldf rbind;
    check L51() else D40();
  D40():
    deopt 159 [];
  L51():
    p31 = prom<V +>{
      df_ = ld `df.`;
      df_1 = force? df_;
      checkMissing(df_1);
      return df_1;
    };
    p32 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      return new3;
    };
    r80 = dyn rbind7(p31, p32);
    check L52() else D41();
  D41():
    deopt 162 [r80];
  L52():
    st `df.1` = r80;
    stopifnot = ldf stopifnot;
    check L53() else D42();
  D42():
    deopt 165 [];
  L53():
    p35 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      df2 = ld df1;
      df3 = force? df2;
      checkMissing(df3);
      rbind8 = ldf rbind;
      p33 = prom<V +>{
        df4 = ld df;
        df5 = force? df4;
        checkMissing(df5);
        return df5;
      };
      p34 = prom<V +>{
        new4 = ld new;
        new5 = force? new4;
        checkMissing(new5);
        return new5;
      };
      r85 = dyn rbind8[, , `make.row.names`](p33, p34, FALSE);
      identical = ldf identical in base;
      r86 = dyn identical(df3, r85, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r86);
    L2():
      r81 = dyn base4(<sym df1>, <lang rbind(df, new, make.row.names=FALSE)>);
      goto L0(r81);
    };
    p38 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      df6 = ld df1;
      df7 = force? df6;
      checkMissing(df7);
      rbind9 = ldf rbind;
      p36 = prom<V +>{
        df_2 = ld `df.`;
        df_3 = force? df_2;
        checkMissing(df_3);
        return df_3;
      };
      p37 = prom<V +>{
        new6 = ld new;
        new7 = force? new6;
        checkMissing(new7);
        return new7;
      };
      r92 = dyn rbind9[, , `make.row.names`](p36, p37, FALSE);
      identical1 = ldf identical in base;
      r93 = dyn identical1(df7, r92, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r93);
    L2():
      r88 = dyn base5(<sym df1>, <lang rbind(df., new, make.row.names=FALSE)>);
      goto L0(r88);
    };
    r95 = dyn stopifnot(p35, p38);
    check L54() else D43();
  D43():
    deopt 168 [r95];
  L54():
    rbind_data_frame = ldf `rbind.data.frame`;
    check L55() else D44();
  D44():
    deopt 170 [];
  L55():
    p40 = prom<V +>{
      as_list = ldf `as.list`;
      p39 = prom<V +>{
        df8 = ld df;
        df9 = force? df8;
        checkMissing(df9);
        return df9;
      };
      r97 = dyn as_list(p39);
      return r97;
    };
    p42 = prom<V +>{
      as_list1 = ldf `as.list`;
      p41 = prom<V +>{
        new8 = ld new;
        new9 = force? new8;
        checkMissing(new9);
        return new9;
      };
      r100 = dyn as_list1(p41);
      return r100;
    };
    r102 = dyn rbind_data_frame(p40, p42);
    check L56() else D45();
  D45():
    deopt 173 [r102];
  L56():
    st d2 = r102;
    rbind_data_frame1 = ldf `rbind.data.frame`;
    check L57() else D46();
  D46():
    deopt 176 [];
  L57():
    p44 = prom<V +>{
      as_list2 = ldf `as.list`;
      p43 = prom<V +>{
        df10 = ld df;
        df11 = force? df10;
        checkMissing(df11);
        return df11;
      };
      r104 = dyn as_list2(p43);
      return r104;
    };
    p46 = prom<V +>{
      as_list3 = ldf `as.list`;
      p45 = prom<V +>{
        new10 = ld new;
        new11 = force? new10;
        checkMissing(new11);
        return new11;
      };
      r107 = dyn as_list3(p45);
      return r107;
    };
    r109 = dyn rbind_data_frame1[, , `make.row.names`](p44, p46, FALSE);
    check L58() else D47();
  D47():
    deopt 181 [r109];
  L58():
    st d3 = r109;
    stopifnot1 = ldf stopifnot;
    check L59() else D48();
  D48():
    deopt 184 [];
  L59():
    p48 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r111):
      return r111;
    L1():
      _row_names_info = ldf `.row_names_info`;
      p47 = prom<V +>{
        d3 = ld d3;
        d4 = force? d3;
        checkMissing(d4);
        return d4;
      };
      r113 = dyn _row_names_info(p47);
      identical2 = ldf identical in base;
      r114 = dyn identical2(r113, -13, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r114);
    L2():
      r110 = dyn base6(<lang .row_names_info(d3)>, <lang `-`(13)>);
      goto L0(r110);
    };
    r116 = dyn stopifnot1(p48);
    check L60() else D49();
  D49():
    deopt 186 [r116];
  L60():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L3(r118):
    l = ld d2;
    row_names__ = ldf `row.names<-`;
    check L65() else D52();
  L61():
    d5 = ld d3;
    check L63() else D50();
  L62():
    r117 = dyn base7(<sym d3>, "row.names");
    goto L3(r117);
  D50():
    deopt 189 [d5];
  D52():
    deopt 195 [r118, l, r118];
  L63():
    d6 = force? d5;
    checkMissing(d6);
    attr = ldf attr in base;
    r119 = dyn attr(d6, "row.names");
    check L64() else D51();
  L65():
    r120 = dyn row_names__(l, NULL, r118);
    check L66() else D53();
  D51():
    deopt 193 [r119];
  D53():
    deopt 197 [r118, r120];
  L64():
    goto L3(r119);
  L66():
    st d2 = r120;
    stopifnot2 = ldf stopifnot;
    check L67() else D54();
  D54():
    deopt 200 [];
  L67():
    p49 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r122):
      return r122;
    L1():
      d7 = ld d2;
      d8 = force? d7;
      checkMissing(d8);
      d9 = ld d3;
      d10 = force? d9;
      checkMissing(d10);
      identical3 = ldf identical in base;
      r123 = dyn identical3(d8, d10, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r123);
    L2():
      r121 = dyn base8(<sym d2>, <sym d3>);
      goto L0(r121);
    };
    r125 = dyn stopifnot2(p49);
    check L68() else D55();
  D55():
    deopt 202 [r125];
  L68():
    popenv;
    return r125;
  }
}
fun `inner-761979843`(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang cbind(deparse.level, ...)>);
    goto L1(r2);
  L3():
    r = dyn base(<lang cbind(deparse.level, ...)>);
    goto L1(r);
  }
}