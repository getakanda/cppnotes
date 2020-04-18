base_dir = $(shell pwd)
build_dir = build

all: bbb

c:
	rm -rf $(base_dir)/$(build_dir)

b:
	mkdir -p $(base_dir)/$(build_dir) && \
	cd $(base_dir)/$(build_dir) && \
	conan install $(base_dir) --build="missing" && \
	cmake $(base_dir) -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_STANDARD_COMPUTED_DEFAULT=17 && \
	make -C $(base_dir)/$(build_dir)

r:
	$(base_dir)/$(build_dir)/bin/myapp

