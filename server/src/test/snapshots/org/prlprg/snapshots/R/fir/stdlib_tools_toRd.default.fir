fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1105046467;
    st `toRd.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1105046467(obj, `...`) {
  (reg obj:*, reg ddd:dots) -+> V { var obj:*, var `...`:dots?, reg r:cls, reg fsub:cls, reg fsub1:cls, reg fsub2:cls, reg fsub3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg obj1:*, reg obj2:V, reg as_character:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V |
    mkenv;
    st obj = obj;
    st `...` = ddd;
    r = clos inner1635436807;
    st fsub = r;
    fsub = ldf fsub;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p3 = prom<V +>{
      fsub1 = ldf fsub;
      p2 = prom<V +>{
        fsub2 = ldf fsub;
        p1 = prom<V +>{
          fsub3 = ldf fsub;
          p = prom<V +>{
            sym = ldf `as.character`;
            base = ldf `as.character` in base;
            guard = `==`.4(sym, base);
            if guard then L1() else L2();
          L0(r2):
            return r2;
          L1():
            obj1 = ld obj;
            obj2 = force? obj1;
            checkMissing(obj2);
            as_character = ldf `as.character` in base;
            r3 = dyn as_character(obj2);
            goto L0(r3);
          L2():
            r1 = dyn base(<sym obj>);
            goto L0(r1);
          };
          r5 = dyn fsub3("\\", "\\\\", p);
          return r5;
        };
        r7 = dyn fsub2("{", "\\{", p1);
        return r7;
      };
      r9 = dyn fsub1("}", "\\}", p2);
      return r9;
    };
    r11 = dyn fsub("%", "\\%", p3);
    check L1() else D1();
  D1():
    deopt 8 [r11];
  L1():
    popenv;
    return r11;
  }
}
fun inner1635436807(from, to, x) {
  (reg from:*, reg to:*, reg x:*) -+> V { var from:*, var to:*, var x:*, reg gsub:cls, reg from1:*, reg from2:V, reg p:p(V +), reg to1:*, reg to2:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st from = from;
    st to = to;
    st x = x;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    p1 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn gsub[, , , fixed](p, p1, p2, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}