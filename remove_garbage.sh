#!/bin/bash
ls | grep -v -e .c$ -e .sh$ -e .txt$ -e .dat$ | xargs -t rm
