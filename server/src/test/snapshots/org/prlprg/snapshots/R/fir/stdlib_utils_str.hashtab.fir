fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `str.hashtab` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg cat:cls, reg sprintf:cls, reg numhash:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg typhash:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg object5:*, reg object6:V, reg unclass:cls, reg r8:V, reg c:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        numhash = ldf numhash;
        p = prom<V +>{
          object1 = ld object;
          object2 = force? object1;
          checkMissing(object2);
          return object2;
        };
        r1 = dyn numhash(p);
        return r1;
      };
      p3 = prom<V +>{
        typhash = ldf typhash;
        p2 = prom<V +>{
          object3 = ld object;
          object4 = force? object3;
          checkMissing(object4);
          return object4;
        };
        r4 = dyn typhash(p2);
        return r4;
      };
      p5 = prom<V +>{
        format = ldf format;
        p4 = prom<V +>{
          sym = ldf unclass;
          base = ldf unclass in base;
          guard = `==`.4(sym, base);
          if guard then L2() else L3();
        L0(r7):
          c = `is.object`(r7);
          if c then L4() else L5(r7);
        L2():
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          unclass = ldf unclass in base;
          r8 = dyn unclass(object6);
          goto L0(r8);
        L3():
          r6 = dyn base(<sym object>);
          goto L0(r6);
        L1(dx1):
          return dx1;
        L4():
          dr = tryDispatchBuiltin.1("[[", r7);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L6() else L5(dr);
        L5(r10):
          __ = ldf `[[` in base;
          r11 = dyn __(r10, 1.0);
          goto L1(r11);
        L6():
          dx = getTryDispatchBuiltinValue(dr);
          goto L1(dx);
        };
        r13 = dyn format(p4);
        return r13;
      };
      r15 = dyn sprintf("class 'hashtab': %d entries; type=\"%s\", addr=%s", p1, p3, p5);
      return r15;
    };
    r17 = dyn cat(p6, "\n");
    check L1() else D1();
  D1():
    deopt 4 [r17];
  L1():
    popenv;
    return r17;
  }
}