fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner753952429;
    st namespaceImport = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner753952429(self, `...`, from, except) {
  (reg self:*, reg ddd:dots, reg from:*, reg except:*) -+> V { var self:*, var `...`:dots?, var from:*, reg from_isMissing:L, reg from_orDefault:*, var except:*, reg except_isMissing:L, reg except_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg namespaceImportFrom:cls, reg self1:*, reg self2:V, reg p1:p(V +), reg asNamespace:cls, reg ns:*, reg ns1:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg from1:*, reg from2:V, reg p4:p(V +), reg except1:*, reg except2:V, reg p5:p(V +), reg r11:V |
    mkenv;
    st self = self;
    st `...` = ddd;
    from_isMissing = missing.0(from);
    if from_isMissing then L0(NULL) else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    except_isMissing = missing.0(except);
    if except_isMissing then L1() else L2(except);
  L1():
    p = prom<V +>{
      character = ldf character;
      r = dyn character(0);
      return r;
    };
    goto L2(p);
  L2(except_orDefault):
    st except = except_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L3(r3):
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L4(i);
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r2 = dyn base(<sym ...>);
    goto L3(r2);
  D0():
    deopt 2 [];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L5();
  L8():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L9() else D1();
  D1():
    deopt 4 [r4];
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st ns = x;
    namespaceImportFrom = ldf namespaceImportFrom;
    check L11() else D2();
  L9():
    goto L3(r4);
  L10():
    invisible.0();
    popenv;
    return i2;
  D2():
    deopt 6 [i2];
  L11():
    p1 = prom<V +>{
      self1 = ld self;
      self2 = force? self1;
      checkMissing(self2);
      return self2;
    };
    p3 = prom<V +>{
      asNamespace = ldf asNamespace;
      p2 = prom<V +>{
        ns = ld ns;
        ns1 = force? ns;
        checkMissing(ns1);
        return ns1;
      };
      r7 = dyn asNamespace(p2);
      return r7;
    };
    p4 = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    p5 = prom<V +>{
      except1 = ld except;
      except2 = force? except1;
      checkMissing(except2);
      return except2;
    };
    r11 = dyn namespaceImportFrom[, , from, except](p1, p3, p4, p5);
    check L12() else D3();
  D3():
    deopt 13 [i2, r11];
  L12():
    goto L4(i2);
  }
}