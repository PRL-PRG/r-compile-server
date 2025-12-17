fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner214389980;
    st get_S4_generics_with_methods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner214389980(env, verbose) {
  (reg env:*, reg verbose:*) -+> V { var env:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg env1:*, reg env2:V, reg as_environment:cls, reg r4:V, reg __:cls, reg r5:V, reg r6:cls, reg env3:*, reg env4:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg r11:*, reg r12:V, reg length:cls, reg r13:V, reg c:L, reg c2:V, reg lapply:cls, reg r14:*, reg r15:V, reg p2:p(V +), reg r17:cls, reg p3:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg c5:L, reg r21:V, reg vapply:cls, reg hasM:*, reg hasM1:V, reg p4:p(V +), reg inherits:*, reg inherits1:V, reg p5:p(V +), reg r24:V, reg any:cls, reg r25:V, reg c6:L, reg r26:cls, reg r27:*, reg r28:V, reg c9:L, reg c11:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg c13:L, reg dx1:V, reg hasErr:*, reg hasErr1:V, reg __1:cls, reg r31:V, reg __2:cls, reg r32:V, reg c14:L, reg c16:L, reg r34:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c18:L, reg dx3:V, reg hasErr2:*, reg hasErr3:V, reg __3:cls, reg r35:V, reg warning:cls, reg gettextf:cls, reg format:cls, reg env5:*, reg env6:V, reg p6:p(V +), reg r37:V, reg p7:p(V +), reg paste:cls, reg sQuote:cls, reg rErr:*, reg rErr1:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg paste1:cls, reg paste2:cls, reg dq:cls, reg pkgs:*, reg pkgs1:V, reg p11:p(V +), reg r45:V, reg p12:p(V +), reg dq1:cls, reg rErr2:*, reg rErr3:V, reg p13:p(V +), reg r48:V, reg p14:p(V +), reg r50:V, reg p15:p(V +), reg r52:V, reg p16:p(V +), reg r54:V, reg p17:p(V +), reg r56:V, reg hasM2:*, reg hasM3:V, reg c19:L, reg c21:L, reg hasM5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c23:L, reg dx5:V, reg hasErr4:*, reg hasErr5:V, reg r57:V, reg __4:cls, reg r58:V, reg c24:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg c27:L, reg r60:V, reg unlist:cls, reg hasM6:*, reg hasM7:V, reg p18:p(V +), reg r62:V, reg all:cls, reg r63:V, reg r64:V, reg c28:L, reg c29:V, reg c31:L, reg verbose1:*, reg verbose2:V, reg c32:L, reg message:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg r66:V, reg ok:*, reg ok1:V, reg r67:V, reg sum:cls, reg r68:V, reg p19:p(V +), reg r70:V, reg p20:p(V +), reg format1:cls, reg env7:*, reg env8:V, reg p21:p(V +), reg r73:V, reg p22:p(V +), reg paste3:cls, reg sQuote1:cls, reg r75:*, reg r76:V, reg c33:L, reg r78:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg ok2:*, reg ok3:V, reg r79:V, reg __5:cls, reg r80:V, reg p23:p(V +), reg r82:V, reg p24:p(V +), reg r84:V, reg p25:p(V +), reg r86:V, reg p26:p(V +), reg r88:V, reg r90:*, reg r91:V, reg c34:L, reg r93:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg ok4:*, reg ok5:V, reg __6:cls, reg r94:V, reg as_vector:cls, reg r95:*, reg r96:V, reg p27:p(V +), reg r98:V |
    mkenv;
    st env = env;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0() else L1(verbose);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L1(p);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L2(r3):
    st env = r3;
    __ = ldf `::`;
    check L20() else D2();
  L16():
    env1 = ld env;
    check L18() else D0();
  L17():
    r2 = dyn base(<sym env>);
    goto L2(r2);
  D0():
    deopt 2 [env1];
  D2():
    deopt 8 [];
  L18():
    env2 = force? env1;
    checkMissing(env2);
    as_environment = ldf `as.environment` in base;
    r4 = dyn as_environment(env2);
    check L19() else D1();
  L20():
    r5 = dyn __("methods", "getGenerics");
    check L21() else D3();
  D1():
    deopt 5 [r4];
  D3():
    deopt 11 [r5];
  L19():
    goto L2(r4);
  L21():
    checkFun.0(r5);
    r6 = r5 as cls;
    p1 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r8 = dyn r6(p1);
    check L22() else D4();
  D4():
    deopt 14 [r8];
  L22():
    st r = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3(r10):
    c = `as.logical`(r10);
    if c then L27() else L4(c);
  L23():
    r11 = ld r;
    check L25() else D5();
  L24():
    r9 = dyn base1(<sym r>);
    goto L3(r9);
  D5():
    deopt 18 [r11];
  L4(c2):
    c31 = `as.logical`(c2);
    if c31 then L59() else L12();
  L25():
    r12 = force? r11;
    checkMissing(r12);
    length = ldf length in base;
    r13 = dyn length(r12);
    check L26() else D6();
  L27():
    lapply = ldf lapply;
    check L28() else D7();
  D6():
    deopt 21 [r13];
  D7():
    deopt 23 [c];
  L12():
    as_vector = ldf `as.vector`;
    check L71() else D27();
  L26():
    goto L3(r13);
  L28():
    p2 = prom<V +>{
      r14 = ld r;
      r15 = force? r14;
      checkMissing(r15);
      return r15;
    };
    p3 = prom<V +>{
      r17 = clos inner3355313315;
      return r17;
    };
    r19 = dyn lapply(p2, p3);
    check L29() else D8();
  L59():
    verbose1 = ld verbose;
    check L60() else D22();
  D8():
    deopt 26 [c, r19];
  D22():
    deopt 82 [verbose1];
  D27():
    deopt 98 [];
  L29():
    st hasM = r19;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L60():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c32 = `as.logical`(verbose2);
    if c32 then L61() else L13();
  L71():
    p27 = prom<V +>{
      r95 = ld r;
      r96 = force? r95;
      checkMissing(r96);
      return r96;
    };
    r98 = dyn as_vector(p27);
    check L72() else D28();
  D28():
    deopt 100 [r98];
  L5(c5, r21):
    c6 = `as.logical`(r21);
    if c6 then L35() else L6();
  L13():
    goto L14();
  L14():
    r90 = ld r;
    check L65() else D25();
  L30():
    vapply = ldf vapply;
    check L32() else D9();
  L31():
    r20 = dyn base2(<lang `<-`(hasErr, vapply(hasM, inherits, NA_LGL, what="error"))>);
    goto L5(c, r20);
  L61():
    message = ldf message;
    check L62() else D23();
  L72():
    popenv;
    return r98;
  D9():
    deopt 31 [c];
  D23():
    deopt 85 [];
  D25():
    deopt 92 [r90];
  L6():
    goto L10(c5);
  L10(c24):
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L32():
    p4 = prom<V +>{
      hasM = ld hasM;
      hasM1 = force? hasM;
      checkMissing(hasM1);
      return hasM1;
    };
    p5 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r24 = dyn vapply[, , , what](p4, p5, NA_LGL, "error");
    check L33() else D10();
  L35():
    r26 = clos inner29328453;
    st dq = r26;
    r27 = ld r;
    check L36() else D12();
  L62():
    p26 = prom<V +>{
      sprintf = ldf sprintf;
      p20 = prom<V +>{
        ngettext = ldf ngettext;
        p19 = prom<V +>{
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r66):
          return r66;
        L1():
          ok = ld ok;
          ok1 = force? ok;
          checkMissing(ok1);
          r67 = `!`(ok1);
          sum = ldf sum in base;
          r68 = dyn sum(r67);
          goto L0(r68);
        L2():
          r65 = dyn base4(<lang `!`(ok)>);
          goto L0(r65);
        };
        r70 = dyn ngettext(p19, "Generic without any methods in %s: %s", "Generics without any methods in %s: %s");
        return r70;
      };
      p22 = prom<V +>{
        format1 = ldf format;
        p21 = prom<V +>{
          env7 = ld env;
          env8 = force? env7;
          checkMissing(env8);
          return env8;
        };
        r73 = dyn format1(p21);
        return r73;
      };
      p25 = prom<V +>{
        paste3 = ldf paste;
        p24 = prom<V +>{
          sQuote1 = ldf sQuote;
          p23 = prom<V +>{
            r75 = ld r;
            r76 = force? r75;
            checkMissing(r76);
            c33 = `is.object`(r76);
            if c33 then L1() else L2(r76);
          L0(dx8):
            return dx8;
          L1():
            dr6 = tryDispatchBuiltin.1("[", r76);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L3() else L2(dr6);
          L2(r78):
            ok2 = ld ok;
            ok3 = force? ok2;
            checkMissing(ok3);
            r79 = `!`(ok3);
            __5 = ldf `[` in base;
            r80 = dyn __5(r78, r79);
            goto L0(r80);
          L3():
            dx7 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx7);
          };
          r82 = dyn sQuote1(p23);
          return r82;
        };
        r84 = dyn paste3[, collapse](p24, ", ");
        return r84;
      };
      r86 = dyn sprintf(p20, p22, p25);
      return r86;
    };
    r88 = dyn message[, domain](p26, NA_LGL);
    check L63() else D24();
  L65():
    r91 = force? r90;
    checkMissing(r91);
    c34 = `is.object`(r91);
    if c34 then L66() else L67(r91);
  D10():
    deopt 37 [c, r24];
  D12():
    deopt 44 [c5, r27];
  D24():
    deopt 89 [r88];
  L11(c27, r60):
    r64 = `!`(r60);
    c28 = `as.logical`(r64);
    c29 = `&&`(c27, c28);
    goto L4(c29);
  L15(dx10):
    popenv;
    return dx10;
  L33():
    st hasErr = r24;
    any = ldf any in base;
    r25 = dyn any(r24);
    check L34() else D11();
  L36():
    r28 = force? r27;
    checkMissing(r28);
    c9 = `is.object`(r28);
    if c9 then L37() else L38(c5, r28);
  L53():
    unlist = ldf unlist;
    check L55() else D19();
  L54():
    r59 = dyn base3(<lang `<-`(ok, unlist(hasM))>);
    goto L11(c24, r59);
  L63():
    goto L14();
  L66():
    dr8 = tryDispatchBuiltin.1("[", r91);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(r93):
    ok4 = ld ok;
    check L69() else D26();
  D11():
    deopt 40 [c, r25];
  D19():
    deopt 74 [c24];
  D26():
    deopt 94 [r93, ok4];
  L7(c13, dx1):
    st rErr = dx1;
    __2 = ldf `@` in base;
    r32 = dyn __2(<sym r>, <sym package>);
    c14 = `is.object`(r32);
    if c14 then L41() else L42(c13, r32);
  L34():
    goto L5(c, r25);
  L37():
    dr = tryDispatchBuiltin.1("[", r28);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(c5, dr);
  L38(c11, r30):
    hasErr = ld hasErr;
    check L40() else D13();
  L55():
    p18 = prom<V +>{
      hasM6 = ld hasM;
      hasM7 = force? hasM6;
      checkMissing(hasM7);
      return hasM7;
    };
    r62 = dyn unlist(p18);
    check L56() else D20();
  L68():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx9);
  L69():
    ok5 = force? ok4;
    __6 = ldf `[` in base;
    r94 = dyn __6(r93, ok5);
    goto L15(r94);
  D13():
    deopt 46 [c11, r30, hasErr];
  D20():
    deopt 76 [c24, r62];
  L8(c18, dx3):
    st pkgs = dx3;
    warning = ldf warning;
    check L45() else D15();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(c5, dx);
  L40():
    hasErr1 = force? hasErr;
    __1 = ldf `[` in base;
    r31 = dyn __1(r30, hasErr1);
    goto L7(c11, r31);
  L41():
    dr2 = tryDispatchBuiltin.1("[", r32);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(c13, dr2);
  L42(c16, r34):
    hasErr2 = ld hasErr;
    check L44() else D14();
  L56():
    st ok = r62;
    all = ldf all in base;
    r63 = dyn all(r62);
    check L57() else D21();
  D14():
    deopt 52 [c16, r34, hasErr2];
  D15():
    deopt 57 [c18];
  D21():
    deopt 79 [c24, r63];
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(c13, dx2);
  L44():
    hasErr3 = force? hasErr2;
    __3 = ldf `[` in base;
    r35 = dyn __3(r34, hasErr3);
    goto L8(c16, r35);
  L45():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        format = ldf format;
        p6 = prom<V +>{
          env5 = ld env;
          env6 = force? env5;
          checkMissing(env6);
          return env6;
        };
        r37 = dyn format(p6);
        return r37;
      };
      p10 = prom<V +>{
        paste = ldf paste;
        p9 = prom<V +>{
          sQuote = ldf sQuote;
          p8 = prom<V +>{
            rErr = ld rErr;
            rErr1 = force? rErr;
            checkMissing(rErr1);
            return rErr1;
          };
          r40 = dyn sQuote(p8);
          return r40;
        };
        r42 = dyn paste[, collapse](p9, ", ");
        return r42;
      };
      p16 = prom<V +>{
        paste1 = ldf paste0;
        p15 = prom<V +>{
          paste2 = ldf paste;
          p12 = prom<V +>{
            dq = ldf dq;
            p11 = prom<V +>{
              pkgs = ld pkgs;
              pkgs1 = force? pkgs;
              checkMissing(pkgs1);
              return pkgs1;
            };
            r45 = dyn dq(p11);
            return r45;
          };
          p14 = prom<V +>{
            dq1 = ldf dq;
            p13 = prom<V +>{
              rErr2 = ld rErr;
              rErr3 = force? rErr2;
              checkMissing(rErr3);
              return rErr3;
            };
            r48 = dyn dq1(p13);
            return r48;
          };
          r50 = dyn paste2[, , sep](p12, p14, ", ");
          return r50;
        };
        r52 = dyn paste1("  importFrom(", p15, ")\n");
        return r52;
      };
      r54 = dyn gettextf("Generics 'g' in 'env' %s where '%s' errors: %s\nMay need something like\n\n%s\nin NAMESPACE.", p7, "hasMethods(g, env)", p10, p16);
      return r54;
    };
    r56 = dyn warning[, domain](p17, NA_LGL);
    check L46() else D16();
  L57():
    goto L11(c24, r63);
  D16():
    deopt 61 [c18, r56];
  L46():
    hasM2 = ld hasM;
    check L47() else D17();
  D17():
    deopt 62 [c18, hasM2];
  L47():
    hasM3 = force? hasM2;
    checkMissing(hasM3);
    c19 = `is.object`(hasM3);
    if c19 then L48() else L49(c18, hasM3);
  L9(c23, dx5):
    st hasM = dx5;
    goto L10(c23);
  L48():
    dr4 = tryDispatchBuiltin.1("[", hasM3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(c18, dr4);
  L49(c21, hasM5):
    hasErr4 = ld hasErr;
    check L51() else D18();
  D18():
    deopt 64 [c21, hasM5, hasErr4];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(c18, dx4);
  L51():
    hasErr5 = force? hasErr4;
    checkMissing(hasErr5);
    r57 = `!`(hasErr5);
    __4 = ldf `[` in base;
    r58 = dyn __4(hasM5, r57);
    goto L9(c21, r58);
  }
}
fun inner3355313315(g) {
  (reg g:*) -+> V { var g:*, reg tryCatch:cls, reg __:cls, reg r:V, reg r1:cls, reg g1:*, reg g2:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st g = g;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("methods", "hasMethods");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        g1 = ld g;
        g2 = force? g1;
        checkMissing(g2);
        return g2;
      };
      p1 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      r4 = dyn r1[, where](p, p1);
      return r4;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r7 = dyn tryCatch[, error](p2, p3);
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner29328453(ch) {
  (reg ch:*) -+> V { var ch:*, reg paste0:cls, reg ch1:*, reg ch2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st ch = ch;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      ch1 = ld ch;
      ch2 = force? ch1;
      checkMissing(ch2);
      return ch2;
    };
    r1 = dyn paste0("\"", p, "\"");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}