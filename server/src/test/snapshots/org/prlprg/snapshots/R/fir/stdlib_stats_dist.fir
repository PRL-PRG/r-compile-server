fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg matrix:cls, reg rnorm:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg dist:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r9:V, reg dist1:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r11:V, reg dist2:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg r13:V, reg as_matrix:cls, reg dist3:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg as_dist:cls, reg m:*, reg m1:V, reg p7:p(V +), reg r19:V, reg stopifnot:cls, reg d:*, reg d1:V, reg dist4:cls, reg x8:*, reg x9:V, reg p8:p(V +), reg r21:V, reg r22:V, reg p9:p(V +), reg r24:V, reg as_dist1:cls, reg cor:cls, reg USJudgeRatings:*, reg USJudgeRatings1:V, reg p10:p(V +), reg r26:V, reg r27:V, reg r28:V, reg p11:p(V +), reg r30:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg round:cls, reg r33:V, reg plot:cls, reg hclust:cls, reg dd:*, reg dd1:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg c:cls, reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg c1:cls, reg r43:V, reg dist5:cls, reg rbind:cls, reg x10:*, reg x11:V, reg p14:p(V +), reg y:*, reg y1:V, reg p15:p(V +), reg r46:V, reg p16:p(V +), reg r48:V, reg dist6:cls, reg rbind1:cls, reg x12:*, reg x13:V, reg p17:p(V +), reg y2:*, reg y3:V, reg p18:p(V +), reg r51:V, reg p19:p(V +), reg r53:V, reg labels:cls, reg eurodist:*, reg eurodist1:V, reg p20:p(V +), reg r55:V, reg l:*, reg c2:L, reg r57:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r60:V, reg rbind2:cls, reg x14:*, reg x15:V, reg p21:p(V +), reg y4:*, reg y5:V, reg p22:p(V +), reg r63:V, reg dist7:cls, reg m2:*, reg m3:V, reg p23:p(V +), reg r65:V, reg stopifnot1:cls, reg dist8:cls, reg m4:*, reg m5:V, reg p24:p(V +), reg r67:V, reg r68:V, reg p25:p(V +), reg dist9:cls, reg m6:*, reg m7:V, reg p26:p(V +), reg r71:V, reg r72:V, reg p27:p(V +), reg dist10:cls, reg m8:*, reg m9:V, reg p28:p(V +), reg r75:V, reg r76:V, reg p29:p(V +), reg r78:V, reg x16:*, reg x17:V, reg l3:*, reg c3:L, reg r80:R, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___1:cls, reg r83:V, reg stopifnot2:cls, reg dist11:cls, reg cbind:cls, reg x18:*, reg x19:V, reg p30:p(V +), reg y6:*, reg y7:V, reg p31:p(V +), reg r86:V, reg p32:p(V +), reg r88:V, reg print:cls, reg dist12:cls, reg cbind1:cls, reg x20:*, reg x21:V, reg p33:p(V +), reg y8:*, reg y9:V, reg p34:p(V +), reg r91:V, reg p35:p(V +), reg r93:V, reg p36:p(V +), reg r95:V, reg r96:V, reg p37:p(V +), reg r98:V, reg l6:*, reg c4:L, reg r100:R, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___2:cls, reg r103:V, reg dist13:cls, reg rbind3:cls, reg x22:*, reg x23:V, reg p38:p(V +), reg y10:*, reg y11:V, reg p39:p(V +), reg r106:V, reg p40:p(V +), reg r108:V, reg dist14:cls, reg rbind4:cls, reg x24:*, reg x25:V, reg p41:p(V +), reg y12:*, reg y13:V, reg p42:p(V +), reg r111:V, reg p43:p(V +), reg r113:V, reg dist15:cls, reg rbind5:cls, reg x26:*, reg x27:V, reg p44:p(V +), reg y14:*, reg y15:V, reg p45:p(V +), reg r116:V, reg p46:p(V +), reg r118:V, reg dist16:cls, reg rbind6:cls, reg x28:*, reg x29:V, reg p47:p(V +), reg y16:*, reg y17:V, reg p48:p(V +), reg r121:V, reg p49:p(V +), reg r123:V |
    mkenv;
    r = clos inner1692178838;
    st dist = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0():
    matrix = ldf matrix;
    check L11() else D2();
  L7():
    require = ldf require;
    check L9() else D0();
  L8():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L9():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L10() else D1();
  L11():
    p1 = prom<V +>{
      rnorm = ldf rnorm;
      r5 = dyn rnorm(100.0);
      return r5;
    };
    r7 = dyn matrix[, nrow](p1, 5.0);
    check L12() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r7];
  L10():
    goto L0();
  L12():
    st x = r7;
    dist = ldf dist;
    check L13() else D4();
  D4():
    deopt 16 [];
  L13():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r9 = dyn dist(p2);
    check L14() else D5();
  D5():
    deopt 18 [r9];
  L14():
    dist1 = ldf dist;
    check L15() else D6();
  D6():
    deopt 20 [];
  L15():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r11 = dyn dist1[, diag](p3, TRUE);
    check L16() else D7();
  D7():
    deopt 24 [r11];
  L16():
    dist2 = ldf dist;
    check L17() else D8();
  D8():
    deopt 26 [];
  L17():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r13 = dyn dist2[, upper](p4, TRUE);
    check L18() else D9();
  D9():
    deopt 30 [r13];
  L18():
    as_matrix = ldf `as.matrix`;
    check L19() else D10();
  D10():
    deopt 32 [];
  L19():
    p6 = prom<V +>{
      dist3 = ldf dist;
      p5 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r15 = dyn dist3(p5);
      return r15;
    };
    r17 = dyn as_matrix(p6);
    check L20() else D11();
  D11():
    deopt 34 [r17];
  L20():
    st m = r17;
    as_dist = ldf `as.dist`;
    check L21() else D12();
  D12():
    deopt 37 [];
  L21():
    p7 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r19 = dyn as_dist(p7);
    check L22() else D13();
  D13():
    deopt 39 [r19];
  L22():
    st d = r19;
    stopifnot = ldf stopifnot;
    check L23() else D14();
  D14():
    deopt 42 [];
  L23():
    p9 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      dist4 = ldf dist;
      p8 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r21 = dyn dist4(p8);
      r22 = `==`(d1, r21);
      return r22;
    };
    r24 = dyn stopifnot(p9);
    check L24() else D15();
  D15():
    deopt 44 [r24];
  L24():
    as_dist1 = ldf `as.dist`;
    check L25() else D16();
  D16():
    deopt 46 [];
  L25():
    p11 = prom<V +>{
      cor = ldf cor;
      p10 = prom<V +>{
        USJudgeRatings = ld USJudgeRatings;
        USJudgeRatings1 = force? USJudgeRatings;
        checkMissing(USJudgeRatings1);
        return USJudgeRatings1;
      };
      r26 = dyn cor(p10);
      r27 = `-`(1.0, r26);
      r28 = `/`(r27, 2.0);
      return r28;
    };
    r30 = dyn as_dist1(p11);
    check L26() else D17();
  D17():
    deopt 48 [r30];
  L26():
    st dd = r30;
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L1():
    plot = ldf plot;
    check L29() else D18();
  L27():
    round = ldf round in base;
    r33 = dyn round(<lang `*`(1000.0, dd)>);
    goto L1();
  L28():
    r31 = dyn base1(<lang `*`(1000.0, dd)>);
    goto L1();
  D18():
    deopt 54 [];
  L29():
    p13 = prom<V +>{
      hclust = ldf hclust;
      p12 = prom<V +>{
        dd = ld dd;
        dd1 = force? dd;
        checkMissing(dd1);
        return dd1;
      };
      r35 = dyn hclust(p12);
      return r35;
    };
    r37 = dyn plot(p13);
    check L30() else D19();
  D19():
    deopt 56 [r37];
  L30():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L2(r39):
    st x = r39;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L31():
    c = ldf c in base;
    r40 = dyn c(0.0, 0.0, 1.0, 1.0, 1.0, 1.0);
    check L33() else D20();
  L32():
    r38 = dyn base2(0.0, 0.0, 1.0, 1.0, 1.0, 1.0);
    goto L2(r38);
  D20():
    deopt 66 [r40];
  L3(r42):
    st y = r42;
    dist5 = ldf dist;
    check L37() else D22();
  L33():
    goto L2(r40);
  L34():
    c1 = ldf c in base;
    r43 = dyn c1(1.0, 0.0, 1.0, 1.0, 0.0, 1.0);
    check L36() else D21();
  L35():
    r41 = dyn base3(1.0, 0.0, 1.0, 1.0, 0.0, 1.0);
    goto L3(r41);
  D21():
    deopt 77 [r43];
  D22():
    deopt 80 [];
  L36():
    goto L3(r43);
  L37():
    p16 = prom<V +>{
      rbind = ldf rbind;
      p14 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      p15 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r46 = dyn rbind(p14, p15);
      return r46;
    };
    r48 = dyn dist5[, method](p16, "binary");
    check L38() else D23();
  D23():
    deopt 84 [r48];
  L38():
    dist6 = ldf dist;
    check L39() else D24();
  D24():
    deopt 86 [];
  L39():
    p19 = prom<V +>{
      rbind1 = ldf rbind;
      p17 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      p18 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      r51 = dyn rbind1(p17, p18);
      return r51;
    };
    r53 = dyn dist6[, method](p19, "canberra");
    check L40() else D25();
  D25():
    deopt 90 [r53];
  L40():
    labels = ldf labels;
    check L41() else D26();
  D26():
    deopt 92 [];
  L41():
    p20 = prom<V +>{
      eurodist = ld eurodist;
      eurodist1 = force? eurodist;
      checkMissing(eurodist1);
      return eurodist1;
    };
    r55 = dyn labels(p20);
    check L42() else D27();
  D27():
    deopt 94 [r55];
  L42():
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L43() else L44(+Infinity, l);
  L4(dx1):
    st x = dx1;
    rbind2 = ldf rbind;
    check L46() else D28();
  L43():
    dr = tryDispatchBuiltin.0("[<-", l, +Infinity);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(+Infinity, dr);
  L44(r57, l2):
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l2, +Infinity, 6.0);
    goto L4(r60);
  D28():
    deopt 103 [];
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L46():
    p21 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    p22 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r63 = dyn rbind2(p21, p22);
    check L47() else D29();
  D29():
    deopt 106 [r63];
  L47():
    st m2 = r63;
    dist7 = ldf dist;
    check L48() else D30();
  D30():
    deopt 109 [];
  L48():
    p23 = prom<V +>{
      m2 = ld m2;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r65 = dyn dist7[, method](p23, "binary");
    check L49() else D31();
  D31():
    deopt 113 [r65];
  L49():
    stopifnot1 = ldf stopifnot;
    check L50() else D32();
  D32():
    deopt 115 [];
  L50():
    p25 = prom<V +>{
      dist8 = ldf dist;
      p24 = prom<V +>{
        m4 = ld m2;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      r67 = dyn dist8[, method](p24, "euclidean");
      r68 = `==`(+Infinity, r67);
      return r68;
    };
    p27 = prom<V +>{
      dist9 = ldf dist;
      p26 = prom<V +>{
        m6 = ld m2;
        m7 = force? m6;
        checkMissing(m7);
        return m7;
      };
      r71 = dyn dist9[, method](p26, "maximum");
      r72 = `==`(+Infinity, r71);
      return r72;
    };
    p29 = prom<V +>{
      dist10 = ldf dist;
      p28 = prom<V +>{
        m8 = ld m2;
        m9 = force? m8;
        checkMissing(m9);
        return m9;
      };
      r75 = dyn dist10[, method](p28, "manhattan");
      r76 = `==`(+Infinity, r75);
      return r76;
    };
    r78 = dyn stopifnot1(p25, p27, p29);
    check L51() else D33();
  D33():
    deopt 119 [r78];
  L51():
    x16 = ld x;
    check L52() else D34();
  D34():
    deopt 120 [x16];
  L52():
    x17 = force? x16;
    checkMissing(x17);
    st x1 = x17;
    l3 = ld x1;
    c3 = `is.object`(l3);
    if c3 then L53() else L54(1.0E100, l3);
  L5(dx3):
    st x1 = dx3;
    stopifnot2 = ldf stopifnot;
    check L56() else D35();
  L53():
    dr2 = tryDispatchBuiltin.0("[<-", l3, 1.0E100);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L55() else L54(1.0E100, dr2);
  L54(r80, l5):
    ___1 = ldf `[<-` in base;
    r83 = dyn ___1(l5, 1.0E100, 6.0);
    goto L5(r83);
  D35():
    deopt 131 [];
  L55():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L56():
    p37 = prom<V +>{
      dist11 = ldf dist;
      p32 = prom<V +>{
        cbind = ldf cbind;
        p30 = prom<V +>{
          x18 = ld x;
          x19 = force? x18;
          checkMissing(x19);
          return x19;
        };
        p31 = prom<V +>{
          y6 = ld y;
          y7 = force? y6;
          checkMissing(y7);
          return y7;
        };
        r86 = dyn cbind(p30, p31);
        return r86;
      };
      r88 = dyn dist11[, method](p32, "canberra");
      print = ldf print;
      p36 = prom<V +>{
        dist12 = ldf dist;
        p35 = prom<V +>{
          cbind1 = ldf cbind;
          p33 = prom<V +>{
            x20 = ld x1;
            x21 = force? x20;
            checkMissing(x21);
            return x21;
          };
          p34 = prom<V +>{
            y8 = ld y;
            y9 = force? y8;
            checkMissing(y9);
            return y9;
          };
          r91 = dyn cbind1(p33, p34);
          return r91;
        };
        r93 = dyn dist12[, method](p35, "canberra");
        return r93;
      };
      r95 = dyn print(p36);
      r96 = `==`(r88, r95);
      return r96;
    };
    r98 = dyn stopifnot2(p37);
    check L57() else D36();
  D36():
    deopt 133 [r98];
  L57():
    l6 = ld y;
    c4 = `is.object`(l6);
    if c4 then L58() else L59(+Infinity, l6);
  L6(dx5):
    st y = dx5;
    dist13 = ldf dist;
    check L61() else D37();
  L58():
    dr4 = tryDispatchBuiltin.0("[<-", l6, +Infinity);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(+Infinity, dr4);
  L59(r100, l8):
    ___2 = ldf `[<-` in base;
    r103 = dyn ___2(l8, +Infinity, 6.0);
    goto L6(r103);
  D37():
    deopt 142 [];
  L60():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L61():
    p40 = prom<V +>{
      rbind3 = ldf rbind;
      p38 = prom<V +>{
        x22 = ld x;
        x23 = force? x22;
        checkMissing(x23);
        return x23;
      };
      p39 = prom<V +>{
        y10 = ld y;
        y11 = force? y10;
        checkMissing(y11);
        return y11;
      };
      r106 = dyn rbind3(p38, p39);
      return r106;
    };
    r108 = dyn dist13[, method](p40, "binary");
    check L62() else D38();
  D38():
    deopt 146 [r108];
  L62():
    dist14 = ldf dist;
    check L63() else D39();
  D39():
    deopt 148 [];
  L63():
    p43 = prom<V +>{
      rbind4 = ldf rbind;
      p41 = prom<V +>{
        x24 = ld x;
        x25 = force? x24;
        checkMissing(x25);
        return x25;
      };
      p42 = prom<V +>{
        y12 = ld y;
        y13 = force? y12;
        checkMissing(y13);
        return y13;
      };
      r111 = dyn rbind4(p41, p42);
      return r111;
    };
    r113 = dyn dist14[, method](p43, "canberra");
    check L64() else D40();
  D40():
    deopt 152 [r113];
  L64():
    dist15 = ldf dist;
    check L65() else D41();
  D41():
    deopt 154 [];
  L65():
    p46 = prom<V +>{
      rbind5 = ldf rbind;
      p44 = prom<V +>{
        x26 = ld x;
        x27 = force? x26;
        checkMissing(x27);
        return x27;
      };
      p45 = prom<V +>{
        y14 = ld y;
        y15 = force? y14;
        checkMissing(y15);
        return y15;
      };
      r116 = dyn rbind5(p44, p45);
      return r116;
    };
    r118 = dyn dist15[, method](p46, "maximum");
    check L66() else D42();
  D42():
    deopt 158 [r118];
  L66():
    dist16 = ldf dist;
    check L67() else D43();
  D43():
    deopt 160 [];
  L67():
    p49 = prom<V +>{
      rbind6 = ldf rbind;
      p47 = prom<V +>{
        x28 = ld x;
        x29 = force? x28;
        checkMissing(x29);
        return x29;
      };
      p48 = prom<V +>{
        y16 = ld y;
        y17 = force? y16;
        checkMissing(y17);
        return y17;
      };
      r121 = dyn rbind6(p47, p48);
      return r121;
    };
    r123 = dyn dist16[, method](p49, "manhattan");
    check L68() else D44();
  D44():
    deopt 164 [r123];
  L68():
    popenv;
    return r123;
  }
}
fun inner1692178838(x, method, diag, upper, p) {
  (reg x:*, reg method:*, reg diag:*, reg upper:*, reg p:*) -+> V { var x:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, var p:*, reg p_isMissing:L, reg p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pmatch:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r3:V, reg is_na:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg pmatch1:cls, reg method3:*, reg method4:V, reg p2:p(V +), reg METHODS:*, reg METHODS1:V, reg p3:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg method5:*, reg method6:V, reg is_na1:cls, reg r15:V, reg c2:L, reg stop:cls, reg r16:V, reg method7:*, reg method8:V, reg r18:V, reg c3:L, reg stop1:cls, reg r19:V, reg as_matrix:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r22:V, reg nrow:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r24:V, reg method9:*, reg method10:V, reg r25:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg N:*, reg N1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r30:V, reg c5:L, reg r32:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r33:V, reg diag1:*, reg diag2:V, reg upper1:*, reg upper2:V, reg METHODS2:*, reg METHODS3:V, reg c6:L, reg METHODS5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg method11:*, reg method12:V, reg __1:cls, reg r34:V, reg p6:*, reg p7:V, reg match_call:cls, reg r35:V, reg list:cls, reg r36:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg N2:*, reg N3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg x7:*, reg x8:V, reg dimnames1:cls, reg r41:V, reg c7:L, reg r43:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r44:V, reg diag3:*, reg diag4:V, reg upper3:*, reg upper4:V, reg METHODS6:*, reg METHODS7:V, reg c8:L, reg METHODS9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg method13:*, reg method14:V, reg __3:cls, reg r45:V, reg match_call1:cls, reg r46:V, reg list1:cls, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg C_Cdist:*, reg C_Cdist1:V, reg x9:*, reg x10:V, reg method15:*, reg method16:V, reg attrs:*, reg attrs1:V, reg p8:*, reg p9:V, reg vargs:dots, reg r50:V |
    mkenv;
    st x = x;
    method_isMissing = missing.0(method);
    if method_isMissing then L0("euclidean") else L0(method);
  L0(method_orDefault):
    st method = method_orDefault;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L1(FALSE) else L1(diag);
  L1(diag_orDefault):
    st diag = diag_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L2(FALSE) else L2(upper);
  L2(upper_orDefault):
    st upper = upper_orDefault;
    p_isMissing = missing.0(p);
    if p_isMissing then L3(2.0) else L3(p);
  L3(p_orDefault):
    st p = p_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L4(r1):
    r5 = `!`(r1);
    c = `as.logical`(r5);
    if c then L28() else L5();
  L23():
    pmatch = ldf pmatch;
    check L25() else D0();
  L24():
    r = dyn base(<lang pmatch(method, "euclidian")>);
    goto L4(r);
  D0():
    deopt 3 [];
  L5():
    goto L6();
  L6():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L25():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r3 = dyn pmatch(p1, "euclidian");
    check L26() else D1();
  L28():
    st method = "euclidean";
    goto L6();
  D1():
    deopt 6 [r3];
  L7(r8):
    st METHODS = r8;
    pmatch1 = ldf pmatch;
    check L33() else D4();
  L26():
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(r3);
    check L27() else D2();
  L30():
    c1 = ldf c in base;
    r9 = dyn c1("euclidean", "maximum", "manhattan", "canberra", "binary", "minkowski");
    check L32() else D3();
  L31():
    r7 = dyn base1("euclidean", "maximum", "manhattan", "canberra", "binary", "minkowski");
    goto L7(r7);
  D2():
    deopt 8 [r4];
  D3():
    deopt 24 [r9];
  D4():
    deopt 27 [];
  L27():
    goto L4(r4);
  L32():
    goto L7(r9);
  L33():
    p2 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p3 = prom<V +>{
      METHODS = ld METHODS;
      METHODS1 = force? METHODS;
      checkMissing(METHODS1);
      return METHODS1;
    };
    r12 = dyn pmatch1(p2, p3);
    check L34() else D5();
  D5():
    deopt 30 [r12];
  L34():
    st method = r12;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L8(r14):
    c2 = `as.logical`(r14);
    if c2 then L39() else L9();
  L35():
    method5 = ld method;
    check L37() else D6();
  L36():
    r13 = dyn base2(<sym method>);
    goto L8(r13);
  D6():
    deopt 34 [method5];
  L9():
    goto L10();
  L10():
    method7 = ld method;
    check L43() else D10();
  L37():
    method6 = force? method5;
    checkMissing(method6);
    is_na1 = ldf `is.na` in base;
    r15 = dyn is_na1(method6);
    check L38() else D7();
  L39():
    stop = ldf stop;
    check L40() else D8();
  D7():
    deopt 37 [r15];
  D8():
    deopt 39 [];
  D10():
    deopt 44 [method7];
  L38():
    goto L8(r15);
  L40():
    r16 = dyn stop("invalid distance method");
    check L41() else D9();
  L43():
    method8 = force? method7;
    checkMissing(method8);
    r18 = `==`(method8, -1.0);
    c3 = `as.logical`(r18);
    if c3 then L44() else L11();
  D9():
    deopt 41 [r16];
  L11():
    goto L12();
  L12():
    as_matrix = ldf `as.matrix`;
    check L48() else D13();
  L41():
    goto L10();
  L44():
    stop1 = ldf stop;
    check L45() else D11();
  D11():
    deopt 49 [];
  D13():
    deopt 55 [];
  L45():
    r19 = dyn stop1("ambiguous distance method");
    check L46() else D12();
  L48():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r22 = dyn as_matrix(p4);
    check L49() else D14();
  D12():
    deopt 51 [r19];
  D14():
    deopt 57 [r22];
  L46():
    goto L12();
  L49():
    st x = r22;
    nrow = ldf nrow;
    check L50() else D15();
  D15():
    deopt 60 [];
  L50():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r24 = dyn nrow(p5);
    check L51() else D16();
  D16():
    deopt 62 [r24];
  L51():
    st N = r24;
    method9 = ld method;
    check L52() else D17();
  D17():
    deopt 64 [method9];
  L52():
    method10 = force? method9;
    checkMissing(method10);
    r25 = `==`(method10, 6);
    c4 = `as.logical`(r25);
    if c4 then L53() else L13();
  L13():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L18(r37):
    st attrs = r37;
    sym7 = ldf `.Call`;
    base7 = ldf `.Call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L53():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L14(r27):
    goto L18(r27);
  L22(r49):
    popenv;
    return r49;
  L54():
    N = ld N;
    check L56() else D18();
  L55():
    r26 = dyn base3[Size, Labels, Diag, Upper, method, p, call, class](<sym N>, <lang `[[`(dimnames(x), 1)>, <sym diag>, <sym upper>, <lang `[`(METHODS, method)>, <sym p>, <lang match.call()>, "dist");
    goto L14(r26);
  L76():
    N2 = ld N;
    check L78() else D29();
  L77():
    r38 = dyn base5[Size, Labels, Diag, Upper, method, call, class](<sym N>, <lang `[[`(dimnames(x), 1)>, <sym diag>, <sym upper>, <lang `[`(METHODS, method)>, <lang match.call()>, "dist");
    goto L18(r38);
  L96():
    C_Cdist = ld C_Cdist;
    check L98() else D39();
  L97():
    r48 = dyn base7(<sym C_Cdist>, <sym x>, <sym method>, <sym attrs>, <sym p>);
    goto L22(r48);
  D18():
    deopt 70 [N];
  D29():
    deopt 108 [N2];
  D39():
    deopt 143 [C_Cdist];
  L56():
    N1 = force? N;
    checkMissing(N1);
    sym4 = ldf dimnames;
    base4 = ldf dimnames in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L78():
    N3 = force? N2;
    checkMissing(N3);
    sym6 = ldf dimnames;
    base6 = ldf dimnames in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L98():
    C_Cdist1 = force? C_Cdist;
    checkMissing(C_Cdist1);
    x9 = ld x;
    check L99() else D40();
  D40():
    deopt 144 [C_Cdist1, x9];
  L15(r29):
    c5 = `is.object`(r29);
    if c5 then L61() else L62(r29);
  L19(r40):
    c7 = `is.object`(r40);
    if c7 then L83() else L84(r40);
  L57():
    x5 = ld x;
    check L59() else D19();
  L58():
    r28 = dyn base4(<sym x>);
    goto L15(r28);
  L79():
    x7 = ld x;
    check L81() else D30();
  L80():
    r39 = dyn base6(<sym x>);
    goto L19(r39);
  L99():
    x10 = force? x9;
    checkMissing(x10);
    method15 = ld method;
    check L100() else D41();
  D19():
    deopt 75 [x5];
  D30():
    deopt 113 [x7];
  D41():
    deopt 145 [C_Cdist1, x10, method15];
  L16(dx1):
    diag1 = ld diag;
    check L64() else D21();
  L20(dx5):
    diag3 = ld diag;
    check L86() else D32();
  L59():
    x6 = force? x5;
    checkMissing(x6);
    dimnames = ldf dimnames in base;
    r30 = dyn dimnames(x6);
    check L60() else D20();
  L61():
    dr = tryDispatchBuiltin.1("[[", r29);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(r32):
    __ = ldf `[[` in base;
    r33 = dyn __(r32, 1);
    goto L16(r33);
  L81():
    x8 = force? x7;
    checkMissing(x8);
    dimnames1 = ldf dimnames in base;
    r41 = dyn dimnames1(x8);
    check L82() else D31();
  L83():
    dr4 = tryDispatchBuiltin.1("[[", r40);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L85() else L84(dr4);
  L84(r43):
    __2 = ldf `[[` in base;
    r44 = dyn __2(r43, 1);
    goto L20(r44);
  L100():
    method16 = force? method15;
    checkMissing(method16);
    attrs = ld attrs;
    check L101() else D42();
  D20():
    deopt 78 [r30];
  D21():
    deopt 83 [diag1];
  D31():
    deopt 116 [r41];
  D32():
    deopt 121 [diag3];
  D42():
    deopt 146 [C_Cdist1, x10, method16, attrs];
  L60():
    goto L15(r30);
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L64():
    diag2 = force? diag1;
    checkMissing(diag2);
    upper1 = ld upper;
    check L65() else D22();
  L82():
    goto L19(r41);
  L85():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx4);
  L86():
    diag4 = force? diag3;
    checkMissing(diag4);
    upper3 = ld upper;
    check L87() else D33();
  L101():
    attrs1 = force? attrs;
    checkMissing(attrs1);
    p8 = ld p;
    check L102() else D43();
  D22():
    deopt 86 [upper1];
  D33():
    deopt 124 [upper3];
  D43():
    deopt 147 [C_Cdist1, x10, method16, attrs1, p8];
  L65():
    upper2 = force? upper1;
    checkMissing(upper2);
    METHODS2 = ld METHODS;
    check L66() else D23();
  L87():
    upper4 = force? upper3;
    checkMissing(upper4);
    METHODS6 = ld METHODS;
    check L88() else D34();
  L102():
    p9 = force? p8;
    checkMissing(p9);
    vargs = dots[x10, method16, attrs1, p9];
    r50 = `.Call`(C_Cdist1, vargs, <missing>);
    goto L22(r50);
  D23():
    deopt 89 [METHODS2];
  D34():
    deopt 127 [METHODS6];
  L66():
    METHODS3 = force? METHODS2;
    checkMissing(METHODS3);
    c6 = `is.object`(METHODS3);
    if c6 then L67() else L68(METHODS3);
  L88():
    METHODS7 = force? METHODS6;
    checkMissing(METHODS7);
    c8 = `is.object`(METHODS7);
    if c8 then L89() else L90(METHODS7);
  L17(dx3):
    p6 = ld p;
    check L71() else D25();
  L21(dx7):
    match_call1 = ldf `match.call`;
    check L93() else D36();
  L67():
    dr2 = tryDispatchBuiltin.1("[", METHODS3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(dr2);
  L68(METHODS5):
    method11 = ld method;
    check L70() else D24();
  L89():
    dr6 = tryDispatchBuiltin.1("[", METHODS7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L91() else L90(dr6);
  L90(METHODS9):
    method13 = ld method;
    check L92() else D35();
  D24():
    deopt 91 [METHODS5, method11];
  D25():
    deopt 95 [p6];
  D35():
    deopt 129 [METHODS9, method13];
  D36():
    deopt 134 [];
  L69():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L70():
    method12 = force? method11;
    __1 = ldf `[` in base;
    r34 = dyn __1(METHODS5, method12);
    goto L17(r34);
  L71():
    p7 = force? p6;
    checkMissing(p7);
    match_call = ldf `match.call`;
    check L72() else D26();
  L91():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx6);
  L92():
    method14 = force? method13;
    __3 = ldf `[` in base;
    r45 = dyn __3(METHODS9, method14);
    goto L21(r45);
  L93():
    r46 = dyn match_call1();
    check L94() else D37();
  D26():
    deopt 99 [];
  D37():
    deopt 135 [r46];
  L72():
    r35 = dyn match_call();
    check L73() else D27();
  L94():
    list1 = ldf list in base;
    r47 = dyn list1(N3, dx5, diag4, upper4, dx7, r46, "dist");
    check L95() else D38();
  D27():
    deopt 100 [r35];
  D38():
    deopt 140 [r47];
  L73():
    list = ldf list in base;
    r36 = dyn list(N1, dx1, diag2, upper2, dx3, p7, r35, "dist");
    check L74() else D28();
  L95():
    goto L18(r47);
  D28():
    deopt 105 [r36];
  L74():
    goto L14(r36);
  }
}