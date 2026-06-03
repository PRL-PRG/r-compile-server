fun main() {
  () --> v(I)f { reg r:v(I)o, reg r1:I, reg r1b:v1(I) |
    r = v(I)[1, 2, 3];
    prom<v1(I) ->{ r1 = r[0]; r1b = box<I --> v1(I)>(r1); return r1b; };
    # prov-error: Consume after capture: r
    return consume r;
  }
}
