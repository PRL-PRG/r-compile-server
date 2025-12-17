fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg swiss:*, reg swiss1:V, reg p1:p(V +), reg r4:V, reg sigma:cls, reg lm1:*, reg lm2:V, reg p2:p(V +), reg r6:V, reg stopifnot:cls, reg all_equal:cls, reg sigma1:cls, reg lm3:*, reg lm4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg summary:cls, reg lm5:*, reg lm6:V, reg p5:p(V +), reg r11:V, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg subset:cls, reg DNase:*, reg DNase1:V, reg p8:p(V +), reg Run:*, reg Run1:V, reg r20:V, reg p9:p(V +), reg r22:V, reg nls:cls, reg __1:cls, reg r23:V, reg p10:p(V +), reg DNase2:*, reg DNase3:V, reg p11:p(V +), reg r26:V, reg sigma2:cls, reg fm_DN1:*, reg fm_DN2:V, reg p12:p(V +), reg r28:V, reg stopifnot1:cls, reg all_equal1:cls, reg sigma3:cls, reg fm_DN3:*, reg fm_DN4:V, reg p13:p(V +), reg r30:V, reg p14:p(V +), reg summary1:cls, reg fm_DN5:*, reg fm_DN6:V, reg p15:p(V +), reg r33:V, reg c1:L, reg r35:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg p16:p(V +), reg r38:V, reg p17:p(V +), reg r40:V, reg sym:cls, reg base:cls, reg guard:L, reg r41:V, reg r42:V, reg rep:cls, reg r43:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r44:V, reg r45:V, reg c2:cls, reg r46:V, reg factor:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg rep1:cls, reg r49:V, reg p18:p(V +), reg r51:V, reg cbind:cls, reg numdead:*, reg numdead1:V, reg p19:p(V +), reg numdead2:*, reg numdead3:V, reg r53:V, reg p20:p(V +), reg r55:V, reg sigma4:cls, reg glm:cls, reg __2:cls, reg r56:V, reg p21:p(V +), reg binomial:*, reg binomial1:V, reg p22:p(V +), reg r59:V, reg p23:p(V +), reg r61:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r62:V, reg r63:V, reg c3:cls, reg r64:V, reg gl:cls, reg r65:V, reg gl1:cls, reg r66:V, reg sigma5:cls, reg glm1:cls, reg __3:cls, reg r67:V, reg p24:p(V +), reg poisson:cls, reg r69:V, reg p25:p(V +), reg r71:V, reg p26:p(V +), reg r73:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r74:V, reg summary2:cls, reg glm_D93:*, reg glm_D94:V, reg p27:p(V +), reg r77:V, reg c4:L, reg r79:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r80:V, reg r81:V, reg sigma6:cls, reg update:cls, reg glm_D95:*, reg glm_D96:V, reg p28:p(V +), reg quasipoisson:cls, reg r83:V, reg p29:p(V +), reg r85:V, reg p30:p(V +), reg r87:V, reg sigma7:cls, reg glm_qD93:*, reg glm_qD94:V, reg p31:p(V +), reg r89:V, reg summary3:cls, reg glm_qD95:*, reg glm_qD96:V, reg p32:p(V +), reg r92:V, reg c5:L, reg r94:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r95:V, reg __4:cls, reg r96:V, reg r97:cls, reg r98:V, reg sigma8:cls, reg mlmfit:*, reg mlmfit1:V, reg p33:p(V +), reg r100:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r101:V, reg diag:cls, reg estVar:cls, reg mlmfit2:*, reg mlmfit3:V, reg p34:p(V +), reg r104:V, reg p35:p(V +), reg r106:V, reg r107:V, reg stopifnot2:cls, reg all_equal2:cls, reg sigma9:cls, reg mlmfit4:*, reg mlmfit5:V, reg p36:p(V +), reg r109:V, reg p37:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r111:V, reg r112:V, reg diag1:cls, reg estVar1:cls, reg mlmfit6:*, reg mlmfit7:V, reg p38:p(V +), reg r114:V, reg p39:p(V +), reg r116:V, reg r117:V, reg p40:p(V +), reg r119:V, reg p41:p(V +), reg r121:V |
    mkenv;
    r = clos inner64320599;
    st sigma = r;
    lm = ldf lm;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym Fertility>, <sym .>);
      return r1;
    };
    p1 = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    r4 = dyn lm[, data](p, p1);
    check L6() else D1();
  D1():
    deopt 8 [r4];
  L6():
    st lm1 = r4;
    sigma = ldf sigma;
    check L7() else D2();
  D2():
    deopt 11 [];
  L7():
    p2 = prom<V +>{
      lm1 = ld lm1;
      lm2 = force? lm1;
      checkMissing(lm2);
      return lm2;
    };
    r6 = dyn sigma(p2);
    check L8() else D3();
  D3():
    deopt 13 [r6];
  L8():
    stopifnot = ldf stopifnot;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    p7 = prom<V +>{
      all_equal = ldf `all.equal`;
      p4 = prom<V +>{
        sigma1 = ldf sigma;
        p3 = prom<V +>{
          lm3 = ld lm1;
          lm4 = force? lm3;
          checkMissing(lm4);
          return lm4;
        };
        r8 = dyn sigma1(p3);
        return r8;
      };
      p6 = prom<V +>{
        summary = ldf summary;
        p5 = prom<V +>{
          lm5 = ld lm1;
          lm6 = force? lm5;
          checkMissing(lm6);
          return lm6;
        };
        r11 = dyn summary(p5);
        c = `is.object`(r11);
        if c then L1() else L2(r11);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r11);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r13):
        r14 = `$`(r13, <sym sigma>);
        goto L0(r14);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r16 = dyn all_equal[, , tolerance](p4, p6, 1.0E-15);
      return r16;
    };
    r18 = dyn stopifnot(p7);
    check L10() else D5();
  D5():
    deopt 17 [r18];
  L10():
    subset = ldf subset;
    check L11() else D6();
  D6():
    deopt 19 [];
  L11():
    p8 = prom<V +>{
      DNase = ld DNase;
      DNase1 = force? DNase;
      checkMissing(DNase1);
      return DNase1;
    };
    p9 = prom<V +>{
      Run = ld Run;
      Run1 = force? Run;
      checkMissing(Run1);
      r20 = `==`(Run1, 1.0);
      return r20;
    };
    r22 = dyn subset(p8, p9);
    check L12() else D7();
  D7():
    deopt 22 [r22];
  L12():
    st DNase1 = r22;
    nls = ldf nls;
    check L13() else D8();
  D8():
    deopt 25 [];
  L13():
    p10 = prom<V +>{
      __1 = ldf `~` in base;
      r23 = dyn __1(<sym density>, <lang SSlogis(log(conc), Asym, xmid, scal)>);
      return r23;
    };
    p11 = prom<V +>{
      DNase2 = ld DNase1;
      DNase3 = force? DNase2;
      checkMissing(DNase3);
      return DNase3;
    };
    r26 = dyn nls(p10, p11);
    check L14() else D9();
  D9():
    deopt 28 [r26];
  L14():
    st `fm.DN1` = r26;
    sigma2 = ldf sigma;
    check L15() else D10();
  D10():
    deopt 31 [];
  L15():
    p12 = prom<V +>{
      fm_DN1 = ld `fm.DN1`;
      fm_DN2 = force? fm_DN1;
      checkMissing(fm_DN2);
      return fm_DN2;
    };
    r28 = dyn sigma2(p12);
    check L16() else D11();
  D11():
    deopt 33 [r28];
  L16():
    stopifnot1 = ldf stopifnot;
    check L17() else D12();
  D12():
    deopt 35 [];
  L17():
    p17 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p14 = prom<V +>{
        sigma3 = ldf sigma;
        p13 = prom<V +>{
          fm_DN3 = ld `fm.DN1`;
          fm_DN4 = force? fm_DN3;
          checkMissing(fm_DN4);
          return fm_DN4;
        };
        r30 = dyn sigma3(p13);
        return r30;
      };
      p16 = prom<V +>{
        summary1 = ldf summary;
        p15 = prom<V +>{
          fm_DN5 = ld `fm.DN1`;
          fm_DN6 = force? fm_DN5;
          checkMissing(fm_DN6);
          return fm_DN6;
        };
        r33 = dyn summary1(p15);
        c1 = `is.object`(r33);
        if c1 then L1() else L2(r33);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", r33);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r35):
        r36 = `$`(r35, <sym sigma>);
        goto L0(r36);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r38 = dyn all_equal1[, , tolerance](p14, p16, 1.0E-15);
      return r38;
    };
    r40 = dyn stopifnot1(p17);
    check L18() else D13();
  D13():
    deopt 37 [r40];
  L18():
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r42):
    st ldose = r42;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L19():
    rep = ldf rep in base;
    r43 = dyn rep(<lang `:`(0.0, 5.0)>, 2.0);
    goto L0(r43);
  L20():
    r41 = dyn base(<lang `:`(0.0, 5.0)>, 2.0);
    goto L0(r41);
  L1(r45):
    st numdead = r45;
    factor = ldf factor;
    check L24() else D15();
  L21():
    c2 = ldf c in base;
    r46 = dyn c2(1.0, 4.0, 9.0, 13.0, 18.0, 20.0, 0.0, 2.0, 6.0, 10.0, 12.0, 16.0);
    check L23() else D14();
  L22():
    r44 = dyn base1(1.0, 4.0, 9.0, 13.0, 18.0, 20.0, 0.0, 2.0, 6.0, 10.0, 12.0, 16.0);
    goto L1(r44);
  D14():
    deopt 57 [r46];
  D15():
    deopt 60 [];
  L23():
    goto L1(r46);
  L24():
    p18 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      rep1 = ldf rep in base;
      r49 = dyn rep1(<lang c("M", "F")>, <lang c(6.0, 6.0)>);
      goto L0(r49);
    L2():
      r47 = dyn base2(<lang c("M", "F")>, <lang c(6.0, 6.0)>);
      goto L0(r47);
    };
    r51 = dyn factor(p18);
    check L25() else D16();
  D16():
    deopt 62 [r51];
  L25():
    st sex = r51;
    cbind = ldf cbind;
    check L26() else D17();
  D17():
    deopt 65 [];
  L26():
    p19 = prom<V +>{
      numdead = ld numdead;
      numdead1 = force? numdead;
      checkMissing(numdead1);
      return numdead1;
    };
    p20 = prom<V +>{
      numdead2 = ld numdead;
      numdead3 = force? numdead2;
      checkMissing(numdead3);
      r53 = `-`(20.0, numdead3);
      return r53;
    };
    r55 = dyn cbind[, numalive](p19, p20);
    check L27() else D18();
  D18():
    deopt 69 [r55];
  L27():
    st SF = r55;
    sigma4 = ldf sigma;
    check L28() else D19();
  D19():
    deopt 72 [];
  L28():
    p23 = prom<V +>{
      glm = ldf glm;
      p21 = prom<V +>{
        __2 = ldf `~` in base;
        r56 = dyn __2(<sym SF>, <lang `*`(sex, ldose)>);
        return r56;
      };
      p22 = prom<V +>{
        binomial = ld binomial;
        binomial1 = force? binomial;
        checkMissing(binomial1);
        return binomial1;
      };
      r59 = dyn glm[, family](p21, p22);
      st `budworm.lg` = r59;
      invisible.0();
      return r59;
    };
    r61 = dyn sigma4(p23);
    check L29() else D20();
  D20():
    deopt 74 [r61];
  L29():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L2(r63):
    st counts = r63;
    gl = ldf gl;
    check L33() else D22();
  L30():
    c3 = ldf c in base;
    r64 = dyn c3(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    check L32() else D21();
  L31():
    r62 = dyn base3(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    goto L2(r62);
  D21():
    deopt 87 [r64];
  D22():
    deopt 90 [];
  L32():
    goto L2(r64);
  L33():
    r65 = dyn gl(3.0, 1.0, 9.0);
    check L34() else D23();
  D23():
    deopt 94 [r65];
  L34():
    st outcome = r65;
    gl1 = ldf gl;
    check L35() else D24();
  D24():
    deopt 97 [];
  L35():
    r66 = dyn gl1(3.0, 3.0);
    check L36() else D25();
  D25():
    deopt 100 [r66];
  L36():
    st treatment = r66;
    sigma5 = ldf sigma;
    check L37() else D26();
  D26():
    deopt 103 [];
  L37():
    p26 = prom<V +>{
      glm1 = ldf glm;
      p24 = prom<V +>{
        __3 = ldf `~` in base;
        r67 = dyn __3(<sym counts>, <lang `+`(outcome, treatment)>);
        return r67;
      };
      p25 = prom<V +>{
        poisson = ldf poisson;
        r69 = dyn poisson();
        return r69;
      };
      r71 = dyn glm1[, family](p24, p25);
      st `glm.D93` = r71;
      invisible.0();
      return r71;
    };
    r73 = dyn sigma5(p26);
    check L38() else D27();
  D27():
    deopt 105 [r73];
  L38():
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L3():
    sigma6 = ldf sigma;
    check L47() else D30();
  L39():
    summary2 = ldf summary;
    check L41() else D28();
  L40():
    r74 = dyn base4(<lang `$`(summary(glm.D93), dispersion)>);
    goto L3();
  D28():
    deopt 108 [];
  D30():
    deopt 114 [];
  L41():
    p27 = prom<V +>{
      glm_D93 = ld `glm.D93`;
      glm_D94 = force? glm_D93;
      checkMissing(glm_D94);
      return glm_D94;
    };
    r77 = dyn summary2(p27);
    check L42() else D29();
  L47():
    p30 = prom<V +>{
      update = ldf update;
      p28 = prom<V +>{
        glm_D95 = ld `glm.D93`;
        glm_D96 = force? glm_D95;
        checkMissing(glm_D96);
        return glm_D96;
      };
      p29 = prom<V +>{
        quasipoisson = ldf quasipoisson;
        r83 = dyn quasipoisson();
        return r83;
      };
      r85 = dyn update[, family](p28, p29);
      st `glm.qD93` = r85;
      invisible.0();
      return r85;
    };
    r87 = dyn sigma6(p30);
    check L48() else D31();
  D29():
    deopt 110 [r77];
  D31():
    deopt 116 [r87];
  L42():
    c4 = `is.object`(r77);
    if c4 then L44() else L45(r77);
  L48():
    sigma7 = ldf sigma;
    check L49() else D32();
  D32():
    deopt 118 [];
  L43(dx5):
    r81 = sqrt(dx5);
    goto L3();
  L44():
    dr4 = tryDispatchBuiltin.1("$", r77);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(r79):
    r80 = `$`(r79, <sym dispersion>);
    goto L43(r80);
  L49():
    p31 = prom<V +>{
      glm_qD93 = ld `glm.qD93`;
      glm_qD94 = force? glm_qD93;
      checkMissing(glm_qD94);
      return glm_qD94;
    };
    r89 = dyn sigma7(p31);
    check L50() else D33();
  D33():
    deopt 120 [r89];
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L50():
    `^`(r89, 2.0);
    summary3 = ldf summary;
    check L51() else D34();
  D34():
    deopt 124 [];
  L51():
    p32 = prom<V +>{
      glm_qD95 = ld `glm.qD93`;
      glm_qD96 = force? glm_qD95;
      checkMissing(glm_qD96);
      return glm_qD96;
    };
    r92 = dyn summary3(p32);
    check L52() else D35();
  D35():
    deopt 126 [r92];
  L52():
    c5 = `is.object`(r92);
    if c5 then L54() else L55(r92);
  L53():
    __4 = ldf `::`;
    check L57() else D36();
  L54():
    dr6 = tryDispatchBuiltin.1("$", r92);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(r94):
    r95 = `$`(r94, <sym dispersion>);
    goto L53();
  D36():
    deopt 129 [];
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L53();
  L57():
    r96 = dyn __4("utils", "example");
    check L58() else D37();
  D37():
    deopt 132 [r96];
  L58():
    checkFun.0(r96);
    r97 = r96 as cls;
    r98 = dyn r97[, echo]("SSD", FALSE);
    check L59() else D38();
  D38():
    deopt 137 [r98];
  L59():
    sigma8 = ldf sigma;
    check L60() else D39();
  D39():
    deopt 139 [];
  L60():
    p33 = prom<V +>{
      mlmfit = ld mlmfit;
      mlmfit1 = force? mlmfit;
      checkMissing(mlmfit1);
      return mlmfit1;
    };
    r100 = dyn sigma8(p33);
    check L61() else D40();
  D40():
    deopt 141 [r100];
  L61():
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L4():
    stopifnot2 = ldf stopifnot;
    check L66() else D43();
  L62():
    diag = ldf diag;
    check L64() else D41();
  L63():
    r101 = dyn base5(<lang diag(estVar(mlmfit))>);
    goto L4();
  D41():
    deopt 144 [];
  D43():
    deopt 149 [];
  L64():
    p35 = prom<V +>{
      estVar = ldf estVar;
      p34 = prom<V +>{
        mlmfit2 = ld mlmfit;
        mlmfit3 = force? mlmfit2;
        checkMissing(mlmfit3);
        return mlmfit3;
      };
      r104 = dyn estVar(p34);
      return r104;
    };
    r106 = dyn diag(p35);
    check L65() else D42();
  L66():
    p41 = prom<V +>{
      all_equal2 = ldf `all.equal`;
      p37 = prom<V +>{
        sigma9 = ldf sigma;
        p36 = prom<V +>{
          mlmfit4 = ld mlmfit;
          mlmfit5 = force? mlmfit4;
          checkMissing(mlmfit5);
          return mlmfit5;
        };
        r109 = dyn sigma9(p36);
        return r109;
      };
      p40 = prom<V +>{
        sym6 = ldf sqrt;
        base6 = ldf sqrt in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r112):
        return r112;
      L1():
        diag1 = ldf diag;
        p39 = prom<V +>{
          estVar1 = ldf estVar;
          p38 = prom<V +>{
            mlmfit6 = ld mlmfit;
            mlmfit7 = force? mlmfit6;
            checkMissing(mlmfit7);
            return mlmfit7;
          };
          r114 = dyn estVar1(p38);
          return r114;
        };
        r116 = dyn diag1(p39);
        r117 = sqrt(r116);
        goto L0(r117);
      L2():
        r111 = dyn base6(<lang diag(estVar(mlmfit))>);
        goto L0(r111);
      };
      r119 = dyn all_equal2(p37, p40);
      return r119;
    };
    r121 = dyn stopifnot2(p41);
    check L67() else D44();
  D42():
    deopt 146 [r106];
  D44():
    deopt 151 [r121];
  L65():
    r107 = sqrt(r106);
    goto L4();
  L67():
    popenv;
    return r121;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("sigma");
    goto L0(r2);
  L2():
    r = dyn base("sigma");
    goto L0(r);
  }
}