fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2657278941;
    st `.format_calls_in_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2657278941(calls, f) {
  (reg calls:*, reg f:*) -+> V { var calls:*, var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg paste0:cls, reg unlist:cls, reg lapply:cls, reg calls1:*, reg calls2:V, reg p2:p(V +), reg r7:cls, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg c:cls, reg r14:V |
    mkenv;
    st calls = calls;
    st f = f;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("File %s:", sQuote(f))>, <lang paste0("  ", unlist(lapply(calls, function((e=), paste(deparse(e), collapse="\n"), NULL))))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r3 = dyn sQuote(p);
      return r3;
    };
    r5 = dyn gettextf("File %s:", p1);
    check L4() else D1();
  D1():
    deopt 6 [r5];
  L4():
    paste0 = ldf paste0;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        lapply = ldf lapply;
        p2 = prom<V +>{
          calls1 = ld calls;
          calls2 = force? calls1;
          checkMissing(calls2);
          return calls2;
        };
        p3 = prom<V +>{
          r7 = clos inner3708401697;
          return r7;
        };
        r9 = dyn lapply(p2, p3);
        return r9;
      };
      r11 = dyn unlist(p4);
      return r11;
    };
    r13 = dyn paste0("  ", p5);
    check L6() else D3();
  D3():
    deopt 11 [r13];
  L6():
    c = ldf c in base;
    r14 = dyn c(r5, r13);
    check L7() else D4();
  D4():
    deopt 13 [r14];
  L7():
    goto L0(r14);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg paste:cls, reg deparse:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r1 = dyn deparse(p);
      return r1;
    };
    r3 = dyn paste[, collapse](p1, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}