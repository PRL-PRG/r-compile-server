fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2313409601;
    st gaussian = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2313409601(link) {
  (reg link:*) -+> V { var link:*, reg link_isMissing:L, reg link_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg linktemp:*, reg linktemp1:V, reg c:L, reg r5:V, reg c1:L, reg deparse:cls, reg linktemp2:*, reg linktemp3:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg _in_:cls, reg linktemp4:*, reg linktemp5:V, reg p1:p(V +), reg okLinks:*, reg okLinks1:V, reg p2:p(V +), reg r14:V, reg c3:L, reg make_link:cls, reg linktemp6:*, reg linktemp7:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg link1:*, reg link2:V, reg c4:L, reg c5:L, reg make_link1:cls, reg link3:*, reg link4:V, reg p4:p(V +), reg r21:V, reg link5:*, reg link6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg link7:*, reg link8:V, reg inherits:cls, reg r24:V, reg c6:L, reg link9:*, reg link10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg stats:*, reg stats1:V, reg c7:L, reg stats3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg c8:V, reg r28:V, reg c9:L, reg stats4:*, reg stats5:V, reg c10:L, reg stats7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg dx4:V, reg stop:cls, reg gettextf:cls, reg linktemp8:*, reg linktemp9:V, reg p5:p(V +), reg family:*, reg family1:V, reg p6:p(V +), reg paste:cls, reg sQuote:cls, reg okLinks2:*, reg okLinks3:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg structure:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg family2:*, reg family3:V, reg linktemp10:*, reg linktemp11:V, reg stats8:*, reg stats9:V, reg c11:L, reg stats11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r42:V, reg stats12:*, reg stats13:V, reg c12:L, reg stats15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r43:V, reg r44:cls, reg r45:cls, reg r46:cls, reg stats16:*, reg stats17:V, reg c13:L, reg stats19:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg expression:cls, reg r50:V, reg r51:cls, reg stats20:*, reg stats21:V, reg c14:L, reg stats23:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r52:V, reg list:cls, reg r53:V, reg p11:p(V +), reg r55:V |
    mkenv;
    link_isMissing = missing.0(link);
    if link_isMissing then L0("identity") else L0(link);
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
    st family = "gaussian";
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
    r11 = dyn c2("inverse", "log", "identity");
    check L26() else D3();
  L25():
    r9 = dyn base2("inverse", "log", "identity");
    goto L5(r9);
  D2():
    deopt 12 [r7];
  D3():
    deopt 22 [r11];
  D4():
    deopt 28 [];
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
    deopt 31 [r14];
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
    deopt 33 [];
  D19():
    deopt 79 [];
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
    p11 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r41):
      return r41;
    L2():
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
      if c11 then L5() else L6(stats9);
    L3():
      r40 = dyn base6[family, link, linkfun, linkinv, variance, `dev.resids`, aic, `mu.eta`, initialize, validmu, valideta, dispersion](<sym family>, <sym linktemp>, <lang `$`(stats, linkfun)>, <lang `$`(stats, linkinv)>, <lang function((mu=), rep.int(1.0, length(mu)), NULL)>, <lang function((y=, mu=, wt=), `*`(wt, `(`(`^`(`(`(`-`(y, mu)), 2.0))), NULL)>, <lang function((y=, n=, mu=, wt=, dev=), {
          `<-`(nobs, length(y));
          `-`(`+`(`*`(nobs, `(`(`+`(log(`*`(`*`(`/`(dev, nobs), 2.0), pi)), 1.0))), 2.0), sum(log(wt)))
        }, NULL)>, <lang `$`(stats, mu.eta)>, <lang expression({
          `<-`(n, rep.int(1.0, nobs));
          if(`&&`(`&&`(`&&`(is.null(etastart), is.null(start)), is.null(mustart)), `(`(`||`(`(`(`&&`(`==`(`$`(family, link), "inverse"), any(`==`(y, 0.0)))), `(`(`&&`(`==`(`$`(family, link), "log"), any(`<=`(y, 0.0))))))), stop("cannot find valid starting values: please specify some"));
          `<-`(mustart, y)
        })>, <lang function((mu=), TRUE, NULL)>, <lang `$`(stats, valideta)>, NA_REAL);
      goto L0(r40);
    L4(dx6):
      stats12 = ld stats;
      stats13 = force? stats12;
      checkMissing(stats13);
      c12 = `is.object`(stats13);
      if c12 then L9() else L10(stats13);
    L5():
      dr4 = tryDispatchBuiltin.1("$", stats9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(stats11):
      r42 = `$`(stats11, <sym linkfun>);
      goto L4(r42);
    L7():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx5);
    L8(dx8):
      r44 = clos inner987613256;
      r45 = clos inner610199266;
      r46 = clos inner2639244623;
      stats16 = ld stats;
      stats17 = force? stats16;
      checkMissing(stats17);
      c13 = `is.object`(stats17);
      if c13 then L13() else L14(stats17);
    L9():
      dr6 = tryDispatchBuiltin.1("$", stats13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L11() else L10(dr6);
    L10(stats15):
      r43 = `$`(stats15, <sym linkinv>);
      goto L8(r43);
    L11():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L8(dx7);
    L12(dx10):
      sym7 = ldf expression;
      base7 = ldf expression in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L16() else L17();
    L13():
      dr8 = tryDispatchBuiltin.1("$", stats17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L15() else L14(dr8);
    L14(stats19):
      r47 = `$`(stats19, <sym mu.eta>);
      goto L12(r47);
    L1(r49):
      r51 = clos inner987613256;
      stats20 = ld stats;
      stats21 = force? stats20;
      checkMissing(stats21);
      c14 = `is.object`(stats21);
      if c14 then L19() else L20(stats21);
    L15():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L12(dx9);
    L16():
      expression = ldf expression in base;
      r50 = dyn expression(<lang {
        `<-`(n, rep.int(1.0, nobs));
        if(`&&`(`&&`(`&&`(is.null(etastart), is.null(start)), is.null(mustart)), `(`(`||`(`(`(`&&`(`==`(`$`(family, link), "inverse"), any(`==`(y, 0.0)))), `(`(`&&`(`==`(`$`(family, link), "log"), any(`<=`(y, 0.0))))))), stop("cannot find valid starting values: please specify some"));
        `<-`(mustart, y)
      }>);
      goto L1(r50);
    L17():
      r48 = dyn base7(<lang {
        `<-`(n, rep.int(1.0, nobs));
        if(`&&`(`&&`(`&&`(is.null(etastart), is.null(start)), is.null(mustart)), `(`(`||`(`(`(`&&`(`==`(`$`(family, link), "inverse"), any(`==`(y, 0.0)))), `(`(`&&`(`==`(`$`(family, link), "log"), any(`<=`(y, 0.0))))))), stop("cannot find valid starting values: please specify some"));
        `<-`(mustart, y)
      }>);
      goto L1(r48);
    L18(dx12):
      list = ldf list in base;
      r53 = dyn list(family3, linktemp11, dx6, dx8, r44, r45, r46, dx10, r49, r51, dx12, NA_REAL);
      goto L0(r53);
    L19():
      dr10 = tryDispatchBuiltin.1("$", stats21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L21() else L20(dr10);
    L20(stats23):
      r52 = `$`(stats23, <sym valideta>);
      goto L18(r52);
    L21():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L18(dx11);
    };
    r55 = dyn structure[, class](p11, "family");
    check L65() else D20();
  D7():
    deopt 35 [r16];
  D8():
    deopt 38 [link1];
  D20():
    deopt 83 [r55];
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
    return r55;
  D9():
    deopt 42 [];
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
    deopt 44 [r21];
  D12():
    deopt 51 [link7];
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
    deopt 46 [link5];
  D13():
    deopt 56 [r24];
  D14():
    deopt 57 [link9];
  D17():
    deopt 73 [];
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
    deopt 77 [r39];
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
    deopt 61 [stats];
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
    deopt 66 [stats4];
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
  (reg mu:*) -+> V { var mu:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg mu1:*, reg mu2:V, reg length:cls, reg r4:V, reg rep_int:cls, reg r5:V |
    mkenv;
    st mu = mu;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(1.0, <lang length(mu)>);
    goto L0(r);
  L1(r3):
    rep_int = ldf `rep.int` in base;
    r5 = dyn rep_int(1.0, r3);
    check L8() else D2();
  L4():
    mu1 = ld mu;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym mu>);
    goto L1(r2);
  D0():
    deopt 5 [mu1];
  D2():
    deopt 10 [r5];
  L6():
    mu2 = force? mu1;
    checkMissing(mu2);
    length = ldf length in base;
    r4 = dyn length(mu2);
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 8 [r4];
  L7():
    goto L1(r4);
  }
}
fun inner610199266(y, mu, wt) {
  (reg y:*, reg mu:*, reg wt:*) -+> V { var y:*, var mu:*, var wt:*, reg wt1:*, reg wt2:V, reg y1:*, reg y2:V, reg mu1:*, reg mu2:V, reg r:V, reg r1:V, reg r2:V |
    mkenv;
    st y = y;
    st mu = mu;
    st wt = wt;
    wt1 = ld wt;
    check L0() else D0();
  D0():
    deopt 0 [wt1];
  L0():
    wt2 = force? wt1;
    checkMissing(wt2);
    y1 = ld y;
    check L1() else D1();
  D1():
    deopt 1 [wt2, y1];
  L1():
    y2 = force? y1;
    checkMissing(y2);
    mu1 = ld mu;
    check L2() else D2();
  D2():
    deopt 2 [wt2, y2, mu1];
  L2():
    mu2 = force? mu1;
    checkMissing(mu2);
    r = `-`(y2, mu2);
    r1 = `^`(r, 2.0);
    r2 = `*`(wt2, r1);
    popenv;
    return r2;
  }
}
fun inner2639244623(y, n, mu, wt, dev) {
  (reg y:*, reg n:*, reg mu:*, reg wt:*, reg dev:*) -+> V { var y:*, var n:*, var mu:*, var wt:*, var dev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg length:cls, reg r2:V, reg nobs:*, reg nobs1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg nobs4:V, reg r4:V, reg dev1:*, reg dev2:V, reg nobs5:*, reg nobs6:V, reg r5:V, reg r6:V, reg r7:V, reg r8:V, reg r9:V, reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg r21:V, reg wt1:*, reg wt2:V, reg r22:V, reg sum:cls, reg r23:V, reg r24:V |
    mkenv;
    st y = y;
    st n = n;
    st mu = mu;
    st wt = wt;
    st dev = dev;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st nobs = r1;
    nobs = ld nobs;
    check L8() else D2();
  L4():
    y1 = ld y;
    check L6() else D0();
  L5():
    r = dyn base(<sym y>);
    goto L0(r);
  D0():
    deopt 2 [y1];
  D2():
    deopt 7 [nobs];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    length = ldf length in base;
    r2 = dyn length(y2);
    check L7() else D1();
  L8():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    sym1 = ldf log;
    base1 = ldf log in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  L1(nobs4, r4):
    r9 = `+`(r4, 1.0);
    r10 = `*`(nobs4, r9);
    r11 = `+`(r10, 2.0);
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L7():
    goto L0(r2);
  L9():
    dev1 = ld dev;
    check L11() else D3();
  L10():
    r3 = dyn base1(<lang `*`(`*`(`/`(dev, nobs), 2.0), pi)>);
    goto L1(nobs1, r3);
  D3():
    deopt 9 [nobs1, dev1];
  L2(r15, r16):
    r24 = `-`(r15, r16);
    popenv;
    return r24;
  L11():
    dev2 = force? dev1;
    checkMissing(dev2);
    nobs5 = ld nobs;
    check L12() else D4();
  L13():
    sym3 = ldf log;
    base3 = ldf log in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L14():
    r14 = dyn base2(<lang log(wt)>);
    goto L2(r11, r14);
  D4():
    deopt 10 [nobs1, dev2, nobs5];
  L3(r20, r21):
    sum = ldf sum in base;
    r23 = dyn sum(r21);
    check L18() else D6();
  L12():
    nobs6 = force? nobs5;
    checkMissing(nobs6);
    r5 = `/`(dev2, nobs6);
    r6 = `*`(r5, 2.0);
    r7 = `*`(r6, 3.141592653589793);
    r8 = log(r7, 2.718281828459045);
    goto L1(nobs1, r8);
  L15():
    wt1 = ld wt;
    check L17() else D5();
  L16():
    r19 = dyn base3(<sym wt>);
    goto L3(r11, r19);
  D5():
    deopt 25 [r11, wt1];
  D6():
    deopt 29 [r20, r23];
  L17():
    wt2 = force? wt1;
    checkMissing(wt2);
    r22 = log(wt2, 2.718281828459045);
    goto L3(r11, r22);
  L18():
    goto L2(r20, r23);
  }
}