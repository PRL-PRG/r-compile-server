fun main() {
  () --> v1(I) {
    x: v1(I) = box< I --> v1(I) >(42);
    p: p(v1(I) -) = prom<v1(I) ->{
      # y is a real register defined inside the promise...
      # cfg-error: Local register y assigned after use(s)
      y: v1(I) = box< I --> v1(I) >(42);
      return x;
    };
    # ...so it doesn't dominate this use in the enclosing scope.
    # cfg-error: Local register y used before assignment
    # prov-error: Read before write: y
    return y;
  }
}
