pipeline {
    agent { docker { image 'python:3.5.1' } }
    stages {
        stage('build') {
            steps {
                sh 'echo "hello world"'
                sh '''
                    echo "test echo 1"
                    echo "test echo 2"
                   '''
            }
        }
    }
}