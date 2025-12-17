fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg regexpr:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg x:*, reg x1:V, reg p1:p(V +), reg r6:V, reg regmatches:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg m:*, reg m1:V, reg p3:p(V +), reg r9:V, reg regmatches1:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg m2:*, reg m3:V, reg p5:p(V +), reg r12:V, reg gregexpr:cls, reg pattern2:*, reg pattern3:V, reg p6:p(V +), reg x6:*, reg x7:V, reg p7:p(V +), reg r15:V, reg regmatches2:cls, reg x8:*, reg x9:V, reg p8:p(V +), reg m4:*, reg m5:V, reg p9:p(V +), reg r18:V, reg regmatches3:cls, reg x10:*, reg x11:V, reg p10:p(V +), reg m6:*, reg m7:V, reg p11:p(V +), reg r21:V, reg gregexpr1:cls, reg x12:*, reg x13:V, reg p12:p(V +), reg r23:V, reg r24:cls, reg x14:*, reg x15:V, reg Map:cls, reg blanks:*, reg blanks1:V, reg p13:p(V +), reg lapply:cls, reg regmatches4:cls, reg s:*, reg s1:V, reg p14:p(V +), reg m8:*, reg m9:V, reg p15:p(V +), reg r28:V, reg p16:p(V +), reg nchar:*, reg nchar1:V, reg p17:p(V +), reg r31:V, reg p18:p(V +), reg r33:V, reg l:*, reg regmatches__:cls, reg m10:*, reg m11:V, reg p19:p(V +), reg r35:V, reg s2:*, reg s3:V, reg gregexpr2:cls, reg s4:*, reg s5:V, reg p20:p(V +), reg r37:V, reg regmatches5:cls, reg x16:*, reg x17:V, reg p21:p(V +), reg m12:*, reg m13:V, reg p22:p(V +), reg r40:V, reg r41:cls, reg gregexec:cls, reg x18:*, reg x19:V, reg p23:p(V +), reg r43:V, reg regmatches6:cls, reg x20:*, reg x21:V, reg p24:p(V +), reg m14:*, reg m15:V, reg p25:p(V +), reg r46:V, reg try:cls, reg regmatches7:cls, reg x22:*, reg x23:V, reg p26:p(V +), reg m16:*, reg m17:V, reg p27:p(V +), reg r49:V, reg p28:p(V +), reg r51:V, reg regmatches8:cls, reg x24:*, reg x25:V, reg p29:p(V +), reg lapply1:cls, reg m18:*, reg m19:V, reg p30:p(V +), reg drop_first:*, reg drop_first1:V, reg p31:p(V +), reg r55:V, reg p32:p(V +), reg r57:V, reg regmatches9:cls, reg x26:*, reg x27:V, reg p33:p(V +), reg lapply2:cls, reg m20:*, reg m21:V, reg p34:p(V +), reg drop_first2:*, reg drop_first3:V, reg p35:p(V +), reg r61:V, reg p36:p(V +), reg r63:V, reg x28:*, reg x29:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r64:V, reg r65:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r66:V, reg r67:V, reg c1:cls, reg r68:V, reg list:cls, reg r69:V, reg l1:*, reg regmatches__1:cls, reg lapply3:cls, reg m22:*, reg m23:V, reg p37:p(V +), reg drop_first4:*, reg drop_first5:V, reg p38:p(V +), reg r72:V, reg p39:p(V +), reg r74:V, reg y:*, reg y1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r75:V, reg r76:V, reg sprintf:cls, reg p40:p(V +), reg r78:V, reg list1:cls, reg r79:V, reg l2:*, reg regmatches__2:cls, reg lapply4:cls, reg m24:*, reg m25:V, reg p41:p(V +), reg drop_first6:*, reg drop_first7:V, reg p42:p(V +), reg r82:V, reg p43:p(V +), reg r84:V, reg z:*, reg z1:V, reg head:cls, reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r85:V, reg p44:p(V +), reg r87:V, reg p45:p(V +), reg r89:V, reg p46:p(V +), reg r91:V, reg gregexec1:cls, reg NEWS:*, reg NEWS1:V, reg p47:p(V +), reg r93:V, reg regmatches10:cls, reg NEWS2:*, reg NEWS3:V, reg p48:p(V +), reg m26:*, reg m27:V, reg p49:p(V +), reg r96:V, reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r97:V, reg as_data_frame:cls, reg t:cls, reg do_call:cls, reg cbind:*, reg cbind1:V, reg p50:p(V +), reg y6:*, reg y7:V, reg p51:p(V +), reg r100:V, reg p52:p(V +), reg r102:V, reg p53:p(V +), reg r104:V, reg cbind2:cls, reg mdat:*, reg mdat1:V, reg p54:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r106:V, reg r107:V, reg rep:cls, reg r108:V, reg p55:p(V +), reg r110:V, reg head1:cls, reg mdat2:*, reg mdat3:V, reg p56:p(V +), reg r112:V, reg NEWS4:*, reg NEWS5:V, reg c3:L, reg NEWS7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg head2:cls, reg mdat4:*, reg mdat5:V, reg c4:L, reg mdat7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r113:V, reg p57:p(V +), reg r115:V, reg __2:cls, reg r116:V |
    mkenv;
    r = clos inner1645952209;
    st regmatches = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r2):
    st x = r2;
    st pattern = "[[:space:]]*(,|and)[[:space:]]";
    regexpr = ldf regexpr;
    check L9() else D1();
  L6():
    c = ldf c in base;
    r3 = dyn c("A and B", "A, B and C", "A, B, C and D", "foobar");
    check L8() else D0();
  L7():
    r1 = dyn base("A and B", "A, B and C", "A, B, C and D", "foobar");
    goto L0(r1);
  D0():
    deopt 10 [r3];
  D1():
    deopt 16 [];
  L8():
    goto L0(r3);
  L9():
    p = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r6 = dyn regexpr(p, p1);
    check L10() else D2();
  D2():
    deopt 19 [r6];
  L10():
    st m = r6;
    regmatches = ldf regmatches;
    check L11() else D3();
  D3():
    deopt 22 [];
  L11():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r9 = dyn regmatches(p2, p3);
    check L12() else D4();
  D4():
    deopt 25 [r9];
  L12():
    regmatches1 = ldf regmatches;
    check L13() else D5();
  D5():
    deopt 27 [];
  L13():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p5 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r12 = dyn regmatches1[, , invert](p4, p5, TRUE);
    check L14() else D6();
  D6():
    deopt 32 [r12];
  L14():
    gregexpr = ldf gregexpr;
    check L15() else D7();
  D7():
    deopt 34 [];
  L15():
    p6 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r15 = dyn gregexpr(p6, p7);
    check L16() else D8();
  D8():
    deopt 37 [r15];
  L16():
    st m = r15;
    regmatches2 = ldf regmatches;
    check L17() else D9();
  D9():
    deopt 40 [];
  L17():
    p8 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p9 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r18 = dyn regmatches2(p8, p9);
    check L18() else D10();
  D10():
    deopt 43 [r18];
  L18():
    regmatches3 = ldf regmatches;
    check L19() else D11();
  D11():
    deopt 45 [];
  L19():
    p10 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p11 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r21 = dyn regmatches3[, , invert](p10, p11, TRUE);
    check L20() else D12();
  D12():
    deopt 50 [r21];
  L20():
    st x = "John (fishing, hunting), Paul (hiking, biking)";
    gregexpr1 = ldf gregexpr;
    check L21() else D13();
  D13():
    deopt 55 [];
  L21():
    p12 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r23 = dyn gregexpr1("\\([^)]*\\)", p12);
    check L22() else D14();
  D14():
    deopt 58 [r23];
  L22():
    st m = r23;
    r24 = clos inner4266987626;
    st blanks = r24;
    x14 = ld x;
    check L23() else D15();
  D15():
    deopt 63 [x14];
  L23():
    x15 = force? x14;
    checkMissing(x15);
    st s = x15;
    Map = ldf Map;
    check L24() else D16();
  D16():
    deopt 67 [];
  L24():
    p13 = prom<V +>{
      blanks = ld blanks;
      blanks1 = force? blanks;
      checkMissing(blanks1);
      return blanks1;
    };
    p18 = prom<V +>{
      lapply = ldf lapply;
      p16 = prom<V +>{
        regmatches4 = ldf regmatches;
        p14 = prom<V +>{
          s = ld s;
          s1 = force? s;
          checkMissing(s1);
          return s1;
        };
        p15 = prom<V +>{
          m8 = ld m;
          m9 = force? m8;
          checkMissing(m9);
          return m9;
        };
        r28 = dyn regmatches4(p14, p15);
        return r28;
      };
      p17 = prom<V +>{
        nchar = ld nchar;
        nchar1 = force? nchar;
        checkMissing(nchar1);
        return nchar1;
      };
      r31 = dyn lapply(p16, p17);
      return r31;
    };
    r33 = dyn Map(p13, p18);
    check L25() else D17();
  D17():
    deopt 70 [r33];
  L25():
    l = ld s;
    regmatches__ = ldf `regmatches<-`;
    check L26() else D18();
  D18():
    deopt 72 [r33, l, r33];
  L26():
    p19 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      return m11;
    };
    r35 = dyn regmatches__(l, NULL, p19, r33);
    check L27() else D19();
  D19():
    deopt 75 [r33, r35];
  L27():
    st s = r35;
    s2 = ld s;
    check L28() else D20();
  D20():
    deopt 77 [s2];
  L28():
    s3 = force? s2;
    checkMissing(s3);
    gregexpr2 = ldf gregexpr;
    check L29() else D21();
  D21():
    deopt 80 [];
  L29():
    p20 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      return s5;
    };
    r37 = dyn gregexpr2(", *", p20);
    check L30() else D22();
  D22():
    deopt 83 [r37];
  L30():
    st m = r37;
    regmatches5 = ldf regmatches;
    check L31() else D23();
  D23():
    deopt 86 [];
  L31():
    p21 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p22 = prom<V +>{
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      return m13;
    };
    r40 = dyn regmatches5[, , invert](p21, p22, TRUE);
    check L32() else D24();
  D24():
    deopt 91 [r40];
  L32():
    r41 = clos inner2501545716;
    st drop_first = r41;
    gregexec = ldf gregexec;
    check L33() else D25();
  D25():
    deopt 96 [];
  L33():
    p23 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r43 = dyn gregexec("(\\w+) \\(((?:\\w+(?:, )?)+)\\)", p23);
    check L34() else D26();
  D26():
    deopt 99 [r43];
  L34():
    st m = r43;
    regmatches6 = ldf regmatches;
    check L35() else D27();
  D27():
    deopt 102 [];
  L35():
    p24 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    p25 = prom<V +>{
      m14 = ld m;
      m15 = force? m14;
      checkMissing(m15);
      return m15;
    };
    r46 = dyn regmatches6(p24, p25);
    check L36() else D28();
  D28():
    deopt 105 [r46];
  L36():
    try = ldf try;
    check L37() else D29();
  D29():
    deopt 107 [];
  L37():
    p28 = prom<V +>{
      regmatches7 = ldf regmatches;
      p26 = prom<V +>{
        x22 = ld x;
        x23 = force? x22;
        checkMissing(x23);
        return x23;
      };
      p27 = prom<V +>{
        m16 = ld m;
        m17 = force? m16;
        checkMissing(m17);
        return m17;
      };
      r49 = dyn regmatches7[, , invert](p26, p27, TRUE);
      return r49;
    };
    r51 = dyn try(p28);
    check L38() else D30();
  D30():
    deopt 109 [r51];
  L38():
    regmatches8 = ldf regmatches;
    check L39() else D31();
  D31():
    deopt 111 [];
  L39():
    p29 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    p32 = prom<V +>{
      lapply1 = ldf lapply;
      p30 = prom<V +>{
        m18 = ld m;
        m19 = force? m18;
        checkMissing(m19);
        return m19;
      };
      p31 = prom<V +>{
        drop_first = ld drop_first;
        drop_first1 = force? drop_first;
        checkMissing(drop_first1);
        return drop_first1;
      };
      r55 = dyn lapply1(p30, p31);
      return r55;
    };
    r57 = dyn regmatches8(p29, p32);
    check L40() else D32();
  D32():
    deopt 114 [r57];
  L40():
    regmatches9 = ldf regmatches;
    check L41() else D33();
  D33():
    deopt 116 [];
  L41():
    p33 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    p36 = prom<V +>{
      lapply2 = ldf lapply;
      p34 = prom<V +>{
        m20 = ld m;
        m21 = force? m20;
        checkMissing(m21);
        return m21;
      };
      p35 = prom<V +>{
        drop_first2 = ld drop_first;
        drop_first3 = force? drop_first2;
        checkMissing(drop_first3);
        return drop_first3;
      };
      r61 = dyn lapply2(p34, p35);
      return r61;
    };
    r63 = dyn regmatches9[, , invert](p33, p36, TRUE);
    check L42() else D34();
  D34():
    deopt 121 [r63];
  L42():
    x28 = ld x;
    check L43() else D35();
  D35():
    deopt 122 [x28];
  L43():
    x29 = force? x28;
    checkMissing(x29);
    st z = x29;
    st y = x29;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L1(r65):
    l1 = ld y;
    regmatches__1 = ldf `regmatches<-`;
    check L50() else D38();
  L44():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L45():
    r64 = dyn base1(<lang c("<NAME>", "<HOBBY-LIST>")>);
    goto L1(r64);
  D38():
    deopt 137 [r65, l1, r65];
  L2(r67):
    list = ldf list in base;
    r69 = dyn list(r67);
    check L49() else D37();
  L46():
    c1 = ldf c in base;
    r68 = dyn c1("<NAME>", "<HOBBY-LIST>");
    check L48() else D36();
  L47():
    r66 = dyn base2("<NAME>", "<HOBBY-LIST>");
    goto L2(r66);
  L50():
    p39 = prom<V +>{
      lapply3 = ldf lapply;
      p37 = prom<V +>{
        m22 = ld m;
        m23 = force? m22;
        checkMissing(m23);
        return m23;
      };
      p38 = prom<V +>{
        drop_first4 = ld drop_first;
        drop_first5 = force? drop_first4;
        checkMissing(drop_first5);
        return drop_first5;
      };
      r72 = dyn lapply3(p37, p38);
      return r72;
    };
    r74 = dyn regmatches__1(l1, NULL, p39, r65);
    check L51() else D39();
  D36():
    deopt 133 [r68];
  D37():
    deopt 135 [r69];
  D39():
    deopt 140 [r65, r74];
  L48():
    goto L2(r68);
  L49():
    goto L1(r69);
  L51():
    st y = r74;
    y = ld y;
    check L52() else D40();
  D40():
    deopt 142 [y];
  L52():
    y1 = force? y;
    checkMissing(y1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L3(r76):
    l2 = ld z;
    regmatches__2 = ldf `regmatches<-`;
    check L58() else D44();
  L53():
    sprintf = ldf sprintf;
    check L55() else D41();
  L54():
    r75 = dyn base3(<lang sprintf("<%d>", `:`(1.0, 5.0))>);
    goto L3(r75);
  D41():
    deopt 147 [];
  D44():
    deopt 154 [r76, l2, r76];
  L55():
    p40 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r78 = dyn sprintf("<%d>", p40);
    check L56() else D42();
  L58():
    p43 = prom<V +>{
      lapply4 = ldf lapply;
      p41 = prom<V +>{
        m24 = ld m;
        m25 = force? m24;
        checkMissing(m25);
        return m25;
      };
      p42 = prom<V +>{
        drop_first6 = ld drop_first;
        drop_first7 = force? drop_first6;
        checkMissing(drop_first7);
        return drop_first7;
      };
      r82 = dyn lapply4(p41, p42);
      return r82;
    };
    r84 = dyn regmatches__2[, , , invert, ](l2, NULL, p43, TRUE, r76);
    check L59() else D45();
  D42():
    deopt 150 [r78];
  D45():
    deopt 159 [r76, r84];
  L56():
    list1 = ldf list in base;
    r79 = dyn list1(r78);
    check L57() else D43();
  L59():
    st z = r84;
    z = ld z;
    check L60() else D46();
  D43():
    deopt 152 [r79];
  D46():
    deopt 161 [z];
  L57():
    goto L3(r79);
  L60():
    z1 = force? z;
    checkMissing(z1);
    head = ldf head;
    check L61() else D47();
  D47():
    deopt 164 [];
  L61():
    p46 = prom<V +>{
      readLines = ldf readLines;
      p45 = prom<V +>{
        file_path = ldf `file.path`;
        p44 = prom<V +>{
          R_home = ldf `R.home`;
          r85 = dyn R_home();
          return r85;
        };
        r87 = dyn file_path(p44, "doc", "NEWS.2");
        return r87;
      };
      r89 = dyn readLines(p45);
      return r89;
    };
    r91 = dyn head(p46, 100.0);
    check L62() else D48();
  D48():
    deopt 167 [r91];
  L62():
    st NEWS = r91;
    gregexec1 = ldf gregexec;
    check L63() else D49();
  D49():
    deopt 170 [];
  L63():
    p47 = prom<V +>{
      NEWS = ld NEWS;
      NEWS1 = force? NEWS;
      checkMissing(NEWS1);
      return NEWS1;
    };
    r93 = dyn gregexec1[, , perl]("(?<fun>\\w+)\\((?<args>[^)]*)\\)", p47, TRUE);
    check L64() else D50();
  D50():
    deopt 175 [r93];
  L64():
    st m = r93;
    regmatches10 = ldf regmatches;
    check L65() else D51();
  D51():
    deopt 178 [];
  L65():
    p48 = prom<V +>{
      NEWS2 = ld NEWS;
      NEWS3 = force? NEWS2;
      checkMissing(NEWS3);
      return NEWS3;
    };
    p49 = prom<V +>{
      m26 = ld m;
      m27 = force? m26;
      checkMissing(m27);
      return m27;
    };
    r96 = dyn regmatches10(p48, p49);
    check L66() else D52();
  D52():
    deopt 181 [r96];
  L66():
    st y = r96;
    y2 = ld y;
    check L67() else D53();
  D53():
    deopt 183 [y2];
  L67():
    y3 = force? y2;
    checkMissing(y3);
    c2 = `is.object`(y3);
    if c2 then L68() else L69(y3);
  L4():
    as_data_frame = ldf `as.data.frame`;
    check L71() else D54();
  L68():
    dr = tryDispatchBuiltin.1("[[", y3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L70() else L69(dr);
  L69(y5):
    __ = ldf `[[` in base;
    r97 = dyn __(y5, 16.0);
    goto L4();
  D54():
    deopt 189 [];
  L70():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4();
  L71():
    p53 = prom<V +>{
      t = ldf t;
      p52 = prom<V +>{
        do_call = ldf `do.call`;
        p50 = prom<V +>{
          cbind = ld cbind;
          cbind1 = force? cbind;
          checkMissing(cbind1);
          return cbind1;
        };
        p51 = prom<V +>{
          y6 = ld y;
          y7 = force? y6;
          checkMissing(y7);
          return y7;
        };
        r100 = dyn do_call(p50, p51);
        return r100;
      };
      r102 = dyn t(p52);
      return r102;
    };
    r104 = dyn as_data_frame(p53);
    check L72() else D55();
  D55():
    deopt 191 [r104];
  L72():
    st mdat = r104;
    cbind2 = ldf cbind;
    check L73() else D56();
  D56():
    deopt 194 [];
  L73():
    p54 = prom<V +>{
      mdat = ld mdat;
      mdat1 = force? mdat;
      checkMissing(mdat1);
      return mdat1;
    };
    p55 = prom<V +>{
      sym4 = ldf rep;
      base4 = ldf rep in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      rep = ldf rep in base;
      r108 = dyn rep(<lang seq_along(y)>, <lang `/`(lengths(y), ncol(mdat))>);
      goto L0(r108);
    L2():
      r106 = dyn base4(<lang seq_along(y)>, <lang `/`(lengths(y), ncol(mdat))>);
      goto L0(r106);
    };
    r110 = dyn cbind2[, line](p54, p55);
    check L74() else D57();
  D57():
    deopt 198 [r110];
  L74():
    st mdat = r110;
    head1 = ldf head;
    check L75() else D58();
  D58():
    deopt 201 [];
  L75():
    p56 = prom<V +>{
      mdat2 = ld mdat;
      mdat3 = force? mdat2;
      checkMissing(mdat3);
      return mdat3;
    };
    r112 = dyn head1(p56);
    check L76() else D59();
  D59():
    deopt 203 [r112];
  L76():
    NEWS4 = ld NEWS;
    check L77() else D60();
  D60():
    deopt 204 [NEWS4];
  L77():
    NEWS5 = force? NEWS4;
    checkMissing(NEWS5);
    c3 = `is.object`(NEWS5);
    if c3 then L78() else L79(NEWS5);
  L5(dx3):
    popenv;
    return dx3;
  L78():
    dr2 = tryDispatchBuiltin.1("[", NEWS5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(dr2);
  L79(NEWS7):
    head2 = ldf head;
    check L81() else D61();
  D61():
    deopt 207 [NEWS7];
  L80():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L81():
    p57 = prom<V +>{
      mdat4 = ld mdat;
      mdat5 = force? mdat4;
      checkMissing(mdat5);
      c4 = `is.object`(mdat5);
      if c4 then L1() else L2(mdat5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", mdat5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(mdat7):
      __1 = ldf `[[` in base;
      r113 = dyn __1(mdat7, "line");
      goto L0(r113);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r115 = dyn head2(p57);
    check L82() else D62();
  D62():
    deopt 209 [NEWS7, r115];
  L82():
    __2 = ldf `[` in base;
    r116 = dyn __2(NEWS7, r115);
    goto L5(r116);
  }
}
fun inner1645952209(x, m, invert) {
  (reg x:*, reg m:*, reg invert:*) -+> V { var x:*, var m:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg m1:*, reg m2:V, reg length1:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r10:V, reg p:p(V +), reg sQuote1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg m3:*, reg m4:V, reg is_list:cls, reg r20:V, reg ili:*, reg ili1:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg unlist:cls, reg lapply:cls, reg m5:*, reg m6:V, reg p3:p(V +), reg attr:*, reg attr1:V, reg p4:p(V +), reg r25:V, reg p5:p(V +), reg r27:V, reg r28:V, reg any:cls, reg r29:V, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg m7:*, reg m8:V, reg attr2:cls, reg r34:V, reg r35:V, reg any1:cls, reg r36:V, reg useBytes:*, reg useBytes1:V, reg c2:L, reg l:*, reg Encoding__:cls, reg r37:V, reg ili2:*, reg ili3:V, reg r39:V, reg c3:L, reg c5:V, reg isFALSE:cls, reg invert1:*, reg invert2:V, reg p6:p(V +), reg r41:V, reg c6:L, reg c7:V, reg c9:L, reg m9:*, reg m10:V, reg c10:L, reg m12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg m15:V, reg r43:V, reg m16:*, reg m17:V, reg is_na:cls, reg r44:V, reg r45:V, reg m18:*, reg m19:V, reg r46:V, reg r47:V, reg __:cls, reg r48:V, reg so:*, reg so1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg so4:V, reg r50:V, reg m20:*, reg m21:V, reg attr3:cls, reg r51:V, reg c11:L, reg so6:V, reg r53:V, reg dr2:V, reg dc1:L, reg dx2:V, reg so8:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r54:V, reg r55:V, reg r56:V, reg substring:cls, reg x3:*, reg x4:V, reg c12:L, reg x6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r57:V, reg p7:p(V +), reg so9:*, reg so10:V, reg p8:p(V +), reg eo:*, reg eo1:V, reg p9:p(V +), reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg invert3:*, reg invert4:V, reg is_na1:cls, reg r66:V, reg c13:L, reg Map:cls, reg r67:cls, reg p10:p(V +), reg x7:*, reg x8:V, reg p11:p(V +), reg m22:*, reg m23:V, reg p12:p(V +), reg ili4:*, reg ili5:V, reg c14:L, reg lapply1:cls, reg m24:*, reg m25:V, reg p13:p(V +), reg attr4:*, reg attr5:V, reg p14:p(V +), reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg m26:*, reg m27:V, reg attr6:cls, reg r76:V, reg p15:p(V +), reg r78:V, reg r79:V, reg invert5:*, reg invert6:V, reg c15:L, reg Map1:cls, reg r80:cls, reg p16:p(V +), reg x9:*, reg x10:V, reg p17:p(V +), reg m28:*, reg m29:V, reg p18:p(V +), reg ili6:*, reg ili7:V, reg c16:L, reg lapply2:cls, reg m30:*, reg m31:V, reg p19:p(V +), reg attr7:*, reg attr8:V, reg p20:p(V +), reg r86:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg r88:V, reg m32:*, reg m33:V, reg attr9:cls, reg r89:V, reg p21:p(V +), reg r91:V, reg Map2:cls, reg r92:cls, reg p22:p(V +), reg x11:*, reg x12:V, reg p23:p(V +), reg m34:*, reg m35:V, reg p24:p(V +), reg lapply3:cls, reg m36:*, reg m37:V, reg p25:p(V +), reg attr10:*, reg attr11:V, reg p26:p(V +), reg r98:V, reg p27:p(V +), reg r100:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg r102:V, reg x13:*, reg x14:V, reg names:cls, reg r103:V, reg l1:*, reg names__:cls, reg r104:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st m = m;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L0(FALSE) else L0(invert);
  L0(invert_orDefault):
    st invert = invert_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L1(r1):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r6, r7):
    r9 = `!=`(r6, r7);
    c = `as.logical`(r9);
    if c then L32() else L3();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L27() else D1();
  L28():
    m1 = ld m;
    check L30() else D2();
  L29():
    r5 = dyn base1(<sym m>);
    goto L2(r1, r5);
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [r1, m1];
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L27():
    goto L1(r2);
  L30():
    m2 = force? m1;
    checkMissing(m2);
    length1 = ldf length in base;
    r8 = dyn length1(m2);
    check L31() else D3();
  L32():
    stop = ldf stop;
    check L33() else D4();
  D3():
    deopt 10 [r1, r8];
  D4():
    deopt 13 [];
  L5(r19):
    st ili = r19;
    st itype = "chars";
    ili = ld ili;
    check L40() else D8();
  L31():
    goto L2(r1, r8);
  L33():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sQuote = ldf sQuote;
        r10 = dyn sQuote("x");
        return r10;
      };
      p1 = prom<V +>{
        sQuote1 = ldf sQuote;
        r12 = dyn sQuote1("m");
        return r12;
      };
      r14 = dyn gettextf("%s and %s must have the same length", p, p1);
      return r14;
    };
    r16 = dyn stop[, domain](p2, NA_LGL);
    check L34() else D5();
  L36():
    m3 = ld m;
    check L38() else D6();
  L37():
    r18 = dyn base2(<sym m>);
    goto L5(r18);
  D5():
    deopt 17 [r16];
  D6():
    deopt 22 [m3];
  D8():
    deopt 30 [ili];
  L34():
    goto L4();
  L38():
    m4 = force? m3;
    checkMissing(m4);
    is_list = ldf `is.list` in base;
    r20 = dyn is_list(m4);
    check L39() else D7();
  L40():
    ili1 = force? ili;
    checkMissing(ili1);
    c1 = `as.logical`(ili1);
    if c1 then L41() else L6();
  D7():
    deopt 25 [r20];
  L6():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L8(r30):
    st useBytes = r30;
    useBytes = ld useBytes;
    check L55() else D15();
  L39():
    goto L5(r20);
  L41():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D15():
    deopt 56 [useBytes];
  L7(r22):
    goto L8(r22);
  L42():
    unlist = ldf unlist;
    check L44() else D9();
  L43():
    r21 = dyn base3(<lang `==`(unlist(lapply(m, attr, "index.type")), "bytes")>);
    goto L7(r21);
  L48():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L49():
    r31 = dyn base4(<lang `==`(attr(m, "index.type"), "bytes")>);
    goto L8(r31);
  L55():
    useBytes1 = force? useBytes;
    checkMissing(useBytes1);
    c2 = `as.logical`(useBytes1);
    if c2 then L56() else L10();
  D9():
    deopt 35 [];
  L9(r33):
    r35 = `==`(r33, "bytes");
    any1 = ldf any in base;
    r36 = dyn any1(r35);
    check L54() else D14();
  L10():
    goto L11();
  L11():
    ili2 = ld ili;
    check L60() else D18();
  L44():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        m5 = ld m;
        m6 = force? m5;
        checkMissing(m6);
        return m6;
      };
      p4 = prom<V +>{
        attr = ld attr;
        attr1 = force? attr;
        checkMissing(attr1);
        return attr1;
      };
      r25 = dyn lapply(p3, p4, "index.type");
      return r25;
    };
    r27 = dyn unlist(p5);
    check L45() else D10();
  L50():
    m7 = ld m;
    check L52() else D12();
  L51():
    r32 = dyn base5(<sym m>, "index.type");
    goto L9(r32);
  L56():
    l = ld x;
    Encoding__ = ldf `Encoding<-`;
    check L57() else D16();
  D10():
    deopt 37 [r27];
  D12():
    deopt 46 [m7];
  D14():
    deopt 54 [r36];
  D16():
    deopt 61 ["bytes", l, "bytes"];
  D18():
    deopt 68 [ili2];
  L45():
    r28 = `==`(r27, "bytes");
    any = ldf any in base;
    r29 = dyn any(r28);
    check L46() else D11();
  L52():
    m8 = force? m7;
    checkMissing(m8);
    attr2 = ldf attr in base;
    r34 = dyn attr2(m8, "index.type");
    check L53() else D13();
  L54():
    goto L8(r36);
  L57():
    r37 = dyn Encoding__(l, NULL, "bytes");
    check L58() else D17();
  L60():
    ili3 = force? ili2;
    checkMissing(ili3);
    r39 = `!`(ili3);
    c3 = `as.logical`(r39);
    if c3 then L61() else L12(c3);
  D11():
    deopt 41 [r29];
  D13():
    deopt 50 [r34];
  D17():
    deopt 63 ["bytes", r37];
  L12(c5):
    c9 = `as.logical`(c5);
    if c9 then L65() else L13();
  L46():
    goto L7(r29);
  L53():
    goto L9(r34);
  L58():
    st x = r37;
    st itype = "bytes";
    goto L11();
  L61():
    isFALSE = ldf isFALSE;
    check L62() else D19();
  D19():
    deopt 72 [c3];
  L13():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L62():
    p6 = prom<V +>{
      invert1 = ld invert;
      invert2 = force? invert1;
      checkMissing(invert2);
      return invert2;
    };
    r41 = dyn isFALSE(p6);
    check L63() else D20();
  L65():
    m9 = ld m;
    check L66() else D21();
  D20():
    deopt 74 [c3, r41];
  D21():
    deopt 76 [m9];
  L19(r65):
    c13 = `as.logical`(r65);
    if c13 then L92() else L20();
  L63():
    c6 = `as.logical`(r41);
    c7 = `&&`(c3, c6);
    goto L12(c7);
  L66():
    m10 = force? m9;
    checkMissing(m10);
    c10 = `is.object`(m10);
    if c10 then L67() else L68(m10);
  L88():
    invert3 = ld invert;
    check L90() else D31();
  L89():
    r64 = dyn base8(<sym invert>);
    goto L19(r64);
  D31():
    deopt 118 [invert3];
  L14(dx1):
    st so = dx1;
    so = ld so;
    check L75() else D25();
  L20():
    invert5 = ld invert;
    check L96() else D35();
  L21(r79):
    st y = r79;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L103() else L104();
  L67():
    dr = tryDispatchBuiltin.1("[", m10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L69() else L68(dr);
  L68(m12):
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L90():
    invert4 = force? invert3;
    checkMissing(invert4);
    is_na1 = ldf `is.na` in base;
    r66 = dyn is_na1(invert4);
    check L91() else D32();
  L92():
    Map = ldf Map;
    check L93() else D33();
  D25():
    deopt 92 [so];
  D32():
    deopt 121 [r66];
  D33():
    deopt 123 [];
  D35():
    deopt 131 [invert5];
  L15(m15, r43):
    r45 = `!`(r43);
    m18 = ld m;
    check L74() else D24();
  L23(r102):
    l1 = ld y;
    names__ = ldf `names<-`;
    check L107() else D42();
  L69():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L70():
    m16 = ld m;
    check L72() else D22();
  L71():
    r42 = dyn base6(<sym m>);
    goto L15(m12, r42);
  L75():
    so1 = force? so;
    checkMissing(so1);
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L91():
    goto L19(r66);
  L93():
    p10 = prom<V +>{
      r67 = clos inner253950164;
      return r67;
    };
    p11 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p12 = prom<V +>{
      m22 = ld m;
      m23 = force? m22;
      checkMissing(m23);
      return m23;
    };
    p15 = prom<V +>{
      ili4 = ld ili;
      ili5 = force? ili4;
      checkMissing(ili5);
      c14 = `as.logical`(ili5);
      if c14 then L2() else L0();
    L0():
      sym9 = ldf attr;
      base9 = ldf attr in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L2():
      lapply1 = ldf lapply;
      p13 = prom<V +>{
        m24 = ld m;
        m25 = force? m24;
        checkMissing(m25);
        return m25;
      };
      p14 = prom<V +>{
        attr4 = ld attr;
        attr5 = force? attr4;
        checkMissing(attr5);
        return attr5;
      };
      r73 = dyn lapply1(p13, p14, "match.length");
      return r73;
    L1(r75):
      return r75;
    L4():
      m26 = ld m;
      m27 = force? m26;
      checkMissing(m27);
      attr6 = ldf attr in base;
      r76 = dyn attr6(m27, "match.length");
      goto L1(r76);
    L5():
      r74 = dyn base9(<sym m>, "match.length");
      goto L1(r74);
    };
    r78 = dyn Map[, , , , `USE.NAMES`](p10, p11, p12, p15, FALSE);
    check L94() else D34();
  L96():
    invert6 = force? invert5;
    checkMissing(invert6);
    c15 = `as.logical`(invert6);
    if c15 then L97() else L22();
  L103():
    x13 = ld x;
    check L105() else D40();
  L104():
    r101 = dyn base11(<sym x>);
    goto L23(r101);
  D22():
    deopt 80 [m12, m16];
  D24():
    deopt 84 [m15, r45, m18];
  D34():
    deopt 130 [r78];
  D40():
    deopt 154 [x13];
  D42():
    deopt 159 [r102, l1, r102];
  L16(so4, r50):
    c11 = `is.object`(r50);
    if c11 then L80() else L81(so4, r50);
  L22():
    Map2 = ldf Map;
    check L101() else D38();
  L72():
    m17 = force? m16;
    checkMissing(m17);
    is_na = ldf `is.na` in base;
    r44 = dyn is_na(m17);
    check L73() else D23();
  L74():
    m19 = force? m18;
    checkMissing(m19);
    r46 = `>`(m19, -1);
    r47 = `&&`(r45, r46);
    st ind = r47;
    __ = ldf `[` in base;
    r48 = dyn __(m15, r47);
    goto L14(r48);
  L76():
    m20 = ld m;
    check L78() else D26();
  L77():
    r49 = dyn base7(<sym m>, "match.length");
    goto L16(so1, r49);
  L94():
    goto L21(r78);
  L97():
    Map1 = ldf Map;
    check L98() else D36();
  L105():
    x14 = force? x13;
    checkMissing(x14);
    names = ldf names in base;
    r103 = dyn names(x14);
    check L106() else D41();
  L107():
    r104 = dyn names__(l1, NULL, r102);
    check L108() else D43();
  D23():
    deopt 83 [m12, r44];
  D26():
    deopt 95 [so1, m20];
  D36():
    deopt 134 [];
  D38():
    deopt 143 [];
  D41():
    deopt 157 [r103];
  D43():
    deopt 161 [r102, r104];
  L17(so8, dx3):
    r55 = `+`(so8, dx3);
    r56 = `-`(r55, 1);
    st eo = r56;
    substring = ldf substring;
    check L84() else D29();
  L73():
    goto L15(m12, r44);
  L78():
    m21 = force? m20;
    checkMissing(m21);
    attr3 = ldf attr in base;
    r51 = dyn attr3(m21, "match.length");
    check L79() else D27();
  L80():
    dr2 = tryDispatchBuiltin.1("[", r50);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L82() else L81(so4, dr2);
  L81(so6, r53):
    ind = ld ind;
    check L83() else D28();
  L98():
    p16 = prom<V +>{
      r80 = clos inner253950164;
      return r80;
    };
    p17 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p18 = prom<V +>{
      m28 = ld m;
      m29 = force? m28;
      checkMissing(m29);
      return m29;
    };
    p21 = prom<V +>{
      ili6 = ld ili;
      ili7 = force? ili6;
      checkMissing(ili7);
      c16 = `as.logical`(ili7);
      if c16 then L2() else L0();
    L0():
      sym10 = ldf attr;
      base10 = ldf attr in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L2():
      lapply2 = ldf lapply;
      p19 = prom<V +>{
        m30 = ld m;
        m31 = force? m30;
        checkMissing(m31);
        return m31;
      };
      p20 = prom<V +>{
        attr7 = ld attr;
        attr8 = force? attr7;
        checkMissing(attr8);
        return attr8;
      };
      r86 = dyn lapply2(p19, p20, "match.length");
      return r86;
    L1(r88):
      return r88;
    L4():
      m32 = ld m;
      m33 = force? m32;
      checkMissing(m33);
      attr9 = ldf attr in base;
      r89 = dyn attr9(m33, "match.length");
      goto L1(r89);
    L5():
      r87 = dyn base10(<sym m>, "match.length");
      goto L1(r87);
    };
    r91 = dyn Map1[, , , , `USE.NAMES`](p16, p17, p18, p21, FALSE);
    check L99() else D37();
  L101():
    p22 = prom<V +>{
      r92 = clos inner253950164;
      return r92;
    };
    p23 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p24 = prom<V +>{
      m34 = ld m;
      m35 = force? m34;
      checkMissing(m35);
      return m35;
    };
    p27 = prom<V +>{
      lapply3 = ldf lapply;
      p25 = prom<V +>{
        m36 = ld m;
        m37 = force? m36;
        checkMissing(m37);
        return m37;
      };
      p26 = prom<V +>{
        attr10 = ld attr;
        attr11 = force? attr10;
        checkMissing(attr11);
        return attr11;
      };
      r98 = dyn lapply3(p25, p26, "match.length");
      return r98;
    };
    r100 = dyn Map2[, , , , `USE.NAMES`](p22, p23, p24, p27, FALSE);
    check L102() else D39();
  L106():
    goto L23(r103);
  L108():
    st y = r104;
    y = ld y;
    check L109() else D44();
  D27():
    deopt 99 [so1, r51];
  D28():
    deopt 100 [so6, r53, ind];
  D29():
    deopt 108 [];
  D37():
    deopt 141 [r91];
  D39():
    deopt 150 [r100];
  D44():
    deopt 163 [y];
  L79():
    goto L16(so1, r51);
  L82():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(so4, dx2);
  L83():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r54 = dyn __1(r53, ind1);
    goto L17(so6, r54);
  L84():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c12 = `is.object`(x4);
      if c12 then L1() else L2(x4);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x4);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x6):
      ind2 = ld ind;
      ind3 = force? ind2;
      __2 = ldf `[` in base;
      r57 = dyn __2(x6, ind3);
      goto L0(r57);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p8 = prom<V +>{
      so9 = ld so;
      so10 = force? so9;
      checkMissing(so10);
      return so10;
    };
    p9 = prom<V +>{
      eo = ld eo;
      eo1 = force? eo;
      checkMissing(eo1);
      return eo1;
    };
    r61 = dyn substring(p7, p8, p9);
    check L85() else D30();
  L99():
    goto L21(r91);
  L102():
    goto L21(r100);
  L109():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D30():
    deopt 112 [r61];
  L85():
    popenv;
    return r61;
  }
}
fun inner253950164(u, so, ml) {
  (reg u:*, reg so:*, reg ml:*) -+> V { var u:*, var so:*, var ml:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg so1:*, reg so2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg so3:*, reg so4:V, reg is_na:cls, reg r6:V, reg c1:L, reg so5:*, reg so6:V, reg r9:V, reg c2:L, reg u1:*, reg u2:V, reg so7:*, reg so8:V, reg ml1:*, reg ml2:V, reg r12:V, reg r13:V, reg n:*, reg n1:V, reg r14:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg eo:*, reg eo1:V, reg c4:L, reg eo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n2:*, reg n3:V, reg r17:V, reg __:cls, reg r18:V, reg so9:*, reg so10:V, reg c5:L, reg dx3:V, reg so12:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r19:V, reg r20:V, reg any:cls, reg r21:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r22:V, reg p:p(V +), reg r24:V, reg p1:p(V +), reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg rbind:cls, reg so13:*, reg so14:V, reg p2:p(V +), reg eo4:*, reg eo5:V, reg r34:V, reg p3:p(V +), reg r36:V, reg c7:cls, reg r37:V, reg c8:cls, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg rbind1:cls, reg so15:*, reg so16:V, reg r43:V, reg p4:p(V +), reg eo6:*, reg eo7:V, reg p5:p(V +), reg r46:V, reg c9:cls, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg u3:*, reg u4:V, reg itype:*, reg itype1:V, reg nchar:cls, reg r50:V, reg c10:cls, reg r51:V, reg substring:cls, reg u5:*, reg u6:V, reg p6:p(V +), reg beg:*, reg beg1:V, reg p7:p(V +), reg end:*, reg end1:V, reg p8:p(V +), reg r55:V |
    mkenv;
    st u = u;
    st so = so;
    st ml = ml;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    st n = r1;
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L23() else L1();
  L19():
    so1 = ld so;
    check L21() else D0();
  L20():
    r = dyn base(<sym so>);
    goto L0(r);
  D0():
    deopt 2 [so1];
  L1():
    goto L6();
  L6():
    so7 = ld so;
    check L37() else D6();
  L21():
    so2 = force? so1;
    checkMissing(so2);
    length = ldf length in base;
    r2 = dyn length(so2);
    check L22() else D1();
  L23():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D1():
    deopt 5 [r2];
  D6():
    deopt 29 [so7];
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L28() else L3();
  L22():
    goto L0(r2);
  L24():
    so3 = ld so;
    check L26() else D2();
  L25():
    r4 = dyn base1(<sym so>);
    goto L2(r4);
  L37():
    so8 = force? so7;
    checkMissing(so8);
    ml1 = ld ml;
    check L38() else D7();
  D2():
    deopt 11 [so3];
  D7():
    deopt 30 [so8, ml1];
  L3():
    so5 = ld so;
    check L31() else D4();
  L26():
    so4 = force? so3;
    checkMissing(so4);
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(so4);
    check L27() else D3();
  L28():
    popenv;
    return NA_STR;
  L38():
    ml2 = force? ml1;
    checkMissing(ml2);
    r12 = `+`(so8, ml2);
    r13 = `-`(r12, 1);
    st eo = r13;
    n = ld n;
    check L39() else D8();
  D3():
    deopt 14 [r6];
  D4():
    deopt 18 [so5];
  D8():
    deopt 36 [n];
  L27():
    goto L2(r6);
  L31():
    so6 = force? so5;
    checkMissing(so6);
    r9 = `==`(so6, -1);
    c2 = `as.logical`(r9);
    if c2 then L32() else L5();
  L39():
    n1 = force? n;
    checkMissing(n1);
    r14 = `>`(n1, 1);
    c3 = `as.logical`(r14);
    if c3 then L40() else L7();
  L5():
    goto L6();
  L7():
    goto L13();
  L13():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L32():
    u1 = ld u;
    check L33() else D5();
  L40():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D5():
    deopt 22 [u1];
  L8(r16):
    c6 = `as.logical`(r16);
    if c6 then L53() else L11();
  L14(r30):
    st beg = r30;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L33():
    u2 = force? u1;
    checkMissing(u2);
    popenv;
    return u2;
  L41():
    eo = ld eo;
    check L43() else D9();
  L42():
    r15 = dyn base2(<lang `>=`(`[`(eo, `-`(n)), `[`(so, `-`(1)))>);
    goto L8(r15);
  L58():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L59():
    r29 = dyn base3(1, <lang c(rbind(so, `+`(eo, 1)))>);
    goto L14(r29);
  D9():
    deopt 42 [eo];
  L11():
    goto L12(NULL);
  L12(r27):
    goto L13();
  L15(r32):
    c8 = ldf c in base;
    r38 = dyn c8(1, r32);
    check L65() else D18();
  L16(r40):
    st end = r40;
    substring = ldf substring;
    check L79() else D26();
  L43():
    eo1 = force? eo;
    checkMissing(eo1);
    c4 = `is.object`(eo1);
    if c4 then L44() else L45(eo1);
  L53():
    stop = ldf stop;
    check L54() else D13();
  L60():
    rbind = ldf rbind;
    check L62() else D15();
  L61():
    r31 = dyn base4(<lang rbind(so, `+`(eo, 1))>);
    goto L15(r31);
  L66():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L67():
    r39 = dyn base5(<lang c(rbind(`-`(so, 1), eo))>, <lang nchar(u, itype)>);
    goto L16(r39);
  D13():
    deopt 56 [];
  D15():
    deopt 71 [];
  D18():
    deopt 78 [r38];
  D26():
    deopt 105 [];
  L9(dx1):
    so9 = ld so;
    check L48() else D11();
  L17(r42):
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L44():
    dr = tryDispatchBuiltin.1("[", eo1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(eo3):
    n2 = ld n;
    check L47() else D10();
  L54():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sQuote = ldf sQuote;
        r22 = dyn sQuote("invert = NA");
        return r22;
      };
      r24 = dyn gettextf("need non-overlapping matches for %s", p);
      return r24;
    };
    r26 = dyn stop[, domain](p1, NA_LGL);
    check L55() else D14();
  L62():
    p2 = prom<V +>{
      so13 = ld so;
      so14 = force? so13;
      checkMissing(so14);
      return so14;
    };
    p3 = prom<V +>{
      eo4 = ld eo;
      eo5 = force? eo4;
      checkMissing(eo5);
      r34 = `+`(eo5, 1);
      return r34;
    };
    r36 = dyn rbind(p2, p3);
    check L63() else D16();
  L65():
    goto L14(r38);
  L68():
    rbind1 = ldf rbind;
    check L70() else D19();
  L69():
    r41 = dyn base6(<lang rbind(`-`(so, 1), eo)>);
    goto L17(r41);
  L79():
    p6 = prom<V +>{
      u5 = ld u;
      u6 = force? u5;
      checkMissing(u6);
      return u6;
    };
    p7 = prom<V +>{
      beg = ld beg;
      beg1 = force? beg;
      checkMissing(beg1);
      return beg1;
    };
    p8 = prom<V +>{
      end = ld end;
      end1 = force? end;
      checkMissing(end1);
      return end1;
    };
    r55 = dyn substring(p6, p7, p8);
    check L80() else D27();
  D10():
    deopt 44 [eo3, n2];
  D11():
    deopt 47 [dx1, so9];
  D14():
    deopt 60 [r26];
  D16():
    deopt 74 [r36];
  D19():
    deopt 85 [];
  D27():
    deopt 109 [r55];
  L18(r49):
    c10 = ldf c in base;
    r51 = dyn c10(r42, r49);
    check L78() else D25();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L47():
    n3 = force? n2;
    checkMissing(n3);
    r17 = `-`(<missing>, n3);
    __ = ldf `[` in base;
    r18 = dyn __(eo3, r17);
    goto L9(r18);
  L48():
    so10 = force? so9;
    checkMissing(so10);
    c5 = `is.object`(so10);
    if c5 then L49() else L50(dx1, so10);
  L55():
    goto L12(r26);
  L63():
    c7 = ldf c in base;
    r37 = dyn c7(r36);
    check L64() else D17();
  L70():
    p4 = prom<V +>{
      so15 = ld so;
      so16 = force? so15;
      checkMissing(so16);
      r43 = `-`(so16, 1);
      return r43;
    };
    p5 = prom<V +>{
      eo6 = ld eo;
      eo7 = force? eo6;
      checkMissing(eo7);
      return eo7;
    };
    r46 = dyn rbind1(p4, p5);
    check L71() else D20();
  L73():
    u3 = ld u;
    check L75() else D22();
  L74():
    r48 = dyn base7(<sym u>, <sym itype>);
    goto L18(r48);
  L80():
    popenv;
    return r55;
  D17():
    deopt 76 [r37];
  D20():
    deopt 88 [r46];
  D22():
    deopt 93 [u3];
  D25():
    deopt 102 [r51];
  L10(dx6, dx7):
    r20 = `>=`(dx6, dx7);
    any = ldf any in base;
    r21 = dyn any(r20);
    check L52() else D12();
  L49():
    dr2 = tryDispatchBuiltin.1("[", so10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dx1, dr2);
  L50(dx3, so12):
    __1 = ldf `[` in base;
    r19 = dyn __1(so12, -1);
    goto L10(dx3, r19);
  L64():
    goto L15(r37);
  L71():
    c9 = ldf c in base;
    r47 = dyn c9(r46);
    check L72() else D21();
  L75():
    u4 = force? u3;
    checkMissing(u4);
    itype = ld itype;
    check L76() else D23();
  L78():
    goto L16(r51);
  D12():
    deopt 54 [r21];
  D21():
    deopt 90 [r47];
  D23():
    deopt 95 [itype];
  L51():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx1, dx5);
  L52():
    goto L8(r21);
  L72():
    goto L17(r47);
  L76():
    itype1 = force? itype;
    checkMissing(itype1);
    nchar = ldf nchar in base;
    r50 = dyn nchar(u4, itype1, FALSE, NA_LGL);
    check L77() else D24();
  D24():
    deopt 100 [r50];
  L77():
    goto L18(r50);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg strrep:cls, reg n1:*, reg n2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st n = n;
    strrep = ldf strrep;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r1 = dyn strrep(" ", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg anyNA:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg r6:V, reg all:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg attr:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x7:*, reg x8:V, reg is_matrix:cls, reg r13:V, reg c10:L, reg x9:*, reg x10:V, reg c11:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg x13:*, reg x14:V, reg c12:L, reg x16:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg ml:*, reg ml1:V, reg is_matrix1:cls, reg r18:V, reg c13:L, reg ml2:*, reg ml3:V, reg c14:L, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r19:V, reg dx7:V, reg ml6:*, reg ml7:V, reg c15:L, reg ml9:V, reg dr6:V, reg dc3:L, reg dx8:V, reg __3:cls, reg r20:V, reg l:*, reg attr__:cls, reg r21:V, reg x17:*, reg x18:V |
    mkenv;
    st x = x;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L19() else L1(c);
  L15():
    x1 = ld x;
    check L17() else D0();
  L16():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L25() else L3();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(x2);
    check L18() else D1();
  L19():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L14();
  L14():
    x17 = ld x;
    check L61() else D16();
  L18():
    goto L0(r2);
  L20():
    x3 = ld x;
    check L22() else D2();
  L21():
    r4 = dyn base1(<lang `>`(x, 0.0)>);
    goto L2(c, r4);
  L25():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D2():
    deopt 9 [c, x3];
  D16():
    deopt 70 [x17];
  L4(r9):
    st ml = r9;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    r6 = `>`(x4, 0.0);
    all = ldf all in base;
    r7 = dyn all(r6);
    check L23() else D3();
  L26():
    x5 = ld x;
    check L28() else D4();
  L27():
    r8 = dyn base2(<sym x>, "match.length");
    goto L4(r8);
  L61():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D3():
    deopt 14 [c, r7];
  D4():
    deopt 18 [x5];
  L5(r12):
    c10 = `as.logical`(r12);
    if c10 then L34() else L6();
  L23():
    goto L2(c, r7);
  L28():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r10 = dyn attr(x6, "match.length");
    check L29() else D5();
  L30():
    x7 = ld x;
    check L32() else D6();
  L31():
    r11 = dyn base3(<sym x>);
    goto L5(r11);
  D5():
    deopt 22 [r10];
  D6():
    deopt 26 [x7];
  L6():
    x13 = ld x;
    check L40() else D9();
  L8():
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L29():
    goto L4(r10);
  L32():
    x8 = force? x7;
    checkMissing(x8);
    is_matrix = ldf `is.matrix` in base;
    r13 = dyn is_matrix(x8);
    check L33() else D7();
  L34():
    x9 = ld x;
    check L35() else D8();
  D7():
    deopt 29 [r13];
  D8():
    deopt 30 [x9];
  D9():
    deopt 38 [x13];
  L10(r17):
    c13 = `as.logical`(r17);
    if c13 then L48() else L11();
  L33():
    goto L5(r13);
  L35():
    x10 = force? x9;
    checkMissing(x10);
    c11 = `is.object`(x10);
    if c11 then L36() else L37();
  L40():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L41() else L42(x14);
  L44():
    ml = ld ml;
    check L46() else D10();
  L45():
    r16 = dyn base4(<sym ml>);
    goto L10(r16);
  D10():
    deopt 46 [ml];
  L7(dx1):
    st x = dx1;
    goto L8();
  L9(dx4):
    st x = dx4;
    goto L8();
  L11():
    ml6 = ld ml;
    check L54() else D13();
  L13(dx7):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L58() else D14();
  L36():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37();
  L37():
    __ = ldf `[` in base;
    r14 = dyn __(x10, -1.0, <missing>);
    goto L7(r14);
  L41():
    dr2 = tryDispatchBuiltin.1("[", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(x16):
    __1 = ldf `[` in base;
    r15 = dyn __1(x16, -1.0);
    goto L9(r15);
  L46():
    ml1 = force? ml;
    checkMissing(ml1);
    is_matrix1 = ldf `is.matrix` in base;
    r18 = dyn is_matrix1(ml1);
    check L47() else D11();
  L48():
    ml2 = ld ml;
    check L49() else D12();
  D11():
    deopt 49 [r18];
  D12():
    deopt 50 [ml2];
  D13():
    deopt 57 [ml6];
  D14():
    deopt 63 [dx7, l, dx7];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L43():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx3);
  L47():
    goto L10(r18);
  L49():
    ml3 = force? ml2;
    checkMissing(ml3);
    c14 = `is.object`(ml3);
    if c14 then L50() else L51();
  L54():
    ml7 = force? ml6;
    checkMissing(ml7);
    c15 = `is.object`(ml7);
    if c15 then L55() else L56(ml7);
  L58():
    r21 = dyn attr__(l, NULL, "match.length", dx7);
    check L59() else D15();
  D15():
    deopt 66 [dx7, r21];
  L12(dx6):
    goto L13(dx6);
  L50():
    dr4 = tryDispatchBuiltin.1("[", ml3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51();
  L51():
    __2 = ldf `[` in base;
    r19 = dyn __2(ml3, -1.0, <missing>);
    goto L12(r19);
  L55():
    dr6 = tryDispatchBuiltin.1("[", ml7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dr6);
  L56(ml9):
    __3 = ldf `[` in base;
    r20 = dyn __3(ml9, -1.0);
    goto L13(r20);
  L59():
    st x = r21;
    goto L14();
  L52():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx5);
  L57():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx8);
  }
}