fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner399130354;
    st quasibinomial = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner399130354(link) {
  (reg link:*) -+> V { var link:*, reg link_isMissing:L, reg link_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg linktemp:*, reg linktemp1:V, reg c:L, reg r5:V, reg c1:L, reg deparse:cls, reg linktemp2:*, reg linktemp3:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg _in_:cls, reg linktemp4:*, reg linktemp5:V, reg p1:p(V +), reg okLinks:*, reg okLinks1:V, reg p2:p(V +), reg r14:V, reg c3:L, reg make_link:cls, reg linktemp6:*, reg linktemp7:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg link1:*, reg link2:V, reg c4:L, reg c5:L, reg make_link1:cls, reg link3:*, reg link4:V, reg p4:p(V +), reg r21:V, reg link5:*, reg link6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg link7:*, reg link8:V, reg inherits:cls, reg r24:V, reg c6:L, reg link9:*, reg link10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg stats:*, reg stats1:V, reg c7:L, reg stats3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg c8:V, reg r28:V, reg c9:L, reg stats4:*, reg stats5:V, reg c10:L, reg stats7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg dx4:V, reg stop:cls, reg gettextf:cls, reg linktemp8:*, reg linktemp9:V, reg p5:p(V +), reg family:*, reg family1:V, reg p6:p(V +), reg paste:cls, reg sQuote:cls, reg okLinks2:*, reg okLinks3:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg structure:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg family2:*, reg family3:V, reg linktemp10:*, reg linktemp11:V, reg stats8:*, reg stats9:V, reg c11:L, reg stats11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r42:V, reg stats12:*, reg stats13:V, reg c12:L, reg stats15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r43:V, reg r44:cls, reg r45:cls, reg r46:cls, reg stats16:*, reg stats17:V, reg c13:L, reg stats19:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r47:V, reg binomInitialize:cls, reg family4:*, reg family5:V, reg p11:p(V +), reg r49:V, reg r50:cls, reg stats20:*, reg stats21:V, reg c14:L, reg stats23:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r51:V, reg list:cls, reg r52:V, reg p12:p(V +), reg r54:V |
    mkenv;
    link_isMissing = missing.0(link);
    if link_isMissing then L0("logit") else L0(link);
  L0(link_orDefault):
    st link = link_orDefault;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    st linktemp = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L15():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym link>);
    goto L1(r2);
  L16():
    r = dyn base(<sym link>);
    goto L1(r);
  L2(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L20() else L3();
  L17():
    linktemp = ld linktemp;
    check L19() else D0();
  L18():
    r3 = dyn base1(<sym linktemp>);
    goto L2(r3);
  D0():
    deopt 5 [linktemp];
  L3():
    goto L4();
  L4():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L19():
    linktemp1 = force? linktemp;
    checkMissing(linktemp1);
    c = `is.character`(linktemp1);
    goto L2(c);
  L20():
    deparse = ldf deparse;
    check L21() else D1();
  D1():
    deopt 10 [];
  L5(r10):
    st okLinks = r10;
    st family = "quasibinomial";
    _in_ = ldf `%in%`;
    check L27() else D4();
  L21():
    p = prom<V +>{
      linktemp2 = ld linktemp;
      linktemp3 = force? linktemp2;
      checkMissing(linktemp3);
      return linktemp3;
    };
    r7 = dyn deparse(p);
    check L22() else D2();
  L24():
    c2 = ldf c in base;
    r11 = dyn c2("logit", "probit", "cloglog", "cauchit", "log");
    check L26() else D3();
  L25():
    r9 = dyn base2("logit", "probit", "cloglog", "cauchit", "log");
    goto L5(r9);
  D2():
    deopt 12 [r7];
  D3():
    deopt 24 [r11];
  D4():
    deopt 30 [];
  L22():
    st linktemp = r7;
    goto L4();
  L26():
    goto L5(r11);
  L27():
    p1 = prom<V +>{
      linktemp4 = ld linktemp;
      linktemp5 = force? linktemp4;
      checkMissing(linktemp5);
      return linktemp5;
    };
    p2 = prom<V +>{
      okLinks = ld okLinks;
      okLinks1 = force? okLinks;
      checkMissing(okLinks1);
      return okLinks1;
    };
    r14 = dyn _in_(p1, p2);
    check L28() else D5();
  D5():
    deopt 33 [r14];
  L28():
    c3 = `as.logical`(r14);
    if c3 then L29() else L6();
  L6():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L7():
    structure = ldf structure;
    check L64() else D19();
  L29():
    make_link = ldf `make.link`;
    check L30() else D6();
  D6():
    deopt 35 [];
  D19():
    deopt 81 [];
  L8(r19):
    c5 = `as.logical`(r19);
    if c5 then L36() else L9();
  L30():
    p3 = prom<V +>{
      linktemp6 = ld linktemp;
      linktemp7 = force? linktemp6;
      checkMissing(linktemp7);
      return linktemp7;
    };
    r16 = dyn make_link(p3);
    check L31() else D7();
  L33():
    link1 = ld link;
    check L35() else D8();
  L34():
    r18 = dyn base3(<sym link>);
    goto L8(r18);
  L64():
    p12 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      family2 = ld family;
      family3 = force? family2;
      checkMissing(family3);
      linktemp10 = ld linktemp;
      linktemp11 = force? linktemp10;
      checkMissing(linktemp11);
      stats8 = ld stats;
      stats9 = force? stats8;
      checkMissing(stats9);
      c11 = `is.object`(stats9);
      if c11 then L4() else L5(stats9);
    L2():
      r40 = dyn base6[family, link, linkfun, linkinv, variance, `dev.resids`, aic, `mu.eta`, initialize, validmu, valideta, dispersion](<sym family>, <sym linktemp>, <lang `$`(stats, linkfun)>, <lang `$`(stats, linkinv)>, <lang function((mu=), `*`(mu, `(`(`-`(1.0, mu))), NULL)>, <lang function((y=, mu=, wt=), .Call(C_binomial_dev_resids, y, mu, wt), NULL)>, <lang function((y=, n=, mu=, wt=, dev=), NA_LGL, NULL)>, <lang `$`(stats, mu.eta)>, <lang binomInitialize(family)>, <lang function((mu=), `&&`(all(is.finite(mu)), all(`&`(`<`(0.0, mu), `<`(mu, 1.0)))), NULL)>, <lang `$`(stats, valideta)>, NA_REAL);
      goto L0(r40);
    L3(dx6):
      stats12 = ld stats;
      stats13 = force? stats12;
      checkMissing(stats13);
      c12 = `is.object`(stats13);
      if c12 then L8() else L9(stats13);
    L4():
      dr4 = tryDispatchBuiltin.1("$", stats9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(stats11):
      r42 = `$`(stats11, <sym linkfun>);
      goto L3(r42);
    L6():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx5);
    L7(dx8):
      r44 = clos inner987613256;
      r45 = clos inner610199266;
      r46 = clos inner2639244623;
      stats16 = ld stats;
      stats17 = force? stats16;
      checkMissing(stats17);
      c13 = `is.object`(stats17);
      if c13 then L12() else L13(stats17);
    L8():
      dr6 = tryDispatchBuiltin.1("$", stats13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(stats15):
      r43 = `$`(stats15, <sym linkinv>);
      goto L7(r43);
    L10():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L7(dx7);
    L11(dx10):
      binomInitialize = ldf binomInitialize;
      p11 = prom<V +>{
        family4 = ld family;
        family5 = force? family4;
        checkMissing(family5);
        return family5;
      };
      r49 = dyn binomInitialize(p11);
      r50 = clos inner987613256;
      stats20 = ld stats;
      stats21 = force? stats20;
      checkMissing(stats21);
      c14 = `is.object`(stats21);
      if c14 then L16() else L17(stats21);
    L12():
      dr8 = tryDispatchBuiltin.1("$", stats17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L14() else L13(dr8);
    L13(stats19):
      r47 = `$`(stats19, <sym mu.eta>);
      goto L11(r47);
    L14():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L11(dx9);
    L15(dx12):
      list = ldf list in base;
      r52 = dyn list(family3, linktemp11, dx6, dx8, r44, r45, r46, dx10, r49, r50, dx12, NA_REAL);
      goto L0(r52);
    L16():
      dr10 = tryDispatchBuiltin.1("$", stats21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L18() else L17(dr10);
    L17(stats23):
      r51 = `$`(stats23, <sym valideta>);
      goto L15(r51);
    L18():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L15(dx11);
    };
    r54 = dyn structure[, class](p12, "family");
    check L65() else D20();
  D7():
    deopt 37 [r16];
  D8():
    deopt 40 [link1];
  D20():
    deopt 85 [r54];
  L9():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L31():
    st stats = r16;
    goto L7();
  L35():
    link2 = force? link1;
    checkMissing(link2);
    c4 = `is.character`(link2);
    goto L8(c4);
  L36():
    make_link1 = ldf `make.link`;
    check L37() else D9();
  L65():
    popenv;
    return r54;
  D9():
    deopt 44 [];
  L10(r23):
    c6 = `as.logical`(r23);
    if c6 then L45() else L11();
  L37():
    p4 = prom<V +>{
      link3 = ld link;
      link4 = force? link3;
      checkMissing(link4);
      return link4;
    };
    r21 = dyn make_link1(p4);
    check L38() else D10();
  L41():
    link7 = ld link;
    check L43() else D12();
  L42():
    r22 = dyn base4(<sym link>, "link-glm");
    goto L10(r22);
  D10():
    deopt 46 [r21];
  D12():
    deopt 53 [link7];
  L11():
    stop = ldf stop;
    check L62() else D17();
  L38():
    st stats = r21;
    link5 = ld link;
    check L39() else D11();
  L43():
    link8 = force? link7;
    checkMissing(link8);
    inherits = ldf inherits in base;
    r24 = dyn inherits(link8, "link-glm", FALSE);
    check L44() else D13();
  L45():
    link9 = ld link;
    check L46() else D14();
  D11():
    deopt 48 [link5];
  D13():
    deopt 58 [r24];
  D14():
    deopt 59 [link9];
  D17():
    deopt 75 [];
  L39():
    link6 = force? link5;
    checkMissing(link6);
    st linktemp = link6;
    goto L7();
  L44():
    goto L10(r24);
  L46():
    link10 = force? link9;
    checkMissing(link10);
    st stats = link10;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L62():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        linktemp8 = ld linktemp;
        linktemp9 = force? linktemp8;
        checkMissing(linktemp9);
        return linktemp9;
      };
      p6 = prom<V +>{
        family = ld family;
        family1 = force? family;
        checkMissing(family1);
        return family1;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          sQuote = ldf sQuote;
          p7 = prom<V +>{
            okLinks2 = ld okLinks;
            okLinks3 = force? okLinks2;
            checkMissing(okLinks3);
            return okLinks3;
          };
          r33 = dyn sQuote(p7);
          return r33;
        };
        r35 = dyn paste[, collapse](p8, ", ");
        return r35;
      };
      r37 = dyn gettextf("link \"%s\" not available for %s family; available links are %s", p5, p6, p9);
      return r37;
    };
    r39 = dyn stop[, domain](p10, NA_LGL);
    check L63() else D18();
  D18():
    deopt 79 [r39];
  L12(r26):
    r28 = `!`(r26);
    c9 = `as.logical`(r28);
    if c9 then L54() else L13();
  L47():
    stats = ld stats;
    check L49() else D15();
  L48():
    r25 = dyn base5(<lang `$`(stats, name)>);
    goto L12(r25);
  L63():
    goto L7();
  D15():
    deopt 63 [stats];
  L13():
    goto L14(NULL);
  L14(dx4):
    goto L7();
  L49():
    stats1 = force? stats;
    checkMissing(stats1);
    c7 = `is.object`(stats1);
    if c7 then L51() else L52(stats1);
  L54():
    stats4 = ld stats;
    check L55() else D16();
  D16():
    deopt 68 [stats4];
  L50(dx1):
    c8 = `==`(dx1, NULL);
    goto L12(c8);
  L51():
    dr = tryDispatchBuiltin.1("$", stats1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(stats3):
    r27 = `$`(stats3, <sym name>);
    goto L50(r27);
  L55():
    stats5 = force? stats4;
    checkMissing(stats5);
    c10 = `is.object`(stats5);
    if c10 then L57() else L58(stats5);
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L50(dx);
  L56(dx3):
    st linktemp = dx3;
    goto L14(dx3);
  L57():
    dr2 = tryDispatchBuiltin.1("$", stats5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(stats7):
    r29 = `$`(stats7, <sym name>);
    goto L56(r29);
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L56(dx2);
  }
}
fun inner987613256(mu) {
  (reg mu:*) -+> V { var mu:*, reg mu1:*, reg mu2:V, reg mu3:*, reg mu4:V, reg r:V, reg r1:V |
    mkenv;
    st mu = mu;
    mu1 = ld mu;
    check L0() else D0();
  D0():
    deopt 0 [mu1];
  L0():
    mu2 = force? mu1;
    checkMissing(mu2);
    mu3 = ld mu;
    check L1() else D1();
  D1():
    deopt 2 [mu2, 1.0, mu3];
  L1():
    mu4 = force? mu3;
    checkMissing(mu4);
    r = `-`(1.0, mu4);
    r1 = `*`(mu2, r);
    popenv;
    return r1;
  }
}
fun inner610199266(y, mu, wt) {
  (reg y:*, reg mu:*, reg wt:*) -+> V { var y:*, var mu:*, var wt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_binomial_dev_resids:*, reg C_binomial_dev_resids1:V, reg y1:*, reg y2:V, reg mu1:*, reg mu2:V, reg wt1:*, reg wt2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st y = y;
    st mu = mu;
    st wt = wt;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_binomial_dev_resids = ld C_binomial_dev_resids;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_binomial_dev_resids>, <sym y>, <sym mu>, <sym wt>);
    goto L0(r);
  D0():
    deopt 1 [C_binomial_dev_resids];
  L3():
    C_binomial_dev_resids1 = force? C_binomial_dev_resids;
    checkMissing(C_binomial_dev_resids1);
    y1 = ld y;
    check L4() else D1();
  D1():
    deopt 2 [C_binomial_dev_resids1, y1];
  L4():
    y2 = force? y1;
    checkMissing(y2);
    mu1 = ld mu;
    check L5() else D2();
  D2():
    deopt 3 [C_binomial_dev_resids1, y2, mu1];
  L5():
    mu2 = force? mu1;
    checkMissing(mu2);
    wt1 = ld wt;
    check L6() else D3();
  D3():
    deopt 4 [C_binomial_dev_resids1, y2, mu2, wt1];
  L6():
    wt2 = force? wt1;
    checkMissing(wt2);
    vargs = dots[y2, mu2, wt2];
    r2 = `.Call`(C_binomial_dev_resids1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner2639244623(y, n, mu, wt, dev) {
  (reg y:*, reg n:*, reg mu:*, reg wt:*, reg dev:*) -+> V { var y:*, var n:*, var mu:*, var wt:*, var dev:* |
    mkenv;
    st y = y;
    st n = n;
    st mu = mu;
    st wt = wt;
    st dev = dev;
    popenv;
    return NA_LGL;
  }
}