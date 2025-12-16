fun main() {
  () -+> V { reg r:cls, reg seq_default:*, reg seq_default1:V, reg seq:cls, reg r1:V, reg r2:cls, reg density:cls, reg structure:cls, reg rnorm:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner242215319;
    st chkDots = r;
    seq_default = ld `seq.default`;
    check L0() else D0();
  D0():
    deopt 3 [seq_default];
  L0():
    seq_default1 = force? seq_default;
    checkMissing(seq_default1);
    seq = ldf seq;
    check L1() else D1();
  D1():
    deopt 6 [];
  L1():
    r1 = dyn seq[, , foo](1.0, 5.0, "bar");
    check L2() else D2();
  D2():
    deopt 11 [r1];
  L2():
    r2 = clos `inner-103057629`;
    st `density.f` = r2;
    density = ldf density;
    check L3() else D3();
  D3():
    deopt 16 [];
  L3():
    p1 = prom<V +>{
      structure = ldf structure;
      p = prom<V +>{
        rnorm = ldf rnorm;
        r3 = dyn rnorm(10.0);
        return r3;
      };
      r5 = dyn structure[, class](p, "f");
      return r5;
    };
    r7 = dyn density[, bar, baz](p1, TRUE, TRUE);
    check L4() else D4();
  D4():
    deopt 22 [r7];
  L4():
    st x = r7;
    invisible.0();
    popenv;
    return r7;
  }
}
fun inner242215319(`...`, `which.call`, allowed) {
  (reg ddd:dots, reg which_call:*, reg allowed:*) -+> V { var `...`:dots?, var `which.call`:*, reg which_call_isMissing:L, reg which_call_orDefault:*, reg p:p(V +), var allowed:*, reg allowed_isMissing:L, reg allowed_orDefault:*, reg character:cls, reg r1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg ___length:cls, reg r5:V, reg c:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg nx:*, reg nx1:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg paste:cls, reg deparse:cls, reg sys_call:cls, reg which_call1:*, reg which_call2:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c1:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg paste1:cls, reg sQuote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg ___names:cls, reg r22:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V, reg p12:p(V +), reg r30:V |
    mkenv;
    st `...` = ddd;
    which_call_isMissing = missing.0(which_call);
    if which_call_isMissing then L0() else L1(which_call);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(which_call_orDefault):
    st `which.call` = which_call_orDefault;
    allowed_isMissing = missing.0(allowed);
    if allowed_isMissing then L2() else L3(allowed);
  L2():
    p1 = prom<V +>{
      character = ldf character;
      r1 = dyn character(0.0);
      return r1;
    };
    goto L3(p1);
  L3(allowed_orDefault):
    st allowed = allowed_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L4(r4):
    st nx = r4;
    c = `as.logical`(r4);
    if c then L9() else L5();
  L6():
    ___length = ldf `...length` in base;
    r5 = dyn ___length();
    check L8() else D0();
  L7():
    r3 = dyn base();
    goto L4(r3);
  D0():
    deopt 3 [r5];
  L5():
    invisible.0();
    popenv;
    return NULL;
  L8():
    goto L4(r5);
  L9():
    warning = ldf warning;
    check L10() else D1();
  D1():
    deopt 6 [];
  L10():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        ngettext = ldf ngettext;
        p2 = prom<V +>{
          nx = ld nx;
          nx1 = force? nx;
          checkMissing(nx1);
          return nx1;
        };
        r7 = dyn ngettext(p2, "In %s :\n extra argument %s will be disregarded", "In %s :\n extra arguments %s will be disregarded");
        return r7;
      };
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          deparse = ldf deparse;
          p5 = prom<V +>{
            sys_call = ldf `sys.call`;
            p4 = prom<V +>{
              which_call1 = ld `which.call`;
              which_call2 = force? which_call1;
              checkMissing(which_call2);
              return which_call2;
            };
            r10 = dyn sys_call(p4);
            return r10;
          };
          p6 = prom<V +>{
            sym1 = ldf c;
            base1 = ldf c in base;
            guard1 = `==`.4(sym1, base1);
            if guard1 then L1() else L2();
          L0(r13):
            return r13;
          L1():
            c1 = ldf c in base;
            r14 = dyn c1();
            goto L0(r14);
          L2():
            r12 = dyn base1();
            goto L0(r12);
          };
          r16 = dyn deparse[, control](p5, p6);
          return r16;
        };
        r18 = dyn paste[, collapse](p7, "\n");
        return r18;
      };
      p11 = prom<V +>{
        paste1 = ldf paste;
        p10 = prom<V +>{
          sQuote = ldf sQuote;
          p9 = prom<V +>{
            sym2 = ldf `...names`;
            base2 = ldf `...names` in base;
            guard2 = `==`.4(sym2, base2);
            if guard2 then L1() else L2();
          L0(r21):
            return r21;
          L1():
            ___names = ldf `...names` in base;
            r22 = dyn ___names();
            goto L0(r22);
          L2():
            r20 = dyn base2();
            goto L0(r20);
          };
          r24 = dyn sQuote(p9);
          return r24;
        };
        r26 = dyn paste1[, collapse](p10, ", ");
        return r26;
      };
      r28 = dyn sprintf(p3, p8, p11);
      return r28;
    };
    r30 = dyn warning[, `call.`, domain](p12, FALSE, NA_LGL);
    check L11() else D2();
  D2():
    deopt 12 [r30];
  L11():
    popenv;
    return r30;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NextMethod:cls, reg r:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NextMethod = ldf NextMethod;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn NextMethod("density");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}