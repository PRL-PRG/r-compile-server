fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2113327841;
    st `.gsub_with_transformed_matches` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2113327841(pattern, replacement, x, trafo, count, `...`) {
  (reg pattern:*, reg replacement:*, reg x:*, reg trafo:*, reg count:*, reg ddd:dots) -+> V { var pattern:*, var replacement:*, var x:*, var trafo:*, var count:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg trafo1:*, reg trafo2:V, reg is_list:cls, reg r3:V, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg trafo3:*, reg trafo4:V, reg list:cls, reg r7:V, reg gregexpr:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg ddd1:dots?, reg r11:V, reg lapply:cls, reg regmatches:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg m:*, reg m1:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:cls, reg p5:p(V +), reg r18:V, reg v:*, reg v1:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p6:p(V +), reg r20:V, reg x5:*, reg x6:V |
    mkenv;
    st pattern = pattern;
    st replacement = replacement;
    st x = x;
    st trafo = trafo;
    st count = count;
    st `...` = ddd;
    r = clos inner1856213936;
    st replace = r;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L8() else L1();
  L4():
    trafo1 = ld trafo;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym trafo>);
    goto L0(r1);
  D0():
    deopt 5 [trafo1];
  L1():
    goto L3();
  L3():
    gregexpr = ldf gregexpr;
    check L14() else D4();
  L6():
    trafo2 = force? trafo1;
    checkMissing(trafo2);
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(trafo2);
    check L7() else D1();
  L8():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 8 [r3];
  D4():
    deopt 20 [];
  L2(r6):
    st trafo = r6;
    goto L3();
  L7():
    goto L0(r3);
  L9():
    trafo3 = ld trafo;
    check L11() else D2();
  L10():
    r5 = dyn base1(<sym trafo>);
    goto L2(r5);
  L14():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r11 = dyn gregexpr[, , `...`](p, p1, ddd1);
    check L15() else D5();
  D2():
    deopt 12 [trafo3];
  D5():
    deopt 24 [r11];
  L11():
    trafo4 = force? trafo3;
    checkMissing(trafo4);
    list = ldf list in base;
    r7 = dyn list(trafo4);
    check L12() else D3();
  L15():
    st m = r11;
    lapply = ldf lapply;
    check L16() else D6();
  D3():
    deopt 15 [r7];
  D6():
    deopt 27 [];
  L12():
    goto L2(r7);
  L16():
    p4 = prom<V +>{
      regmatches = ldf regmatches;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r14 = dyn regmatches(p2, p3);
      return r14;
    };
    p5 = prom<V +>{
      r16 = clos inner3708401697;
      return r16;
    };
    r18 = dyn lapply(p4, p5);
    check L17() else D7();
  D7():
    deopt 30 [r18];
  L17():
    st v = r18;
    v = ld v;
    check L18() else D8();
  D8():
    deopt 32 [v];
  L18():
    v1 = force? v;
    checkMissing(v1);
    l = ld x;
    regmatches__ = ldf `regmatches<-`;
    check L19() else D9();
  D9():
    deopt 35 [v1, l, v1];
  L19():
    p6 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r20 = dyn regmatches__(l, NULL, p6, v1);
    check L20() else D10();
  D10():
    deopt 38 [v1, r20];
  L20():
    st x = r20;
    x5 = ld x;
    check L21() else D11();
  D11():
    deopt 40 [x5];
  L21():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  }
}
fun inner1856213936(yi) {
  (reg yi:*) -+> V { var yi:*, reg do_call:cls, reg sprintf:*, reg sprintf1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg replacement:*, reg replacement1:V, reg list:cls, reg r5:V, reg Map:cls, reg r6:cls, reg p1:p(V +), reg trafo:*, reg trafo1:V, reg p2:p(V +), reg count:*, reg count1:V, reg r9:V, reg p3:p(V +), reg r11:V, reg c:cls, reg r12:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st yi = yi;
    do_call = ldf `do.call`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sprintf = ld sprintf;
      sprintf1 = force? sprintf;
      checkMissing(sprintf1);
      return sprintf1;
    };
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r2):
      return r2;
    L2():
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r1 = dyn base(<lang list(replacement)>, <lang Map(function((tr=, co=), fsub("\\", "\\\\", tr(`[`(yi, co))), NULL), trafo, `+`(count, 1))>);
      goto L0(r1);
    L1(r4):
      Map = ldf Map;
      p1 = prom<V +>{
        r6 = clos inner1609025406;
        return r6;
      };
      p2 = prom<V +>{
        trafo = ld trafo;
        trafo1 = force? trafo;
        checkMissing(trafo1);
        return trafo1;
      };
      p3 = prom<V +>{
        count = ld count;
        count1 = force? count;
        checkMissing(count1);
        r9 = `+`(count1, 1);
        return r9;
      };
      r11 = dyn Map(p1, p2, p3);
      c = ldf c in base;
      r12 = dyn c(r4, r11);
      goto L0(r12);
    L4():
      replacement = ld replacement;
      replacement1 = force? replacement;
      checkMissing(replacement1);
      list = ldf list in base;
      r5 = dyn list(replacement1);
      goto L1(r5);
    L5():
      r3 = dyn base1(<sym replacement>);
      goto L1(r3);
    };
    r14 = dyn do_call(p, p4);
    check L1() else D1();
  D1():
    deopt 4 [r14];
  L1():
    popenv;
    return r14;
  }
}
fun inner1609025406(tr, co) {
  (reg tr:*, reg co:*) -+> V { var tr:*, var co:*, reg fsub:cls, reg tr1:cls, reg yi:*, reg yi1:V, reg c:L, reg yi3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg co1:*, reg co2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st tr = tr;
    st co = co;
    fsub = ldf fsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      tr1 = ldf tr;
      p = prom<V +>{
        yi = ld yi;
        yi1 = force? yi;
        checkMissing(yi1);
        c = `is.object`(yi1);
        if c then L1() else L2(yi1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", yi1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(yi3):
        co1 = ld co;
        co2 = force? co1;
        __ = ldf `[` in base;
        r = dyn __(yi3, co2);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn tr1(p);
      return r2;
    };
    r4 = dyn fsub("\\", "\\\\", p1);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg regmatches:cls, reg e1:*, reg e2:V, reg p:p(V +), reg regexec:cls, reg pattern:*, reg pattern1:V, reg p1:p(V +), reg e3:*, reg e4:V, reg p2:p(V +), reg ddd:*, reg r3:V, reg p3:p(V +), reg r5:V, reg unlist:cls, reg Map:cls, reg r6:cls, reg p4:p(V +), reg e5:*, reg e6:V, reg p5:p(V +), reg y:*, reg y1:V, reg p6:p(V +), reg r10:V, reg p7:p(V +), reg r12:V |
    mkenv;
    st e = e;
    regmatches = ldf regmatches;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p3 = prom<V +>{
      regexec = ldf regexec;
      p1 = prom<V +>{
        pattern = ld pattern;
        pattern1 = force? pattern;
        checkMissing(pattern1);
        return pattern1;
      };
      p2 = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      ddd = ld `...`;
      r3 = dyn regexec[, , `...`](p1, p2, ddd);
      return r3;
    };
    r5 = dyn regmatches(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    st y = r5;
    unlist = ldf unlist;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p7 = prom<V +>{
      Map = ldf Map;
      p4 = prom<V +>{
        r6 = clos inner2262807496;
        return r6;
      };
      p5 = prom<V +>{
        e5 = ld e;
        e6 = force? e5;
        checkMissing(e6);
        return e6;
      };
      p6 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r10 = dyn Map(p4, p5, p6);
      return r10;
    };
    r12 = dyn unlist(p7);
    check L3() else D3();
  D3():
    deopt 9 [r12];
  L3():
    popenv;
    return r12;
  }
}
fun inner2262807496(ei, yi) {
  (reg ei:*, reg yi:*) -+> V { var ei:*, var yi:*, reg sub:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg replace:cls, reg yi1:*, reg yi2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg ei1:*, reg ei2:V, reg p3:p(V +), reg ddd:*, reg r5:V |
    mkenv;
    st ei = ei;
    st yi = yi;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p2 = prom<V +>{
      replace = ldf replace;
      p1 = prom<V +>{
        yi1 = ld yi;
        yi2 = force? yi1;
        checkMissing(yi2);
        return yi2;
      };
      r2 = dyn replace(p1);
      return r2;
    };
    p3 = prom<V +>{
      ei1 = ld ei;
      ei2 = force? ei1;
      checkMissing(ei2);
      return ei2;
    };
    ddd = ld `...`;
    r5 = dyn sub[, , , `...`](p, p2, p3, ddd);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}